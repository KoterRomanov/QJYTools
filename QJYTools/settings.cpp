#include "settings.h"
#include "define.h"
#include "ui_Settings.h"

#include <QListView>
#include <QMouseEvent>
#include <QMessageBox>
#include <QJsonDocument>
#include <QJsonValue>
#include <QJsonObject>
#include <QJsonArray>
#include <QDebug>
#include <QProcess>
#include <QStandardPaths>

//#define ENGLISH_VERSION

Settings::Settings(QWidget *parent)
    :QWidget(parent)
    ,ui(new Ui::widget_settings),
      m_use_gateway(false)
{
    ui->setupUi(this);

    ui->combobox_resolution->setView(new QListView());
    ui->combobox_fps->setView(new QListView());
    ui->combobox_bitrate->setView(new QListView());

    // 设定分辨率下拉框显示项目个数
    ui->combobox_resolution->setMaxVisibleItems(2);

    // 设定比特流下拉框显示项目个数
    ui->combobox_bitrate->setMaxVisibleItems(1);

    // 设定FPS 下拉框显示项目个数
    ui->combobox_fps->setMaxVisibleItems(1);

    // 设置无边框窗口模式
    setWindowFlags(Qt::FramelessWindowHint);

    // 设置背景透明
    setAttribute(Qt::WA_TranslucentBackground, true);

    // 拦截 title_widget 对象的事件
    ui->title_widget->installEventFilter(this);

    // 默认不使用网关
    ui->checkbox_use_gateway->setChecked(false);

    // USB 设备共享列表根据内容使用列宽度
    ui->tablewidget_share_usb->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    // 隐藏垂直表头
    ui->tablewidget_share_usb->verticalHeader()->setVisible(false);

#ifdef ENGLISH_VERSION
    ui->label_title->setText("Settings");

    ui->label_resolution->setText("Res:");
    ui->label_fps->setText("FPS:");
    ui->label_bitrate->setText("Bitrate:");

    ui->button_ok->setText("Ok");
    ui->button_cancel->setText("Cancel");

    ui->checkbox_use_gateway->setText("Gateway");
    ui->checkbox_screen->setText("Full Screen");
    ui->label_gateway->setText("Gateway:");
    ui->label_tcp_port->setText("TCP Port:");
    ui->label_udp_port->setText("UDP Port:");


    ui->label_share_usb->setText("USB Device");
#endif

    // 读取 USB 设备并写入文件
    process = new QProcess;
    connect(process, QOverload<int, QProcess::ExitStatus>::of(&QProcess::finished),
          [=](int exitCode, QProcess::ExitStatus exitStatus){ read_usb_device(); });

    process->start("USBDeviceList.exe");
}

Settings::~Settings()
{
    delete ui;
    delete process;
}

QString Settings::get_resolution() const
{
    return ui->combobox_resolution->currentText();
}

QString Settings::get_fps() const
{
    return ui->combobox_fps->currentText();
}

QString Settings::get_bitrate() const
{
    return ui->combobox_bitrate->currentText();
}

bool Settings::use_gateway() const
{
    return m_use_gateway;
}

bool Settings::show_screen() const
{
    return ui->checkbox_screen->isChecked();
}

QString Settings::get_gateway() const
{
    return ui->lineedit_gateway->text();
}

QString Settings::get_tcp_port() const
{
    return ui->lineedit_tcp_port->text();
}

QString Settings::get_udp_port() const
{
    return ui->lineedit_udp_port->text();
}

void Settings::set_use_gateway(bool use)
{
    ui->checkbox_use_gateway->setChecked(use);
}

void Settings::set_show_screen(bool check)
{
    ui->checkbox_screen->setChecked(check);
}

void Settings::set_gateway(QString gateway)
{
    ui->lineedit_gateway->setText(gateway);
}

void Settings::set_gateway_tcp_port(QString gateway_tcp_port)
{
    ui->lineedit_tcp_port->setText(gateway_tcp_port);
}

