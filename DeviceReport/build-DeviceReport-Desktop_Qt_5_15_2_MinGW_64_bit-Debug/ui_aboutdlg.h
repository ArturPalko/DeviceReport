/********************************************************************************
** Form generated from reading UI file 'aboutdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDLG_H
#define UI_ABOUTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_aboutdlg
{
public:
    QPushButton *btnOk;
    QLabel *lbName;
    QLabel *lbLogo;
    QLabel *lbVersion;
    QLabel *lbDeveloper;
    QLabel *lbLicense;
    QLabel *lbDescription;

    void setupUi(QDialog *aboutdlg)
    {
        if (aboutdlg->objectName().isEmpty())
            aboutdlg->setObjectName(QString::fromUtf8("aboutdlg"));
        aboutdlg->setEnabled(true);
        aboutdlg->resize(250, 190);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(250);
        sizePolicy.setVerticalStretch(190);
        sizePolicy.setHeightForWidth(aboutdlg->sizePolicy().hasHeightForWidth());
        aboutdlg->setSizePolicy(sizePolicy);
        aboutdlg->setMinimumSize(QSize(250, 190));
        aboutdlg->setMaximumSize(QSize(250, 190));
        btnOk = new QPushButton(aboutdlg);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));
        btnOk->setGeometry(QRect(150, 160, 75, 23));
        lbName = new QLabel(aboutdlg);
        lbName->setObjectName(QString::fromUtf8("lbName"));
        lbName->setGeometry(QRect(100, 10, 141, 16));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        lbName->setFont(font);
        lbLogo = new QLabel(aboutdlg);
        lbLogo->setObjectName(QString::fromUtf8("lbLogo"));
        lbLogo->setGeometry(QRect(20, 20, 64, 64));
        lbLogo->setBaseSize(QSize(64, 64));
        lbLogo->setPixmap(QPixmap(QString::fromUtf8(":/icon/about/res/logo.png")));
        lbLogo->setScaledContents(true);
        lbVersion = new QLabel(aboutdlg);
        lbVersion->setObjectName(QString::fromUtf8("lbVersion"));
        lbVersion->setGeometry(QRect(100, 30, 141, 16));
        lbDeveloper = new QLabel(aboutdlg);
        lbDeveloper->setObjectName(QString::fromUtf8("lbDeveloper"));
        lbDeveloper->setGeometry(QRect(100, 50, 141, 16));
        lbLicense = new QLabel(aboutdlg);
        lbLicense->setObjectName(QString::fromUtf8("lbLicense"));
        lbLicense->setGeometry(QRect(100, 70, 141, 16));
        lbDescription = new QLabel(aboutdlg);
        lbDescription->setObjectName(QString::fromUtf8("lbDescription"));
        lbDescription->setGeometry(QRect(20, 95, 221, 71));
        lbDescription->setTextFormat(Qt::PlainText);
        lbDescription->setWordWrap(true);

        retranslateUi(aboutdlg);

        QMetaObject::connectSlotsByName(aboutdlg);
    } // setupUi

    void retranslateUi(QDialog *aboutdlg)
    {
        aboutdlg->setWindowTitle(QCoreApplication::translate("aboutdlg", "\320\237\321\200\320\276 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\321\203", nullptr));
        btnOk->setText(QCoreApplication::translate("aboutdlg", "OK", nullptr));
        lbName->setText(QCoreApplication::translate("aboutdlg", "DeviceReport", nullptr));
        lbLogo->setText(QString());
        lbVersion->setText(QCoreApplication::translate("aboutdlg", "\320\222\320\265\321\200\321\201\321\226\321\217 1.0.0.358", nullptr));
        lbDeveloper->setText(QCoreApplication::translate("aboutdlg", "\320\240\320\276\320\267\321\200\320\276\320\261\320\275\320\270\320\272: \320\237\320\260\320\273\321\214\320\272\320\276 \320\220\321\200\321\202\321\203\321\200", nullptr));
        lbLicense->setText(QCoreApplication::translate("aboutdlg", "\320\242\320\270\320\277 \320\273\321\226\321\206\320\265\320\275\320\267\321\226\321\227: FreeWare", nullptr));
        lbDescription->setText(QCoreApplication::translate("aboutdlg", "\320\232\320\276\321\200\320\276\321\202\320\272\320\270\320\271 \320\276\320\277\320\270\321\201:\n"
"\320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\275\320\270\320\271 \320\264\320\276\320\264\320\260\321\202\320\276\320\272 \302\253DeviceReport\302\273 \320\277\321\200\320\270\320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\271 \320\264\320\273\321\217 \321\201\321\202\320\262\320\276\321\200\320\265\320\275\320\275\321\217 \320\267\320\262\321\226\321\202\321\203 \320\277\321\200\320\276 \320\262\320\270\320\272\320\276\321\200\320\270\321\201\321\202\320\260\320\275\320\275\321\217 \320\272\320\276\321\200\320\270\321\201\321\202\321\203\320\262\320\260\321\207\320\265\320\274 \320\274\320\265\320\264\321\226\320\260 \320\277\321\200\320\270\321\201\321\202\321\200\320\276\321\227\320\262.\n"
"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class aboutdlg: public Ui_aboutdlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDLG_H
