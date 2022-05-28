/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actQuit;
    QAction *actAudio_Input_Output;
    QAction *actDisplays_adapters;
    QAction *actMonitors;
    QAction *actImage_processing_devices;
    QAction *actRefresh;
    QAction *actHelp;
    QAction *actAbout;
    QAction *actSave;
    QWidget *hlayoutLists;
    QHBoxLayout *horizontalLayout;
    QTreeWidget *listwDevices;
    QTableWidget *listwDeviceInfo;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuCategory;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 435);
        MainWindow->setMinimumSize(QSize(0, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/about/res/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setTabShape(QTabWidget::Rounded);
        MainWindow->setDockNestingEnabled(false);
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QString::fromUtf8("actQuit"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/main/res/Quit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon1);
        actAudio_Input_Output = new QAction(MainWindow);
        actAudio_Input_Output->setObjectName(QString::fromUtf8("actAudio_Input_Output"));
        actAudio_Input_Output->setCheckable(true);
        actDisplays_adapters = new QAction(MainWindow);
        actDisplays_adapters->setObjectName(QString::fromUtf8("actDisplays_adapters"));
        actDisplays_adapters->setCheckable(true);
        actMonitors = new QAction(MainWindow);
        actMonitors->setObjectName(QString::fromUtf8("actMonitors"));
        actMonitors->setCheckable(true);
        actImage_processing_devices = new QAction(MainWindow);
        actImage_processing_devices->setObjectName(QString::fromUtf8("actImage_processing_devices"));
        actImage_processing_devices->setCheckable(true);
        actRefresh = new QAction(MainWindow);
        actRefresh->setObjectName(QString::fromUtf8("actRefresh"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/main/res/Refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        actRefresh->setIcon(icon2);
        actHelp = new QAction(MainWindow);
        actHelp->setObjectName(QString::fromUtf8("actHelp"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/main/res/Help.png"), QSize(), QIcon::Normal, QIcon::Off);
        actHelp->setIcon(icon3);
        actAbout = new QAction(MainWindow);
        actAbout->setObjectName(QString::fromUtf8("actAbout"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icon/main/res/About.png"), QSize(), QIcon::Normal, QIcon::Off);
        actAbout->setIcon(icon4);
        actSave = new QAction(MainWindow);
        actSave->setObjectName(QString::fromUtf8("actSave"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icon/main/res/Save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actSave->setIcon(icon5);
        hlayoutLists = new QWidget(MainWindow);
        hlayoutLists->setObjectName(QString::fromUtf8("hlayoutLists"));
        horizontalLayout = new QHBoxLayout(hlayoutLists);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        listwDevices = new QTreeWidget(hlayoutLists);
        listwDevices->setObjectName(QString::fromUtf8("listwDevices"));
        listwDevices->setEnabled(true);
        listwDevices->setMinimumSize(QSize(300, 0));
        listwDevices->setMaximumSize(QSize(300, 16777215));

        horizontalLayout->addWidget(listwDevices);

        listwDeviceInfo = new QTableWidget(hlayoutLists);
        if (listwDeviceInfo->columnCount() < 2)
            listwDeviceInfo->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        listwDeviceInfo->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        listwDeviceInfo->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        listwDeviceInfo->setObjectName(QString::fromUtf8("listwDeviceInfo"));

        horizontalLayout->addWidget(listwDeviceInfo);

        MainWindow->setCentralWidget(hlayoutLists);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuCategory = new QMenu(menuBar);
        menuCategory->setObjectName(QString::fromUtf8("menuCategory"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setIconSize(QSize(16, 16));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuCategory->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actRefresh);
        menuFile->addAction(actSave);
        menuFile->addSeparator();
        menuFile->addAction(actQuit);
        menuCategory->addAction(actAudio_Input_Output);
        menuCategory->addAction(actDisplays_adapters);
        menuCategory->addAction(actMonitors);
        menuCategory->addAction(actImage_processing_devices);
        menuHelp->addAction(actHelp);
        menuHelp->addAction(actAbout);
        mainToolBar->addAction(actRefresh);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "DeviceReport", nullptr));
        actQuit->setText(QCoreApplication::translate("MainWindow", "\320\222\320\270\321\205\321\226\320\264", nullptr));
#if QT_CONFIG(shortcut)
        actQuit->setShortcut(QCoreApplication::translate("MainWindow", "Esc", nullptr));
#endif // QT_CONFIG(shortcut)
        actAudio_Input_Output->setText(QCoreApplication::translate("MainWindow", "Audio Input&Output", nullptr));
#if QT_CONFIG(shortcut)
        actAudio_Input_Output->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+1", nullptr));
#endif // QT_CONFIG(shortcut)
        actDisplays_adapters->setText(QCoreApplication::translate("MainWindow", "Displays adapters", nullptr));
#if QT_CONFIG(shortcut)
        actDisplays_adapters->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+2", nullptr));
#endif // QT_CONFIG(shortcut)
        actMonitors->setText(QCoreApplication::translate("MainWindow", "Monitors", nullptr));
#if QT_CONFIG(shortcut)
        actMonitors->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+3", nullptr));
#endif // QT_CONFIG(shortcut)
        actImage_processing_devices->setText(QCoreApplication::translate("MainWindow", "Image processing devices", nullptr));
#if QT_CONFIG(shortcut)
        actImage_processing_devices->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+4", nullptr));
#endif // QT_CONFIG(shortcut)
        actRefresh->setText(QCoreApplication::translate("MainWindow", "\320\236\320\275\320\276\320\262\320\270\321\202\320\270", nullptr));
#if QT_CONFIG(tooltip)
        actRefresh->setToolTip(QCoreApplication::translate("MainWindow", "\320\236\320\275\320\276\320\262\320\270\321\202\320\270", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actRefresh->setShortcut(QCoreApplication::translate("MainWindow", "F5", nullptr));
#endif // QT_CONFIG(shortcut)
        actHelp->setText(QCoreApplication::translate("MainWindow", "\320\206\320\275\321\201\321\202\321\200\321\203\320\272\321\206\321\226\321\217 \320\272\320\276\321\200\320\270\321\201\321\202\321\203\320\262\320\260\321\207\320\260", nullptr));
#if QT_CONFIG(shortcut)
        actHelp->setShortcut(QCoreApplication::translate("MainWindow", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
        actAbout->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\321\203", nullptr));
#if QT_CONFIG(shortcut)
        actAbout->setShortcut(QCoreApplication::translate("MainWindow", "F2", nullptr));
#endif // QT_CONFIG(shortcut)
        actSave->setText(QCoreApplication::translate("MainWindow", "\320\227\320\261\320\265\321\200\320\265\320\263\321\202\320\270", nullptr));
#if QT_CONFIG(shortcut)
        actSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        QTreeWidgetItem *___qtreewidgetitem = listwDevices->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\321\201\321\202\321\200\320\276\321\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem = listwDeviceInfo->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\273\320\265", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = listwDeviceInfo->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "\320\236\320\277\320\270\321\201", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
        menuCategory->setTitle(QCoreApplication::translate("MainWindow", "\320\232\320\260\321\202\320\265\320\263\320\276\321\200\321\226\321\227", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\262\321\226\320\264\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
