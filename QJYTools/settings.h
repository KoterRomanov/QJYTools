#ifndef SETTINGS_H
#define SETTINGS_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class widget_settings; }
QT_END_NAMESPACE

class Settings : public QWidget
{
    Q_OBJECT

public:
    Settings(QWidget *parent = nullptr);
    ~Settings();

    QString get_resolution() const;
    QString get_fps() const;
    QString get_bitrate() const;

Q_SIGNALS:
    void modify_signal();

private slots:
    void on_button_ok_clicked(bool checked);

    void on_button_cancel_clicked(bool checked);

    void on_button_close_clicked(bool checked);

private:

    virtual bool eventFilter(QObject *watched, QEvent *event) override;

private:
    Ui::widget_settings *ui;

    QString m_resolution;
    QString m_fps;
    QString m_bitrate;

};

#endif // SETTINGS_H
