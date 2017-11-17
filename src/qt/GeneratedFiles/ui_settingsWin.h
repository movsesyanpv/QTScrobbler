/********************************************************************************
** Form generated from reading UI file 'settingsWin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSWIN_H
#define UI_SETTINGSWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_settingsWin
{
public:
    QVBoxLayout *verticalLayout_6;
    QTabWidget *tabWidget;
    QWidget *tab_general;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QCheckBox *chkAutoOpen;
    QCheckBox *chkDelPlayList;
    QCheckBox *chkDisplayUTC;
    QSpacerItem *verticalSpacer;
    QWidget *tab_sites;
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tab_widget_sites;
    QWidget *tab_proxy;
    QVBoxLayout *verticalLayout_5;
    QFormLayout *formLayout;
    QLabel *lblProxyHost;
    QLineEdit *edtProxyHost;
    QLabel *lblProxyPort;
    QLineEdit *edtProxyPort;
    QLabel *lblProxyUser;
    QLineEdit *edtProxyUser;
    QLabel *lblProxyPass;
    QLineEdit *edtProxyPass;
    QWidget *tab_timezone;
    QVBoxLayout *verticalLayout_4;
    QLabel *lblTimezone_2;
    QLabel *lblTZInfo;
    QGroupBox *grpManual;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblTimezone;
    QComboBox *cmb_tz_hour;
    QLabel *lblcolon;
    QComboBox *cmb_tz_min;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOK;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnCancel;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *settingsWin)
    {
        if (settingsWin->objectName().isEmpty())
            settingsWin->setObjectName(QStringLiteral("settingsWin"));
        settingsWin->resize(379, 314);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(settingsWin->sizePolicy().hasHeightForWidth());
        settingsWin->setSizePolicy(sizePolicy);
        settingsWin->setMinimumSize(QSize(0, 0));
        settingsWin->setMaximumSize(QSize(400, 400));
        settingsWin->setSizeGripEnabled(true);
        verticalLayout_6 = new QVBoxLayout(settingsWin);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        tabWidget = new QTabWidget(settingsWin);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab_general = new QWidget();
        tab_general->setObjectName(QStringLiteral("tab_general"));
        verticalLayout_2 = new QVBoxLayout(tab_general);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        chkAutoOpen = new QCheckBox(tab_general);
        chkAutoOpen->setObjectName(QStringLiteral("chkAutoOpen"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        chkAutoOpen->setFont(font);

        verticalLayout->addWidget(chkAutoOpen);

        chkDelPlayList = new QCheckBox(tab_general);
        chkDelPlayList->setObjectName(QStringLiteral("chkDelPlayList"));
        chkDelPlayList->setFont(font);

        verticalLayout->addWidget(chkDelPlayList);

        chkDisplayUTC = new QCheckBox(tab_general);
        chkDisplayUTC->setObjectName(QStringLiteral("chkDisplayUTC"));
        chkDisplayUTC->setFont(font);

        verticalLayout->addWidget(chkDisplayUTC);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(2, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        verticalLayout_2->setStretch(0, 1);
        tabWidget->addTab(tab_general, QString());
        tab_sites = new QWidget();
        tab_sites->setObjectName(QStringLiteral("tab_sites"));
        verticalLayout_3 = new QVBoxLayout(tab_sites);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tab_widget_sites = new QTabWidget(tab_sites);
        tab_widget_sites->setObjectName(QStringLiteral("tab_widget_sites"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(tab_widget_sites->sizePolicy().hasHeightForWidth());
        tab_widget_sites->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(tab_widget_sites);

        tabWidget->addTab(tab_sites, QString());
        tab_proxy = new QWidget();
        tab_proxy->setObjectName(QStringLiteral("tab_proxy"));
        verticalLayout_5 = new QVBoxLayout(tab_proxy);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        lblProxyHost = new QLabel(tab_proxy);
        lblProxyHost->setObjectName(QStringLiteral("lblProxyHost"));
        lblProxyHost->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, lblProxyHost);

        edtProxyHost = new QLineEdit(tab_proxy);
        edtProxyHost->setObjectName(QStringLiteral("edtProxyHost"));

        formLayout->setWidget(0, QFormLayout::FieldRole, edtProxyHost);

        lblProxyPort = new QLabel(tab_proxy);
        lblProxyPort->setObjectName(QStringLiteral("lblProxyPort"));
        lblProxyPort->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, lblProxyPort);

        edtProxyPort = new QLineEdit(tab_proxy);
        edtProxyPort->setObjectName(QStringLiteral("edtProxyPort"));

        formLayout->setWidget(1, QFormLayout::FieldRole, edtProxyPort);

        lblProxyUser = new QLabel(tab_proxy);
        lblProxyUser->setObjectName(QStringLiteral("lblProxyUser"));
        lblProxyUser->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, lblProxyUser);

        edtProxyUser = new QLineEdit(tab_proxy);
        edtProxyUser->setObjectName(QStringLiteral("edtProxyUser"));

        formLayout->setWidget(2, QFormLayout::FieldRole, edtProxyUser);

        lblProxyPass = new QLabel(tab_proxy);
        lblProxyPass->setObjectName(QStringLiteral("lblProxyPass"));
        lblProxyPass->setFont(font);

        formLayout->setWidget(3, QFormLayout::LabelRole, lblProxyPass);

        edtProxyPass = new QLineEdit(tab_proxy);
        edtProxyPass->setObjectName(QStringLiteral("edtProxyPass"));

        formLayout->setWidget(3, QFormLayout::FieldRole, edtProxyPass);


        verticalLayout_5->addLayout(formLayout);

        tabWidget->addTab(tab_proxy, QString());
        tab_timezone = new QWidget();
        tab_timezone->setObjectName(QStringLiteral("tab_timezone"));
        verticalLayout_4 = new QVBoxLayout(tab_timezone);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 2, -1, 2);
        lblTimezone_2 = new QLabel(tab_timezone);
        lblTimezone_2->setObjectName(QStringLiteral("lblTimezone_2"));

        verticalLayout_4->addWidget(lblTimezone_2);

        lblTZInfo = new QLabel(tab_timezone);
        lblTZInfo->setObjectName(QStringLiteral("lblTZInfo"));
        lblTZInfo->setWordWrap(true);

        verticalLayout_4->addWidget(lblTZInfo);

        grpManual = new QGroupBox(tab_timezone);
        grpManual->setObjectName(QStringLiteral("grpManual"));
        grpManual->setMinimumSize(QSize(0, 0));
        grpManual->setMaximumSize(QSize(16777215, 16777215));
        grpManual->setCheckable(true);
        grpManual->setChecked(false);
        horizontalLayout_2 = new QHBoxLayout(grpManual);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(9, 0, -1, 2);
        lblTimezone = new QLabel(grpManual);
        lblTimezone->setObjectName(QStringLiteral("lblTimezone"));

        horizontalLayout_2->addWidget(lblTimezone);

        cmb_tz_hour = new QComboBox(grpManual);
        cmb_tz_hour->setObjectName(QStringLiteral("cmb_tz_hour"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cmb_tz_hour->sizePolicy().hasHeightForWidth());
        cmb_tz_hour->setSizePolicy(sizePolicy2);
        cmb_tz_hour->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);
        cmb_tz_hour->setFrame(true);

        horizontalLayout_2->addWidget(cmb_tz_hour);

        lblcolon = new QLabel(grpManual);
        lblcolon->setObjectName(QStringLiteral("lblcolon"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lblcolon->sizePolicy().hasHeightForWidth());
        lblcolon->setSizePolicy(sizePolicy3);
        lblcolon->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lblcolon);

        cmb_tz_min = new QComboBox(grpManual);
        cmb_tz_min->setObjectName(QStringLiteral("cmb_tz_min"));
        sizePolicy2.setHeightForWidth(cmb_tz_min->sizePolicy().hasHeightForWidth());
        cmb_tz_min->setSizePolicy(sizePolicy2);
        cmb_tz_min->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);
        cmb_tz_min->setFrame(true);

        horizontalLayout_2->addWidget(cmb_tz_min);


        verticalLayout_4->addWidget(grpManual);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_4);

        verticalLayout_4->setStretch(1, 1);
        tabWidget->addTab(tab_timezone, QString());

        verticalLayout_6->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(4, 2, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnOK = new QPushButton(settingsWin);
        btnOK->setObjectName(QStringLiteral("btnOK"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/icons/go-next.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnOK->setIcon(icon);

        horizontalLayout->addWidget(btnOK);

        horizontalSpacer_2 = new QSpacerItem(3, 2, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btnCancel = new QPushButton(settingsWin);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/icons/process-stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCancel->setIcon(icon1);

        horizontalLayout->addWidget(btnCancel);

        horizontalSpacer_3 = new QSpacerItem(4, 2, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout_6->addLayout(horizontalLayout);


        retranslateUi(settingsWin);

        tabWidget->setCurrentIndex(0);
        tab_widget_sites->setCurrentIndex(-1);
        cmb_tz_hour->setCurrentIndex(0);
        cmb_tz_min->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(settingsWin);
    } // setupUi

    void retranslateUi(QDialog *settingsWin)
    {
        settingsWin->setWindowTitle(QApplication::translate("settingsWin", "Settings", Q_NULLPTR));
        chkAutoOpen->setText(QApplication::translate("settingsWin", "Automatically open log", Q_NULLPTR));
        chkDelPlayList->setText(QApplication::translate("settingsWin", "Auto-delete Apple Playcount", Q_NULLPTR));
        chkDisplayUTC->setText(QApplication::translate("settingsWin", "Display time as UTC", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_general), QApplication::translate("settingsWin", "General", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_sites), QApplication::translate("settingsWin", "Sites", Q_NULLPTR));
        lblProxyHost->setText(QApplication::translate("settingsWin", "Host", Q_NULLPTR));
        lblProxyPort->setText(QApplication::translate("settingsWin", "Port", Q_NULLPTR));
        lblProxyUser->setText(QApplication::translate("settingsWin", "Username", Q_NULLPTR));
        lblProxyPass->setText(QApplication::translate("settingsWin", "Password", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_proxy), QApplication::translate("settingsWin", "Proxy", Q_NULLPTR));
        lblTimezone_2->setText(QApplication::translate("settingsWin", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><span style=\" font-size:10pt; font-weight:600;\">Detected Timezone:</span></p></body></html>", Q_NULLPTR));
        lblTZInfo->setText(QString());
        grpManual->setTitle(QApplication::translate("settingsWin", "Manual Override", Q_NULLPTR));
        lblTimezone->setText(QApplication::translate("settingsWin", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:8pt; font-weight:400; font-style:normal; text-decoration:none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">Timezone:</span></p></body></html>", Q_NULLPTR));
        cmb_tz_hour->clear();
        cmb_tz_hour->insertItems(0, QStringList()
         << QApplication::translate("settingsWin", "-12", Q_NULLPTR)
         << QApplication::translate("settingsWin", "-11", Q_NULLPTR)
         << QApplication::translate("settingsWin", "-10", Q_NULLPTR)
         << QApplication::translate("settingsWin", "-9", Q_NULLPTR)
         << QApplication::translate("settingsWin", "-8", Q_NULLPTR)
         << QApplication::translate("settingsWin", "-7", Q_NULLPTR)
         << QApplication::translate("settingsWin", "-6", Q_NULLPTR)
         << QApplication::translate("settingsWin", "-5", Q_NULLPTR)
         << QApplication::translate("settingsWin", "-4", Q_NULLPTR)
         << QApplication::translate("settingsWin", "-3", Q_NULLPTR)
         << QApplication::translate("settingsWin", "-2", Q_NULLPTR)
         << QApplication::translate("settingsWin", "-1", Q_NULLPTR)
         << QApplication::translate("settingsWin", "0", Q_NULLPTR)
         << QApplication::translate("settingsWin", "+1", Q_NULLPTR)
         << QApplication::translate("settingsWin", "+2", Q_NULLPTR)
         << QApplication::translate("settingsWin", "+3", Q_NULLPTR)
         << QApplication::translate("settingsWin", "+4", Q_NULLPTR)
         << QApplication::translate("settingsWin", "+5", Q_NULLPTR)
         << QApplication::translate("settingsWin", "+6", Q_NULLPTR)
         << QApplication::translate("settingsWin", "+7", Q_NULLPTR)
         << QApplication::translate("settingsWin", "+8", Q_NULLPTR)
         << QApplication::translate("settingsWin", "+9", Q_NULLPTR)
         << QApplication::translate("settingsWin", "+10", Q_NULLPTR)
         << QApplication::translate("settingsWin", "+11", Q_NULLPTR)
         << QApplication::translate("settingsWin", "+12", Q_NULLPTR)
         << QApplication::translate("settingsWin", "+13", Q_NULLPTR)
         << QApplication::translate("settingsWin", "+14", Q_NULLPTR)
        );
        lblcolon->setText(QApplication::translate("settingsWin", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><span style=\" font-size:10pt; font-weight:600;\">:</span></p></body></html>", Q_NULLPTR));
        cmb_tz_min->clear();
        cmb_tz_min->insertItems(0, QStringList()
         << QApplication::translate("settingsWin", "00", Q_NULLPTR)
         << QApplication::translate("settingsWin", "15", Q_NULLPTR)
         << QApplication::translate("settingsWin", "30", Q_NULLPTR)
         << QApplication::translate("settingsWin", "45", Q_NULLPTR)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab_timezone), QApplication::translate("settingsWin", "Timezone", Q_NULLPTR));
        btnOK->setText(QApplication::translate("settingsWin", "OK", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("settingsWin", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class settingsWin: public Ui_settingsWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSWIN_H
