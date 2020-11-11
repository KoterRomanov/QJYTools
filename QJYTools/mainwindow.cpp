#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "settings.h"
#include "define.h"

#include <QMouseEvent>
#include <QRegExpValidator>
#include <QProcess>
#include <QSettings>
#include <QTimer>
#include <QDebug>
#include <QMessageBox>
#include <QGraphicsDropShadowEffect>

/*
 * 问题1: 连接按钮连续点击, 导致事件阻塞, 一个连接完成后又会重新开启一个连接
 *
 * 问题2: 设置界面顶部圆角还有白色背景
 *
 *
 *
 *
 *
 */

//#define ENGLISH_VERSION

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , m_is_connecting(false)
{
    ui->setupUi(this);


    // 地址栏添加正则表达式
    QRegExp rx_address("\\b(?:(?:25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\\.){3}(?:25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\\b");
    ui->lineedit_address->setValidator(new QRegExpValidator(rx_address));

    // 端口栏添加正则表达式
    QRegExp rx_port("[1-9][0-9][0-9][0-9][0-9]");
    ui->lineedit_port->setValidator(new QRegExpValidator(rx_port));

    m_settings = new Settings;
    m_settings->setAttribute(Qt::WA_ShowModal, true);

    connect(m_settings, SIGNAL(modify_signal()), this, SLOT(slot_settings_modify()));

    // 移除顶部标题栏
    setWindowFlags(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground, true); // 解决设置了 central widget 圆角后, 仍然有两个白色小角的问题.

    ui->title_widget->installEventFilter(this);
    ui->button_connection->installEventFilter(this);

    // 获取默认参数
    get_params();

    // 获取记录的用户数据
    save_user_data();

    m_connection_timer = new QTimer(this);
    m_connection_timer->setSingleShot(true); // 单次定时器
    connect(m_connection_timer, SIGNAL(timeout()), this, SLOT(slot_connection()));


#ifdef ENGLISH_VERSION
    ui->label_title->setText("QDP");

    ui->label_address->setText("Address:");
    ui->label_port->setText("Port:");
    ui->label_username->setText("Username:");
    ui->label_passwd->setText("Password:");

    ui->lineedit_address->setPlaceholderText("remote machine address");
    ui->lineedit_port->setPlaceholderText("remote machine port");
    ui->lineedit_username->setPlaceholderText("remote machine username");
    ui->lineedit_passwd->setPlaceholderText("remote machine password");

    ui->button_connection->setText("Connect");
#endif
}

MainWindow::~MainWindow()
{
    delete m_settings;
    m_settings = nullptr;

    delete ui;
}

void MainWindow::on_button_close_clicked(bool checked)
{
    Q_UNUSED(checked)
    qApp->quit();
}

void MainWindow::on_button_minisize_clicked(bool checked)
{
    Q_UNUSED(checked)
    showMinimized();
}

void MainWindow::on_button_settings_clicked(bool checked)
{
    Q_UNUSED(checked)
    m_settings->show();
}

void MainWindow::slot_settings_modify()
{
    get_params();
}

bool MainWindow::eventFilter(QObject *watched, QEvent *event)
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
    else if (watched == ui->button_connection)
    {
        if (event->type() == QEvent::MouseButtonPress)
        {
            // 关闭定时器
            m_connection_timer->stop();
        }
        else if (event->type() == QEvent::MouseButtonRelease)
        {
            // 开启定时器
            if (!m_is_connecting)
                m_connection_timer->start(500);
        }
    }

    return QMainWindow::eventFilter(watched, event);
}

void MainWindow::get_params()
{
    if (!m_settings)    return;

    m_resolution = m_settings->get_resolution();
    m_fps = m_settings->get_fps();
    m_bitrate = m_settings->get_bitrate();
}

void MainWindow::save_user_data()
{
    m_user_data = new QSettings("./Config.ini", QSettings::IniFormat);

    QString remote_address = m_user_data->value("remote_address").toString();
    if (!remote_address.isEmpty())
    {
        ui->lineedit_address->setText(remote_address);
    }

    QString remote_port = m_user_data->value("remote_port").toString();
    if (!remote_port.isEmpty())
    {
        ui->lineedit_port->setText(remote_port);
    }

    QString remote_username = m_user_data->value("remote_username").toString();
    if (!remote_username.isEmpty())
    {
        ui->lineedit_username->setText(remote_username);
    }

    QString remote_passwd = m_user_data->value("remote_passwd").toString();
    if (!remote_passwd.isEmpty())
    {
        ui->lineedit_passwd->setText(remote_passwd);
    }

    int use_gateway = m_user_data->value("use_gateway").toInt();
    if (use_gateway)
    {
        // TODO 将读取到是否使用网关配置写至界面
        m_settings->set_use_gateway(use_gateway);

        QString gateway = m_user_data->value("gateway").toString();
        if (!gateway.isEmpty())
        {
            // TODO 将读取到的网关写至界面
            m_settings->set_gateway(gateway);
        }

        QString gateway_tcp_port = m_user_data->value("gateway_tcp_port").toString();
        if (!gateway_tcp_port.isEmpty())
        {
            // TODO 将读取到的网关 TCP 端口写至界面
            m_settings->set_gateway_tcp_port(gateway_tcp_port);
        }

        QString gateway_udp_port = m_user_data->value("gateway_udp_port").toString();
        if (!gateway_udp_port.isEmpty())
        {
            // TODO 将读取到的网关 UDP 端口写至界面
            m_settings->set_gateway_udp_port(gateway_udp_port);
        }

    }

    int show_screen = m_user_data->value("show_screen").toInt();
    m_settings->set_show_screen(show_screen);

}

