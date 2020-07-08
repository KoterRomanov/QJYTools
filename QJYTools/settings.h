#ifndef SETTINGS_H
#define SETTINGS_H

#include <QWidget>
#include <QProcess>

QT_BEGIN_NAMESPACE
namespace Ui { class widget_settings; }
QT_END_NAMESPACE

struct USBDevice
{
    QString name; // 设备名称
    QString serial; // 序列号
    bool shared; // 是否共享
};

class Settings : public QWidget
{
    Q_OBJECT

public:
    Settings(QWidget *parent = nullptr);
    ~Settings();

    QString get_resolution() const;
    QString get_fps() const;
    QString get_bitrate() const;

    bool use_gateway() const;
    bool show_screen() const;
    QString get_gateway() const;
    QString get_tcp_port() const;
    QString get_udp_port() const;

    void set_use_gateway(bool use);
    void set_show_screen(bool check);
    void set_gateway(QString gateway);
    void set_gateway_tcp_port(QString gateway_tcp_port);
    void set_gateway_udp_port(QString gateway_udp_port);

    /**
     * @brief usb_dev_shared_ouput 输出 USB 共享设备列表至文件
     */
    void usb_dev_shared_ouput();

Q_SIGNALS:
    void modify_signal();

private slots:
    void on_button_ok_clicked(bool checked);

    void on_button_cancel_clicked(bool checked);

    void on_button_close_clicked(bool checked);

    void on_checkbox_use_gateway_stateChanged(int arg1);



private:

    virtual bool eventFilter(QObject *watched, QEvent *event) override;

    void read_usb_device();
    /**
     * @brief read_usb_device 读取可以共享的 USB 设备
     */


private:
    Ui::widget_settings *ui;

    QString m_resolution;
    QString m_fps;
    QString m_bitrate;

    /**
     * @brief m_use_gateway 是否使用网关
     */
    bool m_use_gateway;

    QProcess *process;

    std::vector<USBDevice> m_usb_dev_list;
};

#endif // SETTINGS_H