void Settings::set_gateway_udp_port(QString gateway_udp_port)
{
    ui->lineedit_udp_port->setText(gateway_udp_port);
}

void Settings::usb_dev_shared_ouput()
{
    QString path = QStandardPaths::writableLocation(QStandardPaths::AppDataLocation);
    path = path.remove("QingJiao");
    path = path + "qingjiaoview/";
    path = path + "UsbShareList";

    QFile file(path);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))    return;

    QTextStream out(&file);

    int usb_dev_count = ui->tablewidget_share_usb->rowCount();
    for(int i = 0; i < usb_dev_count; ++i)
    {
        QTableWidgetItem *item = ui->tablewidget_share_usb->item(i, 2);
        if (item->checkState() == Qt::Checked)
        {
            out << item->data(Qt::UserRole).toString() << endl;
        }
    }

    out.flush();
    file.close();
}

void Settings::on_button_ok_clicked(bool checked)
{
    Q_UNUSED(checked)
    if (m_use_gateway)
    {
        if (ui->lineedit_gateway->text().isEmpty())
        {
            QMessageBox::information(nullptr, QStringLiteral("提示"), QStringLiteral("请填写网关"));
            return;
        }

        if (ui->lineedit_tcp_port->text().isEmpty())
        {
            QMessageBox::information(nullptr, QStringLiteral("提示"), QStringLiteral("请填写网关TCP端口号"));
            return;
        }

        if (ui->lineedit_udp_port->text().isEmpty())
        {
            QMessageBox::information(nullptr, QStringLiteral("提示"), QStringLiteral("请填写网关UDP端口号"));
            return;
        }
    }



    emit modify_signal();
    close();
}

void Settings::on_button_cancel_clicked(bool checked)
{
    Q_UNUSED(checked)

    close();
}

void Settings::on_button_close_clicked(bool checked)
{
    Q_UNUSED(checked)

    close();
}

bool Settings::eventFilter(QObject *watched, QEvent *event)
{
    if (watched == ui->title_widget)
    {
        if (event->type() == QEvent::MouseButtonPress)
        {
            QMouseEvent *mouseEvent = static_cast<QMouseEvent*>(event);
            if (mouseEvent->buttons() == Qt::LeftButton)
            {
                this->setProperty("PressPos", mouseEvent->globalPos());
                this->setProperty("IsLeftPress", true);
                return true;
            }
        }
        else if (event->type() == QEvent::MouseMove)
        {
            QMouseEvent *mouseEvent = static_cast<QMouseEvent*>(event);
            if (mouseEvent->buttons() == Qt::LeftButton)
            {
                bool isLeftPress = this->property("IsLeftPress").toBool();
                if (isLeftPress)
                {
                    if (this->isMaximized())
                    {
                        return true;
                    }
                    auto pressPos = this->property("PressPos").toPoint();
                    auto offsetPos = mouseEvent->globalPos() - pressPos;
                    this->move(this->geometry().topLeft() + offsetPos);
                    this->setProperty("PressPos", mouseEvent->globalPos());
                    return true;
                }
            }
        }
        else if (event->type() == QEvent::MouseButtonRelease)
        {
            QMouseEvent *mouseEvent = static_cast<QMouseEvent*>(event);
            if (mouseEvent->buttons() == Qt::LeftButton)
            {
                this->setProperty("IsLeftPress", false);
                this->setProperty("PressPos", QPoint(0, 0));
                return true;
            }
        }

    }

    return QWidget::eventFilter(watched, event);
}