void MainWindow::slot_connection()
{
    QString remote_address = ui->lineedit_address->text();
    QString remote_port = ui->lineedit_port->text();
    QString remote_username = ui->lineedit_username->text();
    QString remote_passwd = ui->lineedit_passwd->text();
    if (remote_address.isEmpty() )
    {
#ifdef ENGLISH_VERSION
        QMessageBox::information(nullptr, QStringLiteral("Hint"), QStringLiteral("Please type remote machine address"));
#else
        QMessageBox::information(nullptr, QStringLiteral("提示"), QStringLiteral("请输入IP地址"));
#endif

        return;
    }

    if (remote_port.isEmpty())
    {
#ifdef ENGLISH_VERSION
        QMessageBox::information(nullptr, QStringLiteral("Hint"), QStringLiteral("Please type remote machine port"));
#else
        QMessageBox::information(nullptr, QStringLiteral("提示"), QStringLiteral("请输入端口号"));
#endif

        return;
    }

    if (remote_username.isEmpty())
    {

#ifdef ENGLISH_VERSION
        QMessageBox::information(nullptr, QStringLiteral("Hint"), QStringLiteral("Please type remote machine username"));
#else
        QMessageBox::information(nullptr, QStringLiteral("提示"), QStringLiteral("请输入用户名"));
#endif
        return;
    }

    if (remote_passwd.isEmpty())
    {
#ifdef ENGLISH_VERSION
        QMessageBox::information(nullptr, QStringLiteral("Hint"), QStringLiteral("Please type remote machine password"));
#else
        QMessageBox::information(nullptr, QStringLiteral("提示"), QStringLiteral("请输入密码"));
#endif

        return;
    }

    // 是否使用网关
    bool use_gateway = m_settings->use_gateway();
    bool show_screen = m_settings->show_screen();
    QString use_gateway_string = QString("0");
    QString gateway = m_settings->get_gateway();
    if (gateway.isEmpty())  gateway = QString("gw.qingjiaocloud.com");

    QString gateway_tcp_port = m_settings->get_tcp_port();
    if (gateway_tcp_port.isEmpty()) gateway_tcp_port = QString("10000");

    QString gateway_udp_port = m_settings->get_udp_port();
    if (gateway_udp_port.isEmpty()) gateway_udp_port = QString("10000");

    // disable 连接按钮
    ui->button_connection->setDisabled(true);
    qApp->processEvents();

    // 更新连接按钮状态
    m_is_connecting = true;

    // 最小化
    showMinimized();

    m_user_data->setValue("remote_address", remote_address); // 远程服务端地址
    m_user_data->setValue("remote_port", remote_port);  // 远程服务端端口
    m_user_data->setValue("remote_username", remote_username); // 远程服务端操作系统用户名
    m_user_data->setValue("remote_passwd", remote_passwd);  // 远程服务端操作系统密码
    m_user_data->setValue("use_gateway", QString::number(use_gateway));  // 是否使用网关
    m_user_data->setValue("gateway", gateway); // 网关
    m_user_data->setValue("gateway_tcp_port", gateway_tcp_port); // 网关 TCP 端口
    m_user_data->setValue("gateway_udp_port", gateway_udp_port); // 网关 UDP 端口
    m_user_data->setValue("show_screen", QString::number(show_screen)); // 是否全屏

    QString connectionMode = "1";
    if (use_gateway)
    {
        use_gateway_string = "1";
        connectionMode = "1";
    }

    // 输出用户选择 USB 共享列表
    m_settings->usb_dev_shared_ouput();

    // 命令行运行 qingjiaoview
    QStringList arguments;
    arguments << "--gateway"
              << gateway
              << "--gatewayPort"
              << gateway_tcp_port
              << "--raysync"
              << gateway
              << "--raysyncPort"
              << gateway_udp_port
              << "--server"
              << remote_address
              << "--serverPort"
              << remote_port
              << "--resolution"
              << m_resolution
              << "--fps"
              << m_fps
              << "--bitrate"
              << m_bitrate
              << "--fullscreen"
              << QString::number(show_screen)
              << "--windowCount"
              << "1"
              << "--isGateway"
              << use_gateway_string
              << "--connectionMode"
              << connectionMode
              << "--authenticateMode"
              << "2"
              << "--restart"
              << "0"
              << "--user"
              << remote_username
              << "--passwd"
              << remote_passwd;

    QString program("./qingjiaoview");
    QProcess::startDetached(program, arguments);

    // disable 连接按钮
    ui->button_connection->setDisabled(false);
    qApp->processEvents();

    m_is_connecting = false;    // 更新连接状态

    qApp->quit();

//    showNormal(); // 恢复窗口状态
}
