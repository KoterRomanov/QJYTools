/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_address;
    QLabel *label_port;
    QLineEdit *lineedit_address;
    QLineEdit *lineedit_port;
    QPushButton *button_connection;
    QWidget *title_widget;
    QPushButton *button_settings;
    QPushButton *button_minisize;
    QPushButton *button_close;
    QLabel *label_title;
    QLabel *label;
    QLabel *label_username;
    QLineEdit *lineedit_username;
    QLabel *label_passwd;
    QLineEdit *lineedit_passwd;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(448, 370);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(448, 370));
        MainWindow->setMaximumSize(QSize(448, 370));
        MainWindow->setAutoFillBackground(true);
        MainWindow->setStyleSheet(QString::fromUtf8("#MainWindow\n"
"{\n"
"\n"
"\n"
"\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setMinimumSize(QSize(448, 370));
        centralwidget->setMaximumSize(QSize(448, 370));
        centralwidget->setStyleSheet(QString::fromUtf8("#centralwidget\n"
"{\n"
"	background: #FFFFFF;\n"
"	border-top-left-radius: 6px;\n"
"	border-top-right-radius: 6px;\n"
"	\n"
"	border: 1px solid gray;\n"
"\n"
"}"));
        label_address = new QLabel(centralwidget);
        label_address->setObjectName(QString::fromUtf8("label_address"));
        label_address->setGeometry(QRect(30, 100, 91, 16));
        label_address->setStyleSheet(QString::fromUtf8("#label_address\n"
"{\n"
"	color: #47505D;\n"
"	font-size: 13px;\n"
"}"));
        label_port = new QLabel(centralwidget);
        label_port->setObjectName(QString::fromUtf8("label_port"));
        label_port->setGeometry(QRect(30, 150, 91, 16));
        label_port->setStyleSheet(QString::fromUtf8("#label_port\n"
"{\n"
"	color: #47505D;\n"
"	font-size: 13px;\n"
"}"));
        lineedit_address = new QLineEdit(centralwidget);
        lineedit_address->setObjectName(QString::fromUtf8("lineedit_address"));
        lineedit_address->setGeometry(QRect(130, 90, 290, 36));
        lineedit_address->setStyleSheet(QString::fromUtf8("#lineedit_address\n"
"{\n"
"	min-height: 36px;\n"
"	max-height: 36px;\n"
"	min-width: 280px;\n"
"	max-width: 280px;\n"
"	border-radius: 4px;\n"
"	background: #F0F4F5;\n"
"	selection-color: red;\n"
"	padding-left: 10px;\n"
"}\n"
"\n"
"#lineedit_address:hover\n"
"{\n"
"	border: 1px solid #00D770;\n"
"}"));
        lineedit_port = new QLineEdit(centralwidget);
        lineedit_port->setObjectName(QString::fromUtf8("lineedit_port"));
        lineedit_port->setGeometry(QRect(130, 145, 290, 36));
        lineedit_port->setStyleSheet(QString::fromUtf8("#lineedit_port\n"
"{\n"
"	min-height: 36px;\n"
"	max-height: 36px;\n"
"	min-width: 280px;\n"
"	max-width: 280px;\n"
"	border-radius: 4px;\n"
"	background: #F0F4F5;\n"
"	selection-color: red;\n"
"	padding-left: 10px;\n"
"}\n"
"\n"
"#lineedit_port:hover\n"
"{\n"
"	border: 1px solid #00D770;\n"
"}"));
        button_connection = new QPushButton(centralwidget);
        button_connection->setObjectName(QString::fromUtf8("button_connection"));
        button_connection->setGeometry(QRect(180, 320, 110, 36));
        button_connection->setStyleSheet(QString::fromUtf8("#button_connection\n"
"{\n"
"	background: #C4C4C4;\n"
"	border-radius: 4px;\n"
"\n"
"	font-size: 13px;\n"
"	color: #FFFFFF;\n"
"}\n"
"\n"
"#button_connection:hover\n"
"{\n"
"	background: #00D770\n"
"}"));
        title_widget = new QWidget(centralwidget);
        title_widget->setObjectName(QString::fromUtf8("title_widget"));
        title_widget->setGeometry(QRect(0, 0, 448, 48));
        title_widget->setStyleSheet(QString::fromUtf8("#title_widget\n"
"{\n"
"	background:#00D770;\n"
"	border-top-left-radius: 6px;\n"
"	border-top-right-radius: 6px;\n"
"}\n"
""));
        button_settings = new QPushButton(title_widget);
        button_settings->setObjectName(QString::fromUtf8("button_settings"));
        button_settings->setGeometry(QRect(350, 15, 20, 20));
        sizePolicy.setHeightForWidth(button_settings->sizePolicy().hasHeightForWidth());
        button_settings->setSizePolicy(sizePolicy);
        button_settings->setMinimumSize(QSize(20, 20));
        button_settings->setMaximumSize(QSize(20, 20));
        button_settings->setStyleSheet(QString::fromUtf8("#button_settings\n"
"{\n"
"	border-image: url(:/image/settings.png);\n"
"}\n"
"\n"
"#button_settings:hover\n"
"{\n"
"	background: green;\n"
"}"));
        button_minisize = new QPushButton(title_widget);
        button_minisize->setObjectName(QString::fromUtf8("button_minisize"));
        button_minisize->setGeometry(QRect(385, 15, 22, 22));
        sizePolicy.setHeightForWidth(button_minisize->sizePolicy().hasHeightForWidth());
        button_minisize->setSizePolicy(sizePolicy);
        button_minisize->setMinimumSize(QSize(22, 22));
        button_minisize->setMaximumSize(QSize(22, 22));
        button_minisize->setStyleSheet(QString::fromUtf8("#button_minisize\n"
"{\n"
"	border-image: url(:/image/minimize.png);\n"
"}\n"
"\n"
"#button_minisize:hover\n"
"{\n"
"	background: green;\n"
"}"));
        button_close = new QPushButton(title_widget);
        button_close->setObjectName(QString::fromUtf8("button_close"));
        button_close->setGeometry(QRect(415, 15, 22, 22));
        sizePolicy.setHeightForWidth(button_close->sizePolicy().hasHeightForWidth());
        button_close->setSizePolicy(sizePolicy);
        button_close->setMinimumSize(QSize(22, 22));
        button_close->setMaximumSize(QSize(22, 22));
        button_close->setStyleSheet(QString::fromUtf8("#button_close\n"
"{\n"
"	border-image: url(:/image/close.png);\n"
"}\n"
"\n"
"#button_close:hover\n"
"{\n"
"	background: green;\n"
"}"));
        label_title = new QLabel(title_widget);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setGeometry(QRect(53, 16, 281, 21));
        label_title->setStyleSheet(QString::fromUtf8("#label_title\n"
"{\n"
"	color: #FFFFFF;\n"
"	font-size: 13px;\n"
"}"));
        label = new QLabel(title_widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(28, 16, 20, 20));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/image/logo.png);"));
        label_username = new QLabel(centralwidget);
        label_username->setObjectName(QString::fromUtf8("label_username"));
        label_username->setGeometry(QRect(30, 210, 91, 16));
        label_username->setStyleSheet(QString::fromUtf8("#label_username\n"
"{\n"
"	color: #47505D;\n"
"	font-size: 13px;\n"
"}"));
        lineedit_username = new QLineEdit(centralwidget);
        lineedit_username->setObjectName(QString::fromUtf8("lineedit_username"));
        lineedit_username->setGeometry(QRect(130, 200, 290, 36));
        lineedit_username->setStyleSheet(QString::fromUtf8("#lineedit_username\n"
"{\n"
"	min-height: 36px;\n"
"	max-height: 36px;\n"
"	min-width: 280px;\n"
"	max-width: 280px;\n"
"	border-radius: 4px;\n"
"	background: #F0F4F5;\n"
"	selection-color: red;\n"
"	padding-left: 10px;\n"
"}\n"
"\n"
"#lineedit_username:hover\n"
"{\n"
"	border: 1px solid #00D770;\n"
"}"));
        label_passwd = new QLabel(centralwidget);
        label_passwd->setObjectName(QString::fromUtf8("label_passwd"));
        label_passwd->setGeometry(QRect(30, 260, 91, 16));
        label_passwd->setStyleSheet(QString::fromUtf8("#label_passwd\n"
"{\n"
"	color: #47505D;\n"
"	font-size: 13px;\n"
"}"));
        lineedit_passwd = new QLineEdit(centralwidget);
        lineedit_passwd->setObjectName(QString::fromUtf8("lineedit_passwd"));
        lineedit_passwd->setGeometry(QRect(130, 255, 290, 36));
        lineedit_passwd->setStyleSheet(QString::fromUtf8("#lineedit_passwd\n"
"{\n"
"	min-height: 36px;\n"
"	max-height: 36px;\n"
"	min-width: 280px;\n"
"	max-width: 280px;\n"
"	border-radius: 4px;\n"
"	background: #F0F4F5;\n"
"	selection-color: red;\n"
"	padding-left: 10px;\n"
"}\n"
"\n"
"#lineedit_passwd:hover\n"
"{\n"
"	border: 1px solid #00D770;\n"
"}"));
        lineedit_passwd->setEchoMode(QLineEdit::PasswordEchoOnEdit);
        MainWindow->setCentralWidget(centralwidget);
        QWidget::setTabOrder(lineedit_address, lineedit_port);
        QWidget::setTabOrder(lineedit_port, lineedit_username);
        QWidget::setTabOrder(lineedit_username, lineedit_passwd);
        QWidget::setTabOrder(lineedit_passwd, button_connection);
        QWidget::setTabOrder(button_connection, button_settings);
        QWidget::setTabOrder(button_settings, button_minisize);
        QWidget::setTabOrder(button_minisize, button_close);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_address->setText(QCoreApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245IP\357\274\232", nullptr));
        label_port->setText(QCoreApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\347\253\257\345\217\243\357\274\232", nullptr));
        lineedit_address->setPlaceholderText(QCoreApplication::translate("MainWindow", "192.168.1.1 (\347\244\272\344\276\213)", nullptr));
        lineedit_port->setPlaceholderText(QCoreApplication::translate("MainWindow", "10000 (\347\244\272\344\276\213)", nullptr));
#if QT_CONFIG(whatsthis)
        button_connection->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        button_connection->setText(QCoreApplication::translate("MainWindow", "\347\253\213\345\215\263\350\277\236\346\216\245", nullptr));
#if QT_CONFIG(tooltip)
        button_settings->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\350\256\276\347\275\256</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        button_settings->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\350\256\276\347\275\256</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        button_settings->setText(QString());
#if QT_CONFIG(tooltip)
        button_minisize->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\346\234\200\345\260\217\345\214\226</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        button_minisize->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\346\234\200\345\260\217\345\214\226</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        button_minisize->setText(QString());
#if QT_CONFIG(tooltip)
        button_close->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\345\205\263\351\227\255</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        button_close->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\345\205\263\351\227\255</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        button_close->setText(QString());
        label_title->setText(QCoreApplication::translate("MainWindow", "QDP", nullptr));
        label->setText(QString());
        label_username->setText(QCoreApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        lineedit_username->setPlaceholderText(QCoreApplication::translate("MainWindow", "Administrator (\347\244\272\344\276\213)", nullptr));
        label_passwd->setText(QCoreApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201\357\274\232", nullptr));
        lineedit_passwd->setPlaceholderText(QCoreApplication::translate("MainWindow", "******** (\347\244\272\344\276\213)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