void Settings::read_usb_device()
{
    QString path = QStandardPaths::writableLocation(QStandardPaths::AppDataLocation);
    path = path.remove("QingJiao");
    path = path + "qingjiaoview/";
    path = path + "usblist.json";

    QFile file(path);
    if (file.open(QIODevice::ReadOnly))
    {
        QByteArray json = file.readAll();
        file.close();

        QJsonDocument doc = QJsonDocument::fromJson(json);
        QJsonObject jsonObj = doc.object();
        if (jsonObj["deviceList"].isArray())
        {
            auto usblist = jsonObj["deviceList"].toArray();
            qDebug() << usblist;
            ui->tablewidget_share_usb->setRowCount(usblist.count());
            for (int i = 0; i < usblist.size(); ++i)
            {
                QJsonValue arrObj = usblist[i];

                QString name = arrObj["name"].toString();
                QString serial = arrObj["serial"].toString();

                m_usb_dev_list.emplace_back(USBDevice{ name, serial, 0 });

                QTableWidgetItem *item_id = new QTableWidgetItem(QString::number(i));
                ui->tablewidget_share_usb->setItem(i, 0, item_id);

                item_id->setFlags(item_id->flags() & (~Qt::ItemIsEditable));

                QTableWidgetItem *item_name = new QTableWidgetItem(QString(name.data()));
                ui->tablewidget_share_usb->setItem(i, 1, item_name);
                item_name->setFlags(item_id->flags() & (~Qt::ItemIsEditable));

                QTableWidgetItem *item_shared = new QTableWidgetItem();
                item_shared->setCheckState(Qt::Unchecked);
                item_shared->setFlags(item_id->flags() & (~Qt::ItemIsEditable));
                item_shared->setData(Qt::UserRole, QVariant(serial));
                ui->tablewidget_share_usb->setItem(i, 2, item_shared);

                ui->tablewidget_share_usb->horizontalHeader()->setSectionResizeMode(i, QHeaderView::ResizeToContents);
            }
        }
    }
}

void Settings::on_checkbox_use_gateway_stateChanged(int arg1)
{
    m_use_gateway = arg1;
    ui->label_gateway->setHidden(!arg1);
    ui->label_tcp_port->setHidden(!arg1);
    ui->label_udp_port->setHidden(!arg1);
    ui->lineedit_gateway->setHidden(!arg1);
    ui->lineedit_tcp_port->setHidden(!arg1);
    ui->lineedit_udp_port->setHidden(!arg1);

    int move_height = 100;

    if (arg1 == Qt::Checked)
    {
        ui->label_share_usb->move(ui->label_share_usb->pos().x(), ui->label_share_usb->pos().y()+move_height);
        ui->tablewidget_share_usb->move(ui->tablewidget_share_usb->pos().x(), ui->tablewidget_share_usb->pos().y()+move_height);

//        ui->checkbox_use_gateway->move(ui->checkbox_use_gateway->pos().x(), ui->checkbox_use_gateway->pos().y()+200);
//        ui->checkbox_screen->move(ui->checkbox_screen->pos().x(), ui->checkbox_screen->pos().y()+200);

        ui->button_ok->move(ui->button_ok->pos().x(), ui->button_ok->pos().y()+move_height);
        ui->button_cancel->move(ui->button_cancel->pos().x(), ui->button_cancel->pos().y()+move_height);

        ui->widget_bottom->setFixedHeight(size().height()+move_height);

        setFixedHeight( size().height()+move_height);
    }
    else if (arg1 == Qt::Unchecked)
    {
        ui->label_share_usb->move(ui->label_share_usb->pos().x(), ui->label_share_usb->pos().y()-move_height);
        ui->tablewidget_share_usb->move(ui->tablewidget_share_usb->pos().x(), ui->tablewidget_share_usb->pos().y()-move_height);

//        ui->checkbox_use_gateway->move(ui->checkbox_use_gateway->pos().x(), ui->checkbox_use_gateway->pos().y()-200);
//        ui->checkbox_screen->move(ui->checkbox_screen->pos().x(), ui->checkbox_screen->pos().y()-200);

        ui->button_ok->move(ui->button_ok->pos().x(), ui->button_ok->pos().y()-move_height);
        ui->button_cancel->move(ui->button_cancel->pos().x(), ui->button_cancel->pos().y()-move_height);

        ui->widget_bottom->setFixedHeight(size().height()-move_height);
        setFixedHeight( size().height()-move_height);
    }

    update();
}
