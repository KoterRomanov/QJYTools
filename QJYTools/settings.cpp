#include "settings.h"
#include "ui_Settings.h"

#include <QListView>
#include <QMouseEvent>

#define ENGLISH_VERSION

Settings::Settings(QWidget *parent)
    :QWidget(parent)
    ,ui(new Ui::widget_settings)
{
    ui->setupUi(this);

    ui->combobox_resolution->setView(new QListView());
    ui->combobox_fps->setView(new QListView());
    ui->combobox_bitrate->setView(new QListView());

    setWindowFlags(Qt::FramelessWindowHint);

    ui->title_widget->installEventFilter(this);

#ifdef ENGLISH_VERSION
    ui->label_title->setText("Settings");

    ui->label_resolution->setText("Resolution:");
    ui->label_fps->setText("FPS:");
    ui->label_bitrate->setText("Bitrate:");

    ui->button_ok->setText("Ok");
    ui->button_cancel->setText("Cancel");
#endif
}

Settings::~Settings()
{
    delete ui;
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

void Settings::on_button_ok_clicked(bool checked)
{
    Q_UNUSED(checked)

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


