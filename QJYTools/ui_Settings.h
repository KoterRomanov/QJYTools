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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_widget_settings
{
public:
    QWidget *title_widget;
    QLabel *label;
    QLabel *label_title;
    QPushButton *button_close;
    QLabel *label_fps;
    QLabel *label_resolution;
    QPushButton *button_ok;
    QLabel *label_bitrate;
    QPushButton *button_cancel;
    QComboBox *combobox_resolution;
    QComboBox *combobox_fps;
    QComboBox *combobox_bitrate;

    void setupUi(QWidget *widget_settings)
    {
        if (widget_settings->objectName().isEmpty())
            widget_settings->setObjectName(QString::fromUtf8("widget_settings"));
        widget_settings->resize(448, 358);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_settings->sizePolicy().hasHeightForWidth());
        widget_settings->setSizePolicy(sizePolicy);
        widget_settings->setMinimumSize(QSize(448, 358));
        widget_settings->setMaximumSize(QSize(448, 358));
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
        label_fps = new QLabel(widget_settings);
        label_fps->setObjectName(QString::fromUtf8("label_fps"));
        label_fps->setGeometry(QRect(30, 160, 85, 16));
        label_fps->setStyleSheet(QString::fromUtf8("#label_fps\n"
"{\n"
"	color: #47505D;\n"
"	font-size: 13px;\n"
"}"));
        label_resolution = new QLabel(widget_settings);
        label_resolution->setObjectName(QString::fromUtf8("label_resolution"));
        label_resolution->setGeometry(QRect(30, 110, 81, 16));
        label_resolution->setStyleSheet(QString::fromUtf8("#label_resolution\n"
"{\n"
"	color: #47505D;\n"
"	font-size: 13px;\n"
"}"));
        button_ok = new QPushButton(widget_settings);
        button_ok->setObjectName(QString::fromUtf8("button_ok"));
        button_ok->setGeometry(QRect(160, 290, 110, 36));
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
        label_bitrate = new QLabel(widget_settings);
        label_bitrate->setObjectName(QString::fromUtf8("label_bitrate"));
        label_bitrate->setGeometry(QRect(30, 220, 85, 16));
        label_bitrate->setStyleSheet(QString::fromUtf8("#label_bitrate\n"
"{\n"
"	color: #47505D;\n"
"	font-size: 13px;\n"
"}"));
        button_cancel = new QPushButton(widget_settings);
        button_cancel->setObjectName(QString::fromUtf8("button_cancel"));
        button_cancel->setGeometry(QRect(290, 290, 110, 36));
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
        combobox_resolution = new QComboBox(widget_settings);
        combobox_resolution->addItem(QString());
        combobox_resolution->addItem(QString());
        combobox_resolution->addItem(QString());
        combobox_resolution->addItem(QString());
        combobox_resolution->setObjectName(QString::fromUtf8("combobox_resolution"));
        combobox_resolution->setGeometry(QRect(120, 100, 280, 36));
        combobox_resolution->setStyleSheet(QString::fromUtf8("#combobox_resolution\n"
"{\n"
"	min-height: 36px;\n"
"	max-height: 36px;\n"
"	min-width: 280px;\n"
"	max-width: 280px;\n"
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
        combobox_fps = new QComboBox(widget_settings);
        combobox_fps->addItem(QString());
        combobox_fps->addItem(QString());
        combobox_fps->setObjectName(QString::fromUtf8("combobox_fps"));
        combobox_fps->setGeometry(QRect(120, 150, 280, 36));
        combobox_fps->setStyleSheet(QString::fromUtf8("#combobox_fps\n"
"{\n"
"	min-height: 36px;\n"
"	max-height: 36px;\n"
"	min-width: 280px;\n"
"	max-width: 280px;\n"
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
        combobox_bitrate = new QComboBox(widget_settings);
        combobox_bitrate->addItem(QString());
        combobox_bitrate->addItem(QString());
        combobox_bitrate->addItem(QString());
        combobox_bitrate->addItem(QString());
        combobox_bitrate->addItem(QString());
        combobox_bitrate->setObjectName(QString::fromUtf8("combobox_bitrate"));
        combobox_bitrate->setGeometry(QRect(120, 210, 280, 36));
        combobox_bitrate->setStyleSheet(QString::fromUtf8("#combobox_bitrate\n"
"{\n"
"	min-height: 36px;\n"
"	max-height: 36px;\n"
"	min-width: 280px;\n"
"	max-width: 280px;\n"
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

        retranslateUi(widget_settings);

        QMetaObject::connectSlotsByName(widget_settings);
    } // setupUi

    void retranslateUi(QWidget *widget_settings)
    {
        widget_settings->setWindowTitle(QCoreApplication::translate("widget_settings", "Form", nullptr));
        label->setText(QString());
        label_title->setText(QCoreApplication::translate("widget_settings", "\350\256\276\347\275\256", nullptr));
        button_close->setText(QString());
        label_fps->setText(QCoreApplication::translate("widget_settings", "FPS:", nullptr));
        label_resolution->setText(QCoreApplication::translate("widget_settings", "\345\210\206\350\276\250\347\216\207\357\274\232", nullptr));
        button_ok->setText(QCoreApplication::translate("widget_settings", "\347\241\256\345\256\232", nullptr));
        label_bitrate->setText(QCoreApplication::translate("widget_settings", "\346\257\224\347\211\271\346\265\201\357\274\232", nullptr));
        button_cancel->setText(QCoreApplication::translate("widget_settings", "\345\217\226\346\266\210", nullptr));
        combobox_resolution->setItemText(0, QCoreApplication::translate("widget_settings", "1920x1080", nullptr));
        combobox_resolution->setItemText(1, QCoreApplication::translate("widget_settings", "1920x1200", nullptr));
        combobox_resolution->setItemText(2, QCoreApplication::translate("widget_settings", "1280x720", nullptr));
        combobox_resolution->setItemText(3, QCoreApplication::translate("widget_settings", "1024x768", nullptr));

        combobox_fps->setItemText(0, QCoreApplication::translate("widget_settings", "30", nullptr));
        combobox_fps->setItemText(1, QCoreApplication::translate("widget_settings", "60", nullptr));

        combobox_bitrate->setItemText(0, QCoreApplication::translate("widget_settings", "10000", nullptr));
        combobox_bitrate->setItemText(1, QCoreApplication::translate("widget_settings", "20000", nullptr));
        combobox_bitrate->setItemText(2, QCoreApplication::translate("widget_settings", "30000", nullptr));
        combobox_bitrate->setItemText(3, QCoreApplication::translate("widget_settings", "40000", nullptr));
        combobox_bitrate->setItemText(4, QCoreApplication::translate("widget_settings", "50000", nullptr));

    } // retranslateUi

};

namespace Ui {
    class widget_settings: public Ui_widget_settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
