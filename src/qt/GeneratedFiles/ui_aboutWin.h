/********************************************************************************
** Form generated from reading UI file 'aboutWin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTWIN_H
#define UI_ABOUTWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_aboutWin
{
public:
    QVBoxLayout *_2;
    QHBoxLayout *hboxVersion;
    QLabel *pixIcon;
    QLabel *lblVersion;
    QLabel *lblAbout;
    QHBoxLayout *hboxBtn;
    QSpacerItem *btnSpacer;
    QPushButton *btnClose;

    void setupUi(QDialog *aboutWin)
    {
        if (aboutWin->objectName().isEmpty())
            aboutWin->setObjectName(QStringLiteral("aboutWin"));
        aboutWin->resize(309, 480);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(aboutWin->sizePolicy().hasHeightForWidth());
        aboutWin->setSizePolicy(sizePolicy);
        aboutWin->setSizeIncrement(QSize(0, 0));
        aboutWin->setMouseTracking(false);
        _2 = new QVBoxLayout(aboutWin);
        _2->setObjectName(QStringLiteral("_2"));
        hboxVersion = new QHBoxLayout();
        hboxVersion->setObjectName(QStringLiteral("hboxVersion"));
        pixIcon = new QLabel(aboutWin);
        pixIcon->setObjectName(QStringLiteral("pixIcon"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pixIcon->sizePolicy().hasHeightForWidth());
        pixIcon->setSizePolicy(sizePolicy1);
        pixIcon->setPixmap(QPixmap(QString::fromUtf8(":/resources/icons/32x32/qtscrob.png")));

        hboxVersion->addWidget(pixIcon);

        lblVersion = new QLabel(aboutWin);
        lblVersion->setObjectName(QStringLiteral("lblVersion"));

        hboxVersion->addWidget(lblVersion);


        _2->addLayout(hboxVersion);

        lblAbout = new QLabel(aboutWin);
        lblAbout->setObjectName(QStringLiteral("lblAbout"));
        sizePolicy.setHeightForWidth(lblAbout->sizePolicy().hasHeightForWidth());
        lblAbout->setSizePolicy(sizePolicy);
        lblAbout->setAutoFillBackground(false);
        lblAbout->setFrameShape(QFrame::NoFrame);
        lblAbout->setLineWidth(1);
        lblAbout->setScaledContents(true);
        lblAbout->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        lblAbout->setMargin(0);

        _2->addWidget(lblAbout);

        hboxBtn = new QHBoxLayout();
        hboxBtn->setObjectName(QStringLiteral("hboxBtn"));
        btnSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxBtn->addItem(btnSpacer);

        btnClose = new QPushButton(aboutWin);
        btnClose->setObjectName(QStringLiteral("btnClose"));

        hboxBtn->addWidget(btnClose);


        _2->addLayout(hboxBtn);


        retranslateUi(aboutWin);
        QObject::connect(btnClose, SIGNAL(clicked()), aboutWin, SLOT(close()));

        QMetaObject::connectSlotsByName(aboutWin);
    } // setupUi

    void retranslateUi(QDialog *aboutWin)
    {
        aboutWin->setWindowTitle(QApplication::translate("aboutWin", "About QTScrobbler", Q_NULLPTR));
        pixIcon->setText(QString());
        lblVersion->setText(QString());
        lblAbout->setText(QApplication::translate("aboutWin", "<html><head/><body><p><span style=\" text-decoration: underline;\">About:</span></p><p>a Last.fm submitter</p><p><br/></p><p><span style=\" text-decoration: underline;\">Developed by:</span></p><p>Tomasz Mo\305\204 &lt;<a href=\"desowin@gmail.com\"><span style=\" text-decoration: underline; color:#0000ff;\">desowin@gmail.com</span></a>&gt;</p><p>Robert Keevil</p><p>Alex Pounds</p><p>Mathias Gumz</p><p>Marcel Petrick &lt;<a href=\"mail@marcelpetrick.it\"><span style=\" text-decoration: underline; color:#0000ff;\">mail@marcelpetrick.it</span></a>&gt;</p><p><br/></p><p><br/></p><p>Please join the QTScrobbler <a href=\"http://www.last.fm/group/QTScrobbler\"><span style=\" text-decoration: underline; color:#0000ff;\">group on last.fm</span></a>.</p></body></html>", Q_NULLPTR));
        btnClose->setText(QApplication::translate("aboutWin", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class aboutWin: public Ui_aboutWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTWIN_H
