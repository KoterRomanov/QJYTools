/********************************************************************************
** Form generated from reading UI file 'Settings.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_widget_settings
{
public:
    QWidget *title_widget;
    QLabel *label;
    QLabel *label_title;
    QPushButton *button_close;
    QWidget *widget_bottom;
    QLabel *label_udp_port;
    QLineEdit *lineedit_gateway;
    QLineEdit *lineedit_tcp_port;
    QPushButton *button_cancel;
    QLabel *label_gateway;
    QPushButton *button_ok;
    QTableWidget *tablewidget_share_usb;
    QCheckBox *checkbox_screen;
    QLineEdit *lineedit_udp_port;
    QComboBox *combobox_bitrate;
    QLabel *label_resolution;
    QCheckBox *checkbox_use_gateway;
    QComboBox *combobox_fps;
    QLabel *label_bitrate;
    QLabel *label_fps;
    QComboBox *combobox_resolution;
    QLabel *label_share_usb;
    QLabel *label_tcp_port;

    void setupUi(QWidget *widget_settings)
    {
        if (widget_settings->objectName().isEmpty())
            widget_settings->setObjectName(QString::fromUtf8("widget_settings"));
        widget_settings->resize(448, 900);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_settings->sizePolicy().hasHeightForWidth());
        widget_settings->setSizePolicy(sizePolicy);
        widget_settings->setMinimumSize(QSize(448, 900));
        widget_settings->setMaximumSize(QSize(448, 900));
        widget_settings->setStyleSheet(QString::fromUtf8("#widget_settings\n"
"{\n"
"	background: #FFFFFF;\n"
"	border-top-left-radius: 6px;\n"
"	border-top-right-radius: 6px;\n"
"}"));
        title_widget = new QWidget(widget_settings);
        title_widget->setObjectName(QString::fromUtf8("title_widget"));
        title_widget->setGeometry(QRect(0, 0, 448, 48));
        title_widget->setStyleSheet(QString::fromUtf8("#title_widget\n"
"{\n"
"	background:#00D770;\n"
"	border-top-left-radius: 6px;\n"
"	border-top-right-radius: 6px;\n"
"}\n"
""));
        label = new QLabel(title_widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(28, 16, 20, 20));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/image/logo.png);"));
        label_title = new QLabel(title_widget);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setGeometry(QRect(53, 16, 101, 21));
        label_title->setStyleSheet(QString::fromUtf8("#label_title\n"
"{\n"
"	color: #FFFFFF;\n"
"	font-size: 14px;\n"
"}"));
        button_close = new QPushButton(title_widget);
        button_close->setObjectName(QString::fromUtf8("button_close"));
        button_close->setGeometry(QRect(410, 16, 22, 22));
        button_close->setStyleSheet(QString::fromUtf8("#button_close\n"
"{\n"
"	border-image: url(:/image/close.png);\n"
"}\n"
"\n"
"#button_close:hover\n"
"{\n"
"	background: green;\n"
"}"));
        widget_bottom = new QWidget(widget_settings);
        widget_bottom->setObjectName(QString::fromUtf8("widget_bottom"));
        widget_bottom->setGeometry(QRect(0, 0, 448, 900));
        sizePolicy.setHeightForWidth(widget_bottom->sizePolicy().hasHeightForWidth());
        widget_bottom->setSizePolicy(sizePolicy);
        widget_bottom->setMinimumSize(QSize(448, 900));
        widget_bottom->setMaximumSize(QSize(448, 900));
        widget_bottom->setStyleSheet(QString::fromUtf8("#widget_bottom\n"
"{\n"
"	background: #FFFFFF;\n"
"	border-top-left-radius: 6px;\n"
"	border-top-right-radius: 6px;\n"
"	border: 1px solid gray;\n"
"}"));
        label_udp_port = new QLabel(widget_bottom);
        label_udp_port->setObjectName(QString::fromUtf8("label_udp_port"));
        label_udp_port->setGeometry(QRect(40, 390, 81, 16));
        label_udp_port->setStyleSheet(QString::fromUtf8("#label_udp_port\n"
"{\n"
"	color: #47505D;\n"
"	font-size: 13px;\n"
"}"));
        lineedit_gateway = new QLineEdit(widget_bottom);
        lineedit_gateway->setObjectName(QString::fromUtf8("lineedit_gateway"));
        lineedit_gateway->setGeometry(QRect(130, 250, 290, 36));
        lineedit_gateway->setMinimumSize(QSize(290, 36));
        lineedit_gateway->setMaximumSize(QSize(290, 36));
        lineedit_gateway->setStyleSheet(QString::fromUtf8("#lineedit_gateway\n"
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
"#lineedit_gateway:hover\n"
"{\n"
"	border: 1px solid #00D770;\n"
"}"));
        lineedit_tcp_port = new QLineEdit(widget_bottom);
        lineedit_tcp_port->setObjectName(QString::fromUtf8("lineedit_tcp_port"));
        lineedit_tcp_port->setGeometry(QRect(130, 315, 290, 36));
        lineedit_tcp_port->setMinimumSize(QSize(290, 36));
        lineedit_tcp_port->setMaximumSize(QSize(290, 36));
        lineedit_tcp_port->setStyleSheet(QString::fromUtf8("#lineedit_tcp_port\n"
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
"#lineedit_tcp_port:hover\n"
"{\n"
"	border: 1px solid #00D770;\n"
"}"));
        button_cancel = new QPushButton(widget_bottom);
        button_cancel->setObjectName(QString::fromUtf8("button_cancel"));
        button_cancel->setGeometry(QRect(300, 810, 110, 36));
        button_cancel->setStyleSheet(QString::fromUtf8("#button_cancel\n"
"{\n"
"	background: #FFFFFF;\n"
"	border-radius: 4px;\n"
"	border-color: #00D770;\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"\n"
"	font-size: 13px;\n"
"	color: #00D770;\n"
"}\n"
""));
        label_gateway = new QLabel(widget_bottom);
        label_gateway->setObjectName(QString::fromUtf8("label_gateway"));
        label_gateway->setGeometry(QRect(40, 260, 81, 16));
        label_gateway->setStyleSheet(QString::fromUtf8("#label_gateway\n"
"{\n"
"	color: #47505D;\n"
"	font-size: 13px;\n"
"}"));
        button_ok = new QPushButton(widget_bottom);
        button_ok->setObjectName(QString::fromUtf8("button_ok"));
        button_ok->setGeometry(QRect(170, 810, 110, 36));
        button_ok->setStyleSheet(QString::fromUtf8("#button_ok\n"
"{\n"
"	background: #00D770;\n"
"	border-radius: 4px;\n"
"\n"
"	font-size: 13px;\n"
"	color: #FFFFFF;\n"
"}\n"
"\n"
"#button_ok:hover\n"
"{\n"
"	background: #00D770\n"
"}"));
        tablewidget_share_usb = new QTableWidget(widget_bottom);
        if (tablewidget_share_usb->columnCount() < 3)
            tablewidget_share_usb->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tablewidget_share_usb->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tablewidget_share_usb->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tablewidget_share_usb->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tablewidget_share_usb->setObjectName(QString::fromUtf8("tablewidget_share_usb"));
        tablewidget_share_usb->setGeometry(QRect(40, 460, 381, 301));
        tablewidget_share_usb->setAutoFillBackground(false);
        tablewidget_share_usb->setFrameShape(QFrame::Box);
        checkbox_screen = new QCheckBox(widget_bottom);
        checkbox_screen->setObjectName(QString::fromUtf8("checkbox_screen"));
        checkbox_screen->setGeometry(QRect(180, 760, 111, 31));
        checkbox_screen->setStyleSheet(QString::fromUtf8("#checkbox_screen\n"
"{\n"
"	color: #47505D;\n"
"	font-size: 13px;\n"
"}"));
        checkbox_screen->setChecked(true);
        lineedit_udp_port = new QLineEdit(widget_bottom);
        lineedit_udp_port->setObjectName(QString::fromUtf8("lineedit_udp_port"));
        lineedit_udp_port->setGeometry(QRect(130, 380, 290, 36));
        lineedit_udp_port->setMinimumSize(QSize(290, 36));
        lineedit_udp_port->setMaximumSize(QSize(290, 36));
        lineedit_udp_port->setStyleSheet(QString::fromUtf8("#lineedit_udp_port\n"
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
"#lineedit_udp_port:hover\n"
"{\n"
"	border: 1px solid #00D770;\n"
"}"));
        combobox_bitrate = new QComboBox(widget_bottom);
        combobox_bitrate->addItem(QString());
        combobox_bitrate->addItem(QString());
        combobox_bitrate->addItem(QString());
        combobox_bitrate->addItem(QString());
        combobox_bitrate->addItem(QString());
        combobox_bitrate->setObjectName(QString::fromUtf8("combobox_bitrate"));
        combobox_bitrate->setGeometry(QRect(130, 190, 290, 36));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(combobox_bitrate->sizePolicy().hasHeightForWidth());
        combobox_bitrate->setSizePolicy(sizePolicy1);
        combobox_bitrate->setMinimumSize(QSize(290, 36));
        combobox_bitrate->setMaximumSize(QSize(290, 36));
        combobox_bitrate->setStyleSheet(QString::fromUtf8("#combobox_bitrate\n"
"{\n"
"	min-height: 36px;\n"
"	max-height: 36px;\n"
"	min-width: 290px;\n"
"	max-width: 290px;\n"
"	border-radius: 4px;\n"
"	background: #F0F4F5;\n"
"	selection-color: red;\n"
"}\n"
"\n"
"#combobox_bitrate:hover\n"
"{\n"
"	border: 1px solid #00D770;\n"
"}\n"
"\n"
"QComboBox#combobox_bitrate::drop-down\n"
"{\n"
"	border-bottom-right-radius: 4px;\n"
"	border-top-right-radius: 4px;\n"
"}\n"
"\n"
"\n"
"QComboBox#combobox_bitrate::down-arrow\n"
"{\n"
"	background: transparent;\n"
"	padding: 0px 0px 0px 0px;\n"
"	image: url(:/image/icon_down-arrow.png);\n"
"}\n"
"\n"
"/*\344\270\213\346\213\211\346\241\206\351\242\234\350\211\262*/\n"
"QComboBox QAbstractItemView\n"
"{\n"
"	outline: 0px solid gray; /*\351\200\211\345\256\232\351\241\271\347\232\204\350\231\232\346\241\206*/\n"
"	background: #FFFFFF;\n"
"	border-bottom-left-radius: 4px;\n"
"	border-bottom-right-radius: 4px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView::Item\n"
"{\n"
"	height: 36px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView::Item:h"
                        "over\n"
