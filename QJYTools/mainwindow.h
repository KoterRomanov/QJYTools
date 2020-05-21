#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class Settings;
class QSettings;
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_button_close_clicked(bool checked);

    void on_button_minisize_clicked(bool checked);

    void on_button_settings_clicked(bool checked);

    void slot_settings_modify();

    void slot_connection();

private:

    virtual bool eventFilter(QObject *watched, QEvent *event) override;

    void get_params();

    void save_user_data();

private:
    Ui::MainWindow *ui;
    Settings *m_settings;

    QString m_resolution;
    QString m_fps;
    QString m_bitrate;

    QSettings *m_user_data;

    QTimer *m_connection_timer;
    bool m_is_connecting;

};
#endif // MAINWINDOW_H