"{\n"
"	color: white;\n"
"	background-color: #00D770;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView::Item:selected\n"
"{\n"
"	color: white;\n"
"	background-color: #00D770;\n"
"}"));
        label_resolution = new QLabel(widget_bottom);
        label_resolution->setObjectName(QString::fromUtf8("label_resolution"));
        label_resolution->setGeometry(QRect(40, 90, 81, 16));
        label_resolution->setStyleSheet(QString::fromUtf8("#label_resolution\n"
"{\n"
"	color: #47505D;\n"
"	font-size: 13px;\n"
"}"));
        checkbox_use_gateway = new QCheckBox(widget_bottom);
        checkbox_use_gateway->setObjectName(QString::fromUtf8("checkbox_use_gateway"));
        checkbox_use_gateway->setGeometry(QRect(40, 760, 111, 31));
        checkbox_use_gateway->setStyleSheet(QString::fromUtf8("#checkbox_use_gateway\n"
"{\n"
"	color: #47505D;\n"
"	font-size: 13px;\n"
"}"));
        checkbox_use_gateway->setChecked(true);
        combobox_fps = new QComboBox(widget_bottom);
        combobox_fps->addItem(QString());
        combobox_fps->addItem(QString());
        combobox_fps->setObjectName(QString::fromUtf8("combobox_fps"));
        combobox_fps->setGeometry(QRect(130, 130, 290, 36));
        sizePolicy1.setHeightForWidth(combobox_fps->sizePolicy().hasHeightForWidth());
        combobox_fps->setSizePolicy(sizePolicy1);
        combobox_fps->setMinimumSize(QSize(290, 36));
        combobox_fps->setMaximumSize(QSize(290, 36));
        combobox_fps->setStyleSheet(QString::fromUtf8("#combobox_fps\n"
"{\n"
"	min-height: 36px;\n"
"	max-height: 36px;\n"
"	min-width: 290px;\n"
"	max-width: 290px;\n"
"	border-radius: 4px;\n"
"	background: #F0F4F5;\n"
"	selection-color: red;\n"
"}\n"
"\n"
"#combobox_fps:hover\n"
"{\n"
"	border: 1px solid #00D770;\n"
"}\n"
"\n"
"QComboBox#combobox_fps::drop-down\n"
"{\n"
"	border-bottom-right-radius: 4px;\n"
"	border-top-right-radius: 4px;\n"
"}\n"
"\n"
"\n"
"QComboBox#combobox_fps::down-arrow\n"
"{\n"
"	background: transparent;\n"
"	padding: 0px 0px 0px 0px;\n"
"	image: url(:/image/icon_down-arrow.png);\n"
"}\n"
"\n"
"/*\344\270\213\346\213\211\346\241\206\351\242\234\350\211\262*/\n"
"QComboBox QAbstractItemView\n"
"{\n"
"	outline: 0px solid gray; /*\351\200\211\345\256\232\351\241\271\347\232\204\350\231\232\346\241\206*/\n"
"	background: #FFFFFF;\n"
"	border-bottom-left-radius: 4px;\n"
"	border-bottom-right-radius: 4px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView::Item\n"
"{\n"
"	height: 36px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView::Item:hover\n"
"{\n"
"	"
                        "color: white;\n"
"	background-color: #00D770;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView::Item:selected\n"
"{\n"
"	color: white;\n"
"	background-color: #00D770;\n"
"}"));
        label_bitrate = new QLabel(widget_bottom);
        label_bitrate->setObjectName(QString::fromUtf8("label_bitrate"));
        label_bitrate->setGeometry(QRect(40, 200, 85, 16));
        label_bitrate->setStyleSheet(QString::fromUtf8("#label_bitrate\n"
"{\n"
"	color: #47505D;\n"
"	font-size: 13px;\n"
"}"));
        label_fps = new QLabel(widget_bottom);
        label_fps->setObjectName(QString::fromUtf8("label_fps"));
        label_fps->setGeometry(QRect(40, 140, 85, 16));
        label_fps->setStyleSheet(QString::fromUtf8("#label_fps\n"
"{\n"
"	color: #47505D;\n"
"	font-size: 13px;\n"
"}"));
        combobox_resolution = new QComboBox(widget_bottom);
        combobox_resolution->addItem(QString());
        combobox_resolution->addItem(QString());
        combobox_resolution->addItem(QString());
        combobox_resolution->addItem(QString());
        combobox_resolution->addItem(QString());
        combobox_resolution->addItem(QString());
        combobox_resolution->addItem(QString());
        combobox_resolution->addItem(QString());
        combobox_resolution->addItem(QString());
        combobox_resolution->addItem(QString());
        combobox_resolution->addItem(QString());
        combobox_resolution->addItem(QString());
        combobox_resolution->addItem(QString());
        combobox_resolution->addItem(QString());
        combobox_resolution->addItem(QString());
        combobox_resolution->setObjectName(QString::fromUtf8("combobox_resolution"));
        combobox_resolution->setGeometry(QRect(130, 80, 290, 36));
        sizePolicy1.setHeightForWidth(combobox_resolution->sizePolicy().hasHeightForWidth());
        combobox_resolution->setSizePolicy(sizePolicy1);
        combobox_resolution->setMinimumSize(QSize(290, 36));
        combobox_resolution->setMaximumSize(QSize(290, 36));
        combobox_resolution->setStyleSheet(QString::fromUtf8("#combobox_resolution\n"
"{\n"
"	min-height: 36px;\n"
"	max-height: 36px;\n"
"	min-width: 290px;\n"
"	max-width: 290px;\n"
"	border-radius: 4px;\n"
"	background: #F0F4F5;\n"
"	selection-color: red;\n"
"}\n"
"\n"
"#combobox_resolution:hover\n"
"{\n"
"	border: 1px solid #00D770;\n"
"}\n"
"\n"
"QComboBox#combobox_resolution::drop-down\n"
"{\n"
"	border-bottom-right-radius: 4px;\n"
"	border-top-right-radius: 4px;\n"
"}\n"
"\n"
"\n"
"QComboBox#combobox_resolution::down-arrow\n"
"{\n"
"	background: transparent;\n"
"	padding: 0px 0px 0px 0px;\n"
"	image: url(:/image/icon_down-arrow.png);\n"
"}\n"
"\n"
"/*\344\270\213\346\213\211\346\241\206\351\242\234\350\211\262*/\n"
"QComboBox QAbstractItemView\n"
"{\n"
"	outline: 0px solid gray; /*\351\200\211\345\256\232\351\241\271\347\232\204\350\231\232\346\241\206*/\n"
"	background: #FFFFFF;\n"
"	border-bottom-left-radius: 4px;\n"
"	border-bottom-right-radius: 4px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView::Item\n"
"{\n"
"	height: 36px;\n"
"}\n"
"\n"
"QComboBox QAbstractItem"
                        "View::Item:hover\n"
"{\n"
"	color: white;\n"
"	background-color: #00D770;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView::Item:selected\n"
"{\n"
"	color: white;\n"
"	background-color: #00D770;\n"
"}"));
        label_share_usb = new QLabel(widget_bottom);
        label_share_usb->setObjectName(QString::fromUtf8("label_share_usb"));
        label_share_usb->setGeometry(QRect(40, 440, 161, 16));
        label_share_usb->setStyleSheet(QString::fromUtf8("#label_share_usb\n"
"{\n"
"	color: #47505D;\n"
"	font-size: 13px;\n"
"}"));
        label_tcp_port = new QLabel(widget_bottom);
        label_tcp_port->setObjectName(QString::fromUtf8("label_tcp_port"));
        label_tcp_port->setGeometry(QRect(40, 320, 81, 16));
        label_tcp_port->setStyleSheet(QString::fromUtf8("#label_tcp_port\n"
"{\n"
"	color: #47505D;\n"
"	font-size: 13px;\n"
"}"));
        widget_bottom->raise();
        title_widget->raise();

        retranslateUi(widget_settings);

        QMetaObject::connectSlotsByName(widget_settings);
    } // setupUi

    void retranslateUi(QWidget *widget_settings)
    {
        widget_settings->setWindowTitle(QCoreApplication::translate("widget_settings", "Form", nullptr));
        label->setText(QString());
        label_title->setText(QCoreApplication::translate("widget_settings", "\350\256\276\347\275\256", nullptr));
        button_close->setText(QString());
        label_udp_port->setText(QCoreApplication::translate("widget_settings", "UDP\347\253\257\345\217\243:", nullptr));
        button_cancel->setText(QCoreApplication::translate("widget_settings", "\345\217\226\346\266\210", nullptr));
        label_gateway->setText(QCoreApplication::translate("widget_settings", "\347\275\221\345\205\263:", nullptr));
        button_ok->setText(QCoreApplication::translate("widget_settings", "\347\241\256\345\256\232", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tablewidget_share_usb->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("widget_settings", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tablewidget_share_usb->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("widget_settings", "\350\256\276\345\244\207\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tablewidget_share_usb->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("widget_settings", "\346\230\257\345\220\246\345\205\261\344\272\253", nullptr));
        checkbox_screen->setText(QCoreApplication::translate("widget_settings", "\346\230\257\345\220\246\345\205\250\345\261\217", nullptr));
        combobox_bitrate->setItemText(0, QCoreApplication::translate("widget_settings", "10000", nullptr));
        combobox_bitrate->setItemText(1, QCoreApplication::translate("widget_settings", "20000", nullptr));
        combobox_bitrate->setItemText(2, QCoreApplication::translate("widget_settings", "30000", nullptr));
        combobox_bitrate->setItemText(3, QCoreApplication::translate("widget_settings", "40000", nullptr));
        combobox_bitrate->setItemText(4, QCoreApplication::translate("widget_settings", "50000", nullptr));

        label_resolution->setText(QCoreApplication::translate("widget_settings", "\345\210\206\350\276\250\347\216\207\357\274\232", nullptr));
        checkbox_use_gateway->setText(QCoreApplication::translate("widget_settings", "\346\230\257\345\220\246\344\275\277\347\224\250\347\275\221\345\205\263", nullptr));
        combobox_fps->setItemText(0, QCoreApplication::translate("widget_settings", "30", nullptr));
        combobox_fps->setItemText(1, QCoreApplication::translate("widget_settings", "60", nullptr));

        label_bitrate->setText(QCoreApplication::translate("widget_settings", "\346\257\224\347\211\271\346\265\201\357\274\232", nullptr));
        label_fps->setText(QCoreApplication::translate("widget_settings", "FPS:", nullptr));
        combobox_resolution->setItemText(0, QCoreApplication::translate("widget_settings", "1920x1080", nullptr));
        combobox_resolution->setItemText(1, QCoreApplication::translate("widget_settings", "7680x4320", nullptr));
        combobox_resolution->setItemText(2, QCoreApplication::translate("widget_settings", "5120x2880", nullptr));
        combobox_resolution->setItemText(3, QCoreApplication::translate("widget_settings", "4096x2160", nullptr));
        combobox_resolution->setItemText(4, QCoreApplication::translate("widget_settings", "3840x2160", nullptr));
        combobox_resolution->setItemText(5, QCoreApplication::translate("widget_settings", "2560x1600", nullptr));
        combobox_resolution->setItemText(6, QCoreApplication::translate("widget_settings", "2560x1440", nullptr));
        combobox_resolution->setItemText(7, QCoreApplication::translate("widget_settings", "2048x1536", nullptr));
        combobox_resolution->setItemText(8, QCoreApplication::translate("widget_settings", "1920x1200", nullptr));
        combobox_resolution->setItemText(9, QCoreApplication::translate("widget_settings", "1600x1200", nullptr));
        combobox_resolution->setItemText(10, QCoreApplication::translate("widget_settings", "1280x1024", nullptr));
        combobox_resolution->setItemText(11, QCoreApplication::translate("widget_settings", "1280x960", nullptr));
        combobox_resolution->setItemText(12, QCoreApplication::translate("widget_settings", "1280x768", nullptr));
        combobox_resolution->setItemText(13, QCoreApplication::translate("widget_settings", "1024x768", nullptr));
        combobox_resolution->setItemText(14, QCoreApplication::translate("widget_settings", "800x600", nullptr));

        label_share_usb->setText(QCoreApplication::translate("widget_settings", "USB \345\205\261\344\272\253\350\256\276\345\244\207", nullptr));
        label_tcp_port->setText(QCoreApplication::translate("widget_settings", "TCP\347\253\257\345\217\243:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class widget_settings: public Ui_widget_settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
