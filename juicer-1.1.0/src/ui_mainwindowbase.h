/********************************************************************************
** Form generated from reading ui file 'mainwindowbase.ui'
**
** Created: Wed Feb 4 21:08:59 2009
**      by: Qt User Interface Compiler version 4.4.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MAINWINDOWBASE_H
#define UI_MAINWINDOWBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "modulebase.h"
#include "partswidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindowBase
{
public:
    QAction *actionConfigure;
    QAction *actionNet_Info;
    QAction *actionOpen_Aj_Link_List;
    QAction *actionExit_Core;
    QAction *actionQuit_GUI;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QAction *actionAdjust_Columns;
    QAction *actionProcess_Link_From_Clipboard;
    QAction *actionPause;
    QAction *actionResume;
    QAction *actionCancel;
    QAction *actionShow_Part_List;
    QAction *actionRename;
    QAction *actionRename_By_Clipboard;
    QAction *actionOpen;
    QAction *actionCopy_Link;
    QAction *actionRemove_Finished;
    QAction *actionCreate_Link_List;
    QAction *actionHide_Paused;
    QAction *actionMaximal_Power;
    QAction *actionHide_Queued;
    QAction *actionDownload;
    QAction *actionCancel_Search;
    QAction *actionCopy_Link_Search;
    QAction *actionCreate_Link_List_Search;
    QAction *actionConnect_Server;
    QAction *actionRemove_Server;
    QAction *actionSearch_Server;
    QAction *actionShow_Welcome_Message;
    QAction *actionAdd_Share;
    QAction *actionRemove_Share;
    QAction *actionReload_Share;
    QAction *actionCommit_Share;
    QAction *actionCopy_Link_Share;
    QAction *actionCreate_Link_List_Share;
    QAction *actionOpen_Incoming;
    QAction *actionCopy_Incoming;
    QAction *actionDelete_Incoming;
    QAction *actionReload_Incoming;
    QAction *actionShow_Part_List_Dock;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *ajTab;
    DockMain *downloads;
    QTreeWidget *downloadsTreeWidget;
    QDockWidget *partListDock;
    QWidget *dockWidgetContents_8;
    QVBoxLayout *verticalLayout_2;
    PartsWidget *partsWidget;
    QWidget *uploads;
    QVBoxLayout *verticalLayout_3;
    QTreeWidget *uploadsTreeWidget;
    QWidget *search;
    QVBoxLayout *verticalLayout_4;
    QTreeWidget *searchsTreeWidget;
    DockMain *server;
    QTreeWidget *serverTreeWidget;
    QDockWidget *welcomeDock;
    QWidget *dockWidgetContents_3;
    QVBoxLayout *verticalLayout_5;
    QTextEdit *welcomeEdit;
    QWidget *shares;
    QVBoxLayout *verticalLayout_6;
    QTreeWidget *sharesTreeWidget;
    QWidget *incoming;
    QVBoxLayout *verticalLayout_7;
    QTreeWidget *incomingTreeWidget;
    QMenuBar *menubar;
    QMenu *menuAppleJuice;
    QMenu *menuHelp;
    QMenu *menuDownload;
    QMenu *menuUpload;
    QMenu *menuSearch;
    QMenu *menuServer;
    QMenu *menuShare;
    QMenu *menuIncoming;
    QStatusBar *statusbar;
    QToolBar *ajTools;
    QToolBar *ajLinks;
    QToolBar *downloadToolBar;
    QToolBar *uploadToolBar;
    QToolBar *searchToolBar;
    QToolBar *serverToolBar;
    QToolBar *shareToolBar;
    QToolBar *incomingToolBar;

    void setupUi(QMainWindow *MainWindowBase)
    {
    if (MainWindowBase->objectName().isEmpty())
        MainWindowBase->setObjectName(QString::fromUtf8("MainWindowBase"));
    MainWindowBase->resize(1288, 688);
    QIcon icon;
    icon.addPixmap(QPixmap(QString::fromUtf8(":/juicer.png")), QIcon::Normal, QIcon::Off);
    MainWindowBase->setWindowIcon(icon);
    actionConfigure = new QAction(MainWindowBase);
    actionConfigure->setObjectName(QString::fromUtf8("actionConfigure"));
    QIcon icon1;
    icon1.addPixmap(QPixmap(QString::fromUtf8(":/configure.png")), QIcon::Normal, QIcon::Off);
    actionConfigure->setIcon(icon1);
    actionNet_Info = new QAction(MainWindowBase);
    actionNet_Info->setObjectName(QString::fromUtf8("actionNet_Info"));
    QIcon icon2;
    icon2.addPixmap(QPixmap(QString::fromUtf8(":/network.png")), QIcon::Normal, QIcon::Off);
    actionNet_Info->setIcon(icon2);
    actionOpen_Aj_Link_List = new QAction(MainWindowBase);
    actionOpen_Aj_Link_List->setObjectName(QString::fromUtf8("actionOpen_Aj_Link_List"));
    QIcon icon3;
    icon3.addPixmap(QPixmap(QString::fromUtf8(":/folder_open.png")), QIcon::Normal, QIcon::Off);
    actionOpen_Aj_Link_List->setIcon(icon3);
    actionExit_Core = new QAction(MainWindowBase);
    actionExit_Core->setObjectName(QString::fromUtf8("actionExit_Core"));
    QIcon icon4;
    icon4.addPixmap(QPixmap(QString::fromUtf8(":/small/exit.png")), QIcon::Normal, QIcon::Off);
    actionExit_Core->setIcon(icon4);
    actionQuit_GUI = new QAction(MainWindowBase);
    actionQuit_GUI->setObjectName(QString::fromUtf8("actionQuit_GUI"));
    QIcon icon5;
    icon5.addPixmap(QPixmap(QString::fromUtf8(":/small/close.png")), QIcon::Normal, QIcon::Off);
    actionQuit_GUI->setIcon(icon5);
    actionAbout = new QAction(MainWindowBase);
    actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
    QIcon icon6;
    icon6.addPixmap(QPixmap(QString::fromUtf8(":/small/version.png")), QIcon::Normal, QIcon::Off);
    actionAbout->setIcon(icon6);
    actionAbout_Qt = new QAction(MainWindowBase);
    actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
    actionAdjust_Columns = new QAction(MainWindowBase);
    actionAdjust_Columns->setObjectName(QString::fromUtf8("actionAdjust_Columns"));
    QIcon icon7;
    icon7.addPixmap(QPixmap(QString::fromUtf8(":/adjust.png")), QIcon::Normal, QIcon::Off);
    actionAdjust_Columns->setIcon(icon7);
    actionProcess_Link_From_Clipboard = new QAction(MainWindowBase);
    actionProcess_Link_From_Clipboard->setObjectName(QString::fromUtf8("actionProcess_Link_From_Clipboard"));
    QIcon icon8;
    icon8.addPixmap(QPixmap(QString::fromUtf8(":/wizard.png")), QIcon::Normal, QIcon::Off);
    actionProcess_Link_From_Clipboard->setIcon(icon8);
    actionPause = new QAction(MainWindowBase);
    actionPause->setObjectName(QString::fromUtf8("actionPause"));
    QIcon icon9;
    icon9.addPixmap(QPixmap(QString::fromUtf8(":/pause.png")), QIcon::Normal, QIcon::Off);
    actionPause->setIcon(icon9);
    actionResume = new QAction(MainWindowBase);
    actionResume->setObjectName(QString::fromUtf8("actionResume"));
    QIcon icon10;
    icon10.addPixmap(QPixmap(QString::fromUtf8(":/resume.png")), QIcon::Normal, QIcon::Off);
    actionResume->setIcon(icon10);
    actionCancel = new QAction(MainWindowBase);
    actionCancel->setObjectName(QString::fromUtf8("actionCancel"));
    QIcon icon11;
    icon11.addPixmap(QPixmap(QString::fromUtf8(":/cancel.png")), QIcon::Normal, QIcon::Off);
    actionCancel->setIcon(icon11);
    actionShow_Part_List = new QAction(MainWindowBase);
    actionShow_Part_List->setObjectName(QString::fromUtf8("actionShow_Part_List"));
    QIcon icon12;
    icon12.addPixmap(QPixmap(QString::fromUtf8(":/partlist.png")), QIcon::Normal, QIcon::Off);
    actionShow_Part_List->setIcon(icon12);
    actionRename = new QAction(MainWindowBase);
    actionRename->setObjectName(QString::fromUtf8("actionRename"));
    QIcon icon13;
    icon13.addPixmap(QPixmap(QString::fromUtf8(":/rename.png")), QIcon::Normal, QIcon::Off);
    actionRename->setIcon(icon13);
    actionRename_By_Clipboard = new QAction(MainWindowBase);
    actionRename_By_Clipboard->setObjectName(QString::fromUtf8("actionRename_By_Clipboard"));
    QIcon icon14;
    icon14.addPixmap(QPixmap(QString::fromUtf8(":/rename_plus.png")), QIcon::Normal, QIcon::Off);
    actionRename_By_Clipboard->setIcon(icon14);
    actionOpen = new QAction(MainWindowBase);
    actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
    QIcon icon15;
    icon15.addPixmap(QPixmap(QString::fromUtf8(":/exec.png")), QIcon::Normal, QIcon::Off);
    actionOpen->setIcon(icon15);
    actionCopy_Link = new QAction(MainWindowBase);
    actionCopy_Link->setObjectName(QString::fromUtf8("actionCopy_Link"));
    QIcon icon16;
    icon16.addPixmap(QPixmap(QString::fromUtf8(":/text_block.png")), QIcon::Normal, QIcon::Off);
    actionCopy_Link->setIcon(icon16);
    actionRemove_Finished = new QAction(MainWindowBase);
    actionRemove_Finished->setObjectName(QString::fromUtf8("actionRemove_Finished"));
    QIcon icon17;
    icon17.addPixmap(QPixmap(QString::fromUtf8(":/filter.png")), QIcon::Normal, QIcon::Off);
    actionRemove_Finished->setIcon(icon17);
    actionCreate_Link_List = new QAction(MainWindowBase);
    actionCreate_Link_List->setObjectName(QString::fromUtf8("actionCreate_Link_List"));
    QIcon icon18;
    icon18.addPixmap(QPixmap(QString::fromUtf8(":/toggle_log.png")), QIcon::Normal, QIcon::Off);
    actionCreate_Link_List->setIcon(icon18);
    actionHide_Paused = new QAction(MainWindowBase);
    actionHide_Paused->setObjectName(QString::fromUtf8("actionHide_Paused"));
    actionHide_Paused->setCheckable(true);
    QIcon icon19;
    icon19.addPixmap(QPixmap(QString::fromUtf8(":/pause_fade.png")), QIcon::Normal, QIcon::Off);
    actionHide_Paused->setIcon(icon19);
    actionMaximal_Power = new QAction(MainWindowBase);
    actionMaximal_Power->setObjectName(QString::fromUtf8("actionMaximal_Power"));
    QIcon icon20;
    icon20.addPixmap(QPixmap(QString::fromUtf8(":/launch.png")), QIcon::Normal, QIcon::Off);
    actionMaximal_Power->setIcon(icon20);
    actionHide_Queued = new QAction(MainWindowBase);
    actionHide_Queued->setObjectName(QString::fromUtf8("actionHide_Queued"));
    actionHide_Queued->setCheckable(true);
    actionHide_Queued->setIcon(icon19);
    actionDownload = new QAction(MainWindowBase);
    actionDownload->setObjectName(QString::fromUtf8("actionDownload"));
    QIcon icon21;
    icon21.addPixmap(QPixmap(QString::fromUtf8(":/save.png")), QIcon::Normal, QIcon::Off);
    actionDownload->setIcon(icon21);
    actionCancel_Search = new QAction(MainWindowBase);
    actionCancel_Search->setObjectName(QString::fromUtf8("actionCancel_Search"));
    actionCancel_Search->setIcon(icon11);
    actionCopy_Link_Search = new QAction(MainWindowBase);
    actionCopy_Link_Search->setObjectName(QString::fromUtf8("actionCopy_Link_Search"));
    actionCopy_Link_Search->setIcon(icon16);
    actionCreate_Link_List_Search = new QAction(MainWindowBase);
    actionCreate_Link_List_Search->setObjectName(QString::fromUtf8("actionCreate_Link_List_Search"));
    actionCreate_Link_List_Search->setIcon(icon18);
    actionConnect_Server = new QAction(MainWindowBase);
    actionConnect_Server->setObjectName(QString::fromUtf8("actionConnect_Server"));
    QIcon icon22;
    icon22.addPixmap(QPixmap(QString::fromUtf8(":/connect.png")), QIcon::Normal, QIcon::Off);
    actionConnect_Server->setIcon(icon22);
    actionRemove_Server = new QAction(MainWindowBase);
    actionRemove_Server->setObjectName(QString::fromUtf8("actionRemove_Server"));
    actionRemove_Server->setIcon(icon11);
    actionSearch_Server = new QAction(MainWindowBase);
    actionSearch_Server->setObjectName(QString::fromUtf8("actionSearch_Server"));
    QIcon icon23;
    icon23.addPixmap(QPixmap(QString::fromUtf8(":/find.png")), QIcon::Normal, QIcon::Off);
    actionSearch_Server->setIcon(icon23);
    actionShow_Welcome_Message = new QAction(MainWindowBase);
    actionShow_Welcome_Message->setObjectName(QString::fromUtf8("actionShow_Welcome_Message"));
    actionShow_Welcome_Message->setCheckable(true);
    actionShow_Welcome_Message->setIcon(icon16);
    actionAdd_Share = new QAction(MainWindowBase);
    actionAdd_Share->setObjectName(QString::fromUtf8("actionAdd_Share"));
    QIcon icon24;
    icon24.addPixmap(QPixmap(QString::fromUtf8(":/add.png")), QIcon::Normal, QIcon::Off);
    actionAdd_Share->setIcon(icon24);
    actionRemove_Share = new QAction(MainWindowBase);
    actionRemove_Share->setObjectName(QString::fromUtf8("actionRemove_Share"));
    QIcon icon25;
    icon25.addPixmap(QPixmap(QString::fromUtf8(":/remove.png")), QIcon::Normal, QIcon::Off);
    actionRemove_Share->setIcon(icon25);
    actionReload_Share = new QAction(MainWindowBase);
    actionReload_Share->setObjectName(QString::fromUtf8("actionReload_Share"));
    QIcon icon26;
    icon26.addPixmap(QPixmap(QString::fromUtf8(":/update.png")), QIcon::Normal, QIcon::Off);
    actionReload_Share->setIcon(icon26);
    actionCommit_Share = new QAction(MainWindowBase);
    actionCommit_Share->setObjectName(QString::fromUtf8("actionCommit_Share"));
    actionCommit_Share->setEnabled(false);
    QIcon icon27;
    icon27.addPixmap(QPixmap(QString::fromUtf8(":/commit.png")), QIcon::Normal, QIcon::Off);
    actionCommit_Share->setIcon(icon27);
    actionCopy_Link_Share = new QAction(MainWindowBase);
    actionCopy_Link_Share->setObjectName(QString::fromUtf8("actionCopy_Link_Share"));
    actionCopy_Link_Share->setIcon(icon16);
    actionCreate_Link_List_Share = new QAction(MainWindowBase);
    actionCreate_Link_List_Share->setObjectName(QString::fromUtf8("actionCreate_Link_List_Share"));
    actionCreate_Link_List_Share->setIcon(icon18);
    actionOpen_Incoming = new QAction(MainWindowBase);
    actionOpen_Incoming->setObjectName(QString::fromUtf8("actionOpen_Incoming"));
    actionOpen_Incoming->setIcon(icon15);
    actionCopy_Incoming = new QAction(MainWindowBase);
    actionCopy_Incoming->setObjectName(QString::fromUtf8("actionCopy_Incoming"));
    actionCopy_Incoming->setIcon(icon21);
    actionDelete_Incoming = new QAction(MainWindowBase);
    actionDelete_Incoming->setObjectName(QString::fromUtf8("actionDelete_Incoming"));
    actionDelete_Incoming->setIcon(icon11);
    actionReload_Incoming = new QAction(MainWindowBase);
    actionReload_Incoming->setObjectName(QString::fromUtf8("actionReload_Incoming"));
    QIcon icon28;
    icon28.addPixmap(QPixmap(QString::fromUtf8(":/reload.png")), QIcon::Normal, QIcon::Off);
    actionReload_Incoming->setIcon(icon28);
    actionShow_Part_List_Dock = new QAction(MainWindowBase);
    actionShow_Part_List_Dock->setObjectName(QString::fromUtf8("actionShow_Part_List_Dock"));
    actionShow_Part_List_Dock->setCheckable(true);
    QIcon icon29;
    icon29.addPixmap(QPixmap(QString::fromUtf8(":/partlist2.png")), QIcon::Normal, QIcon::Off);
    actionShow_Part_List_Dock->setIcon(icon29);
    centralwidget = new QWidget(MainWindowBase);
    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
    verticalLayout = new QVBoxLayout(centralwidget);
    verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
    ajTab = new QTabWidget(centralwidget);
    ajTab->setObjectName(QString::fromUtf8("ajTab"));
    downloads = new DockMain();
    downloads->setObjectName(QString::fromUtf8("downloads"));
    downloadsTreeWidget = new QTreeWidget(downloads);
    QIcon icon30;
    icon30.addPixmap(QPixmap(QString::fromUtf8(":/small/launch.png")), QIcon::Normal, QIcon::Off);
    downloadsTreeWidget->headerItem()->setIcon(5, icon30);
    QIcon icon31;
    icon31.addPixmap(QPixmap(QString::fromUtf8(":/small/clock.png")), QIcon::Normal, QIcon::Off);
    downloadsTreeWidget->headerItem()->setIcon(9, icon31);
    downloadsTreeWidget->setObjectName(QString::fromUtf8("downloadsTreeWidget"));
    downloadsTreeWidget->setGeometry(QRect(4, 4, 831, 515));
    QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(downloadsTreeWidget->sizePolicy().hasHeightForWidth());
    downloadsTreeWidget->setSizePolicy(sizePolicy);
    downloadsTreeWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
    downloadsTreeWidget->setSortingEnabled(true);
    partListDock = new QDockWidget(downloads);
    partListDock->setObjectName(QString::fromUtf8("partListDock"));
    partListDock->setGeometry(QRect(840, 20, 401, 471));
    partListDock->setMinimumSize(QSize(73, 51));
    dockWidgetContents_8 = new QWidget();
    dockWidgetContents_8->setObjectName(QString::fromUtf8("dockWidgetContents_8"));
    verticalLayout_2 = new QVBoxLayout(dockWidgetContents_8);
    verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
    partsWidget = new PartsWidget(dockWidgetContents_8);
    partsWidget->setObjectName(QString::fromUtf8("partsWidget"));
    QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(partsWidget->sizePolicy().hasHeightForWidth());
    partsWidget->setSizePolicy(sizePolicy1);
    partsWidget->setMinimumSize(QSize(0, 0));
    partsWidget->setSizeIncrement(QSize(0, 0));

    verticalLayout_2->addWidget(partsWidget);

    partListDock->setWidget(dockWidgetContents_8);
    QIcon icon32;
    icon32.addPixmap(QPixmap(QString::fromUtf8(":/small/down.png")), QIcon::Normal, QIcon::Off);
    ajTab->addTab(downloads, icon32, QString());
    uploads = new QWidget();
    uploads->setObjectName(QString::fromUtf8("uploads"));
    verticalLayout_3 = new QVBoxLayout(uploads);
    verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
    uploadsTreeWidget = new QTreeWidget(uploads);
    uploadsTreeWidget->setObjectName(QString::fromUtf8("uploadsTreeWidget"));
    uploadsTreeWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
    uploadsTreeWidget->setSortingEnabled(true);

    verticalLayout_3->addWidget(uploadsTreeWidget);

    QIcon icon33;
    icon33.addPixmap(QPixmap(QString::fromUtf8(":/small/up.png")), QIcon::Normal, QIcon::Off);
    ajTab->addTab(uploads, icon33, QString());
    search = new QWidget();
    search->setObjectName(QString::fromUtf8("search"));
    verticalLayout_4 = new QVBoxLayout(search);
    verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
    searchsTreeWidget = new QTreeWidget(search);
    searchsTreeWidget->setObjectName(QString::fromUtf8("searchsTreeWidget"));
    searchsTreeWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
    searchsTreeWidget->setSortingEnabled(true);

    verticalLayout_4->addWidget(searchsTreeWidget);

    QIcon icon34;
    icon34.addPixmap(QPixmap(QString::fromUtf8(":/small/searching.png")), QIcon::Normal, QIcon::Off);
    ajTab->addTab(search, icon34, QString());
    server = new DockMain();
    server->setObjectName(QString::fromUtf8("server"));
    serverTreeWidget = new QTreeWidget(server);
    serverTreeWidget->setObjectName(QString::fromUtf8("serverTreeWidget"));
    serverTreeWidget->setGeometry(QRect(4, 4, 961, 515));
    QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
    sizePolicy2.setHorizontalStretch(2);
    sizePolicy2.setVerticalStretch(2);
    sizePolicy2.setHeightForWidth(serverTreeWidget->sizePolicy().hasHeightForWidth());
    serverTreeWidget->setSizePolicy(sizePolicy2);
    serverTreeWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
    serverTreeWidget->setSortingEnabled(true);
    welcomeDock = new QDockWidget(server);
    welcomeDock->setObjectName(QString::fromUtf8("welcomeDock"));
    welcomeDock->setGeometry(QRect(974, 4, 294, 515));
    QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
    sizePolicy3.setHorizontalStretch(1);
    sizePolicy3.setVerticalStretch(1);
    sizePolicy3.setHeightForWidth(welcomeDock->sizePolicy().hasHeightForWidth());
    welcomeDock->setSizePolicy(sizePolicy3);
    welcomeDock->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetMovable);
    dockWidgetContents_3 = new QWidget();
    dockWidgetContents_3->setObjectName(QString::fromUtf8("dockWidgetContents_3"));
    verticalLayout_5 = new QVBoxLayout(dockWidgetContents_3);
    verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
    welcomeEdit = new QTextEdit(dockWidgetContents_3);
    welcomeEdit->setObjectName(QString::fromUtf8("welcomeEdit"));
    sizePolicy1.setHeightForWidth(welcomeEdit->sizePolicy().hasHeightForWidth());
    welcomeEdit->setSizePolicy(sizePolicy1);

    verticalLayout_5->addWidget(welcomeEdit);

    welcomeDock->setWidget(dockWidgetContents_3);
    QIcon icon35;
    icon35.addPixmap(QPixmap(QString::fromUtf8(":/small/server.png")), QIcon::Normal, QIcon::Off);
    ajTab->addTab(server, icon35, QString());
    shares = new QWidget();
    shares->setObjectName(QString::fromUtf8("shares"));
    verticalLayout_6 = new QVBoxLayout(shares);
    verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
    sharesTreeWidget = new QTreeWidget(shares);
    sharesTreeWidget->setObjectName(QString::fromUtf8("sharesTreeWidget"));
    sharesTreeWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
    sharesTreeWidget->setSortingEnabled(true);

    verticalLayout_6->addWidget(sharesTreeWidget);

    QIcon icon36;
    icon36.addPixmap(QPixmap(QString::fromUtf8(":/small/folder_open.png")), QIcon::Normal, QIcon::Off);
    ajTab->addTab(shares, icon36, QString());
    incoming = new QWidget();
    incoming->setObjectName(QString::fromUtf8("incoming"));
    verticalLayout_7 = new QVBoxLayout(incoming);
    verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
    incomingTreeWidget = new QTreeWidget(incoming);
    incomingTreeWidget->setObjectName(QString::fromUtf8("incomingTreeWidget"));
    incomingTreeWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
    incomingTreeWidget->setSortingEnabled(true);

    verticalLayout_7->addWidget(incomingTreeWidget);

    QIcon icon37;
    icon37.addPixmap(QPixmap(QString::fromUtf8(":/small/ftp.png")), QIcon::Normal, QIcon::Off);
    ajTab->addTab(incoming, icon37, QString());

    verticalLayout->addWidget(ajTab);

    MainWindowBase->setCentralWidget(centralwidget);
    menubar = new QMenuBar(MainWindowBase);
    menubar->setObjectName(QString::fromUtf8("menubar"));
    menubar->setGeometry(QRect(0, 0, 1288, 32));
    menuAppleJuice = new QMenu(menubar);
    menuAppleJuice->setObjectName(QString::fromUtf8("menuAppleJuice"));
    menuHelp = new QMenu(menubar);
    menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
    menuDownload = new QMenu(menubar);
    menuDownload->setObjectName(QString::fromUtf8("menuDownload"));
    menuUpload = new QMenu(menubar);
    menuUpload->setObjectName(QString::fromUtf8("menuUpload"));
    menuSearch = new QMenu(menubar);
    menuSearch->setObjectName(QString::fromUtf8("menuSearch"));
    menuServer = new QMenu(menubar);
    menuServer->setObjectName(QString::fromUtf8("menuServer"));
    menuShare = new QMenu(menubar);
    menuShare->setObjectName(QString::fromUtf8("menuShare"));
    menuIncoming = new QMenu(menubar);
    menuIncoming->setObjectName(QString::fromUtf8("menuIncoming"));
    MainWindowBase->setMenuBar(menubar);
    statusbar = new QStatusBar(MainWindowBase);
    statusbar->setObjectName(QString::fromUtf8("statusbar"));
    MainWindowBase->setStatusBar(statusbar);
    ajTools = new QToolBar(MainWindowBase);
    ajTools->setObjectName(QString::fromUtf8("ajTools"));
    ajTools->setIconSize(QSize(22, 22));
    MainWindowBase->addToolBar(Qt::TopToolBarArea, ajTools);
    ajLinks = new QToolBar(MainWindowBase);
    ajLinks->setObjectName(QString::fromUtf8("ajLinks"));
    ajLinks->setMinimumSize(QSize(0, 0));
    ajLinks->setIconSize(QSize(22, 22));
    MainWindowBase->addToolBar(Qt::TopToolBarArea, ajLinks);
    downloadToolBar = new QToolBar(MainWindowBase);
    downloadToolBar->setObjectName(QString::fromUtf8("downloadToolBar"));
    downloadToolBar->setIconSize(QSize(22, 22));
    MainWindowBase->addToolBar(Qt::TopToolBarArea, downloadToolBar);
    MainWindowBase->insertToolBarBreak(downloadToolBar);
    uploadToolBar = new QToolBar(MainWindowBase);
    uploadToolBar->setObjectName(QString::fromUtf8("uploadToolBar"));
    uploadToolBar->setIconSize(QSize(22, 22));
    MainWindowBase->addToolBar(Qt::TopToolBarArea, uploadToolBar);
    searchToolBar = new QToolBar(MainWindowBase);
    searchToolBar->setObjectName(QString::fromUtf8("searchToolBar"));
    searchToolBar->setIconSize(QSize(22, 22));
    MainWindowBase->addToolBar(Qt::TopToolBarArea, searchToolBar);
    serverToolBar = new QToolBar(MainWindowBase);
    serverToolBar->setObjectName(QString::fromUtf8("serverToolBar"));
    serverToolBar->setIconSize(QSize(22, 22));
    MainWindowBase->addToolBar(Qt::TopToolBarArea, serverToolBar);
    shareToolBar = new QToolBar(MainWindowBase);
    shareToolBar->setObjectName(QString::fromUtf8("shareToolBar"));
    shareToolBar->setIconSize(QSize(22, 22));
    MainWindowBase->addToolBar(Qt::TopToolBarArea, shareToolBar);
    incomingToolBar = new QToolBar(MainWindowBase);
    incomingToolBar->setObjectName(QString::fromUtf8("incomingToolBar"));
    incomingToolBar->setIconSize(QSize(22, 22));
    MainWindowBase->addToolBar(Qt::TopToolBarArea, incomingToolBar);

    menubar->addAction(menuAppleJuice->menuAction());
    menubar->addAction(menuDownload->menuAction());
    menubar->addAction(menuUpload->menuAction());
    menubar->addAction(menuSearch->menuAction());
    menubar->addAction(menuServer->menuAction());
    menubar->addAction(menuShare->menuAction());
    menubar->addAction(menuIncoming->menuAction());
    menubar->addAction(menuHelp->menuAction());
    menuAppleJuice->addAction(actionConfigure);
    menuAppleJuice->addAction(actionNet_Info);
    menuAppleJuice->addAction(actionOpen_Aj_Link_List);
    menuAppleJuice->addAction(actionAdjust_Columns);
    menuAppleJuice->addSeparator();
    menuAppleJuice->addAction(actionExit_Core);
    menuAppleJuice->addAction(actionQuit_GUI);
    menuHelp->addAction(actionAbout);
    menuHelp->addAction(actionAbout_Qt);
    menuDownload->addAction(actionPause);
    menuDownload->addAction(actionResume);
    menuDownload->addAction(actionCancel);
    menuDownload->addAction(actionShow_Part_List);
    menuDownload->addAction(actionRename);
    menuDownload->addAction(actionRename_By_Clipboard);
    menuDownload->addAction(actionOpen);
    menuDownload->addAction(actionCopy_Link);
    menuDownload->addAction(actionCreate_Link_List);
    menuDownload->addSeparator();
    menuDownload->addAction(actionMaximal_Power);
    menuDownload->addAction(actionRemove_Finished);
    menuDownload->addAction(actionHide_Paused);
    menuDownload->addAction(actionShow_Part_List_Dock);
    menuUpload->addAction(actionHide_Queued);
    menuSearch->addAction(actionDownload);
    menuSearch->addAction(actionCancel_Search);
    menuSearch->addAction(actionCopy_Link_Search);
    menuServer->addAction(actionConnect_Server);
    menuServer->addAction(actionRemove_Server);
    menuServer->addSeparator();
    menuServer->addAction(actionSearch_Server);
    menuServer->addAction(actionShow_Welcome_Message);
    menuShare->addAction(actionRemove_Share);
    menuShare->addSeparator();
    menuShare->addAction(actionAdd_Share);
    menuShare->addAction(actionReload_Share);
    menuShare->addAction(actionCommit_Share);
    menuShare->addAction(actionCopy_Link_Share);
    menuShare->addAction(actionCreate_Link_List_Share);
    menuIncoming->addAction(actionOpen_Incoming);
    menuIncoming->addAction(actionCopy_Incoming);
    menuIncoming->addAction(actionDelete_Incoming);
    menuIncoming->addSeparator();
    menuIncoming->addAction(actionReload_Incoming);
    ajTools->addAction(actionConfigure);
    ajTools->addAction(actionNet_Info);
    ajTools->addSeparator();
    ajTools->addAction(actionOpen_Aj_Link_List);
    ajTools->addAction(actionAdjust_Columns);
    ajLinks->addAction(actionProcess_Link_From_Clipboard);
    downloadToolBar->addAction(actionPause);
    downloadToolBar->addAction(actionResume);
    downloadToolBar->addAction(actionCancel);
    downloadToolBar->addAction(actionShow_Part_List);
    downloadToolBar->addAction(actionRename);
    downloadToolBar->addAction(actionRename_By_Clipboard);
    downloadToolBar->addAction(actionOpen);
    downloadToolBar->addAction(actionCopy_Link);
    downloadToolBar->addAction(actionCreate_Link_List);
    downloadToolBar->addSeparator();
    downloadToolBar->addAction(actionMaximal_Power);
    downloadToolBar->addAction(actionRemove_Finished);
    downloadToolBar->addAction(actionHide_Paused);
    downloadToolBar->addAction(actionShow_Part_List_Dock);
    downloadToolBar->addSeparator();
    uploadToolBar->addAction(actionHide_Queued);
    searchToolBar->addAction(actionDownload);
    searchToolBar->addAction(actionCancel_Search);
    searchToolBar->addAction(actionCopy_Link_Search);
    searchToolBar->addAction(actionCreate_Link_List_Search);
    serverToolBar->addAction(actionConnect_Server);
    serverToolBar->addAction(actionRemove_Server);
    serverToolBar->addSeparator();
    serverToolBar->addAction(actionSearch_Server);
    serverToolBar->addAction(actionShow_Welcome_Message);
    shareToolBar->addAction(actionRemove_Share);
    shareToolBar->addAction(actionCopy_Link_Share);
    shareToolBar->addAction(actionCreate_Link_List_Share);
    shareToolBar->addSeparator();
    shareToolBar->addAction(actionAdd_Share);
    shareToolBar->addAction(actionReload_Share);
    shareToolBar->addAction(actionCommit_Share);
    shareToolBar->addSeparator();
    incomingToolBar->addAction(actionOpen_Incoming);
    incomingToolBar->addAction(actionCopy_Incoming);
    incomingToolBar->addAction(actionDelete_Incoming);
    incomingToolBar->addSeparator();
    incomingToolBar->addAction(actionReload_Incoming);

    retranslateUi(MainWindowBase);

    ajTab->setCurrentIndex(1);


    QMetaObject::connectSlotsByName(MainWindowBase);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowBase)
    {
    MainWindowBase->setWindowTitle(QApplication::translate("MainWindowBase", "MainWindow", 0, QApplication::UnicodeUTF8));
    actionConfigure->setText(QApplication::translate("MainWindowBase", "Configure", 0, QApplication::UnicodeUTF8));
    actionConfigure->setShortcut(QApplication::translate("MainWindowBase", "Ctrl+O", 0, QApplication::UnicodeUTF8));
    actionNet_Info->setText(QApplication::translate("MainWindowBase", "Net Info", 0, QApplication::UnicodeUTF8));
    actionNet_Info->setShortcut(QApplication::translate("MainWindowBase", "Ctrl+N", 0, QApplication::UnicodeUTF8));
    actionOpen_Aj_Link_List->setText(QApplication::translate("MainWindowBase", "Open Aj Link List", 0, QApplication::UnicodeUTF8));
    actionExit_Core->setText(QApplication::translate("MainWindowBase", "Exit Core", 0, QApplication::UnicodeUTF8));
    actionExit_Core->setShortcut(QApplication::translate("MainWindowBase", "Ctrl+E", 0, QApplication::UnicodeUTF8));
    actionQuit_GUI->setText(QApplication::translate("MainWindowBase", "Quit GUI", 0, QApplication::UnicodeUTF8));
    actionQuit_GUI->setShortcut(QApplication::translate("MainWindowBase", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
    actionAbout->setText(QApplication::translate("MainWindowBase", "About", 0, QApplication::UnicodeUTF8));
    actionAbout->setShortcut(QApplication::translate("MainWindowBase", "F1", 0, QApplication::UnicodeUTF8));
    actionAbout_Qt->setText(QApplication::translate("MainWindowBase", "About Qt", 0, QApplication::UnicodeUTF8));
    actionAdjust_Columns->setText(QApplication::translate("MainWindowBase", "Adjust Column", 0, QApplication::UnicodeUTF8));
    actionProcess_Link_From_Clipboard->setText(QApplication::translate("MainWindowBase", "Process Link From Clipboard", 0, QApplication::UnicodeUTF8));
    actionPause->setText(QApplication::translate("MainWindowBase", "Pause", 0, QApplication::UnicodeUTF8));
    actionResume->setText(QApplication::translate("MainWindowBase", "Resume", 0, QApplication::UnicodeUTF8));
    actionCancel->setText(QApplication::translate("MainWindowBase", "Cancel", 0, QApplication::UnicodeUTF8));
    actionShow_Part_List->setText(QApplication::translate("MainWindowBase", "Show Part List Dialog", 0, QApplication::UnicodeUTF8));
    actionRename->setText(QApplication::translate("MainWindowBase", "Rename", 0, QApplication::UnicodeUTF8));
    actionRename_By_Clipboard->setText(QApplication::translate("MainWindowBase", "Rename By Clipboard", 0, QApplication::UnicodeUTF8));
    actionOpen->setText(QApplication::translate("MainWindowBase", "Open", 0, QApplication::UnicodeUTF8));
    actionCopy_Link->setText(QApplication::translate("MainWindowBase", "Copy Link", 0, QApplication::UnicodeUTF8));
    actionRemove_Finished->setText(QApplication::translate("MainWindowBase", "Remove Finished", 0, QApplication::UnicodeUTF8));
    actionCreate_Link_List->setText(QApplication::translate("MainWindowBase", "Create Link List", 0, QApplication::UnicodeUTF8));
    actionHide_Paused->setText(QApplication::translate("MainWindowBase", "Hide Paused", 0, QApplication::UnicodeUTF8));
    actionMaximal_Power->setText(QApplication::translate("MainWindowBase", "Maximal Power", 0, QApplication::UnicodeUTF8));
    actionHide_Queued->setText(QApplication::translate("MainWindowBase", "Hide Queued", 0, QApplication::UnicodeUTF8));
    actionDownload->setText(QApplication::translate("MainWindowBase", "download", 0, QApplication::UnicodeUTF8));
    actionCancel_Search->setText(QApplication::translate("MainWindowBase", "Cancel", 0, QApplication::UnicodeUTF8));
    actionCopy_Link_Search->setText(QApplication::translate("MainWindowBase", "Copy Link", 0, QApplication::UnicodeUTF8));
    actionCreate_Link_List_Search->setText(QApplication::translate("MainWindowBase", "Create Link List", 0, QApplication::UnicodeUTF8));
    actionConnect_Server->setText(QApplication::translate("MainWindowBase", "Connect", 0, QApplication::UnicodeUTF8));
    actionRemove_Server->setText(QApplication::translate("MainWindowBase", "Remove", 0, QApplication::UnicodeUTF8));
    actionSearch_Server->setText(QApplication::translate("MainWindowBase", "Search", 0, QApplication::UnicodeUTF8));
    actionShow_Welcome_Message->setText(QApplication::translate("MainWindowBase", "Show Welcome Message", 0, QApplication::UnicodeUTF8));
    actionAdd_Share->setText(QApplication::translate("MainWindowBase", "Add", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    actionAdd_Share->setToolTip(QApplication::translate("MainWindowBase", "Add New Share Folder", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    actionRemove_Share->setText(QApplication::translate("MainWindowBase", "Remove", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    actionRemove_Share->setToolTip(QApplication::translate("MainWindowBase", "Remove Share Folder", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    actionReload_Share->setText(QApplication::translate("MainWindowBase", "Reload", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    actionReload_Share->setToolTip(QApplication::translate("MainWindowBase", "Reload Shares From The Core", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    actionCommit_Share->setText(QApplication::translate("MainWindowBase", "Commit", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    actionCommit_Share->setToolTip(QApplication::translate("MainWindowBase", "Commit Changes And Start Share Checking", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    actionCopy_Link_Share->setText(QApplication::translate("MainWindowBase", "Copy Link", 0, QApplication::UnicodeUTF8));
    actionCreate_Link_List_Share->setText(QApplication::translate("MainWindowBase", "Create Link List", 0, QApplication::UnicodeUTF8));
    actionOpen_Incoming->setText(QApplication::translate("MainWindowBase", "Open", 0, QApplication::UnicodeUTF8));
    actionCopy_Incoming->setText(QApplication::translate("MainWindowBase", "Copy", 0, QApplication::UnicodeUTF8));
    actionDelete_Incoming->setText(QApplication::translate("MainWindowBase", "Delete", 0, QApplication::UnicodeUTF8));
    actionReload_Incoming->setText(QApplication::translate("MainWindowBase", "Reload", 0, QApplication::UnicodeUTF8));
    actionShow_Part_List_Dock->setText(QApplication::translate("MainWindowBase", "Show Part List Dock", 0, QApplication::UnicodeUTF8));
    actionShow_Part_List_Dock->setIconText(QApplication::translate("MainWindowBase", "Show Part List Dock", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    actionShow_Part_List_Dock->setToolTip(QApplication::translate("MainWindowBase", "Show Part List Dock Widget", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    downloadsTreeWidget->headerItem()->setText(0, QApplication::translate("MainWindowBase", "Filename", 0, QApplication::UnicodeUTF8));
    downloadsTreeWidget->headerItem()->setText(1, QApplication::translate("MainWindowBase", "Sources", 0, QApplication::UnicodeUTF8));
    downloadsTreeWidget->headerItem()->setText(2, QApplication::translate("MainWindowBase", "Speed", 0, QApplication::UnicodeUTF8));
    downloadsTreeWidget->headerItem()->setText(3, QApplication::translate("MainWindowBase", "Status", 0, QApplication::UnicodeUTF8));
    downloadsTreeWidget->headerItem()->setText(4, QApplication::translate("MainWindowBase", "Finished", 0, QApplication::UnicodeUTF8));
    downloadsTreeWidget->headerItem()->setText(5, QApplication::translate("MainWindowBase", "Power", 0, QApplication::UnicodeUTF8));
    downloadsTreeWidget->headerItem()->setText(6, QApplication::translate("MainWindowBase", "Size", 0, QApplication::UnicodeUTF8));
    downloadsTreeWidget->headerItem()->setText(7, QApplication::translate("MainWindowBase", "Finished", 0, QApplication::UnicodeUTF8));
    downloadsTreeWidget->headerItem()->setText(8, QApplication::translate("MainWindowBase", "Remaining", 0, QApplication::UnicodeUTF8));
    downloadsTreeWidget->headerItem()->setText(9, QApplication::translate("MainWindowBase", "Eta", 0, QApplication::UnicodeUTF8));
    downloadsTreeWidget->headerItem()->setText(10, QApplication::translate("MainWindowBase", "Not Seen", 0, QApplication::UnicodeUTF8));
    partListDock->setWindowTitle(QApplication::translate("MainWindowBase", "Part List", 0, QApplication::UnicodeUTF8));
    ajTab->setTabText(ajTab->indexOf(downloads), QApplication::translate("MainWindowBase", "Downloads", 0, QApplication::UnicodeUTF8));
    uploadsTreeWidget->headerItem()->setText(0, QApplication::translate("MainWindowBase", "Filename", 0, QApplication::UnicodeUTF8));
    uploadsTreeWidget->headerItem()->setText(1, QApplication::translate("MainWindowBase", "current part", 0, QApplication::UnicodeUTF8));
    uploadsTreeWidget->headerItem()->setText(2, QApplication::translate("MainWindowBase", "Nick", 0, QApplication::UnicodeUTF8));
    uploadsTreeWidget->headerItem()->setText(3, QApplication::translate("MainWindowBase", "Speed", 0, QApplication::UnicodeUTF8));
    uploadsTreeWidget->headerItem()->setText(4, QApplication::translate("MainWindowBase", "Status", 0, QApplication::UnicodeUTF8));
    uploadsTreeWidget->headerItem()->setText(5, QApplication::translate("MainWindowBase", "Priority", 0, QApplication::UnicodeUTF8));
    uploadsTreeWidget->headerItem()->setText(6, QApplication::translate("MainWindowBase", "OS", 0, QApplication::UnicodeUTF8));
    uploadsTreeWidget->headerItem()->setText(7, QApplication::translate("MainWindowBase", "Direct State", 0, QApplication::UnicodeUTF8));
    uploadsTreeWidget->headerItem()->setText(8, QApplication::translate("MainWindowBase", "Core", 0, QApplication::UnicodeUTF8));
    uploadsTreeWidget->headerItem()->setText(9, QApplication::translate("MainWindowBase", "distribution", 0, QApplication::UnicodeUTF8));
    uploadsTreeWidget->headerItem()->setText(10, QApplication::translate("MainWindowBase", "last connection", 0, QApplication::UnicodeUTF8));
    ajTab->setTabText(ajTab->indexOf(uploads), QApplication::translate("MainWindowBase", "Uploads", 0, QApplication::UnicodeUTF8));
    searchsTreeWidget->headerItem()->setText(0, QApplication::translate("MainWindowBase", "Search", 0, QApplication::UnicodeUTF8));
    searchsTreeWidget->headerItem()->setText(1, QApplication::translate("MainWindowBase", "Size", 0, QApplication::UnicodeUTF8));
    searchsTreeWidget->headerItem()->setText(2, QApplication::translate("MainWindowBase", "Hits", 0, QApplication::UnicodeUTF8));
    ajTab->setTabText(ajTab->indexOf(search), QApplication::translate("MainWindowBase", "Search", 0, QApplication::UnicodeUTF8));
    serverTreeWidget->headerItem()->setText(0, QApplication::translate("MainWindowBase", "Name", 0, QApplication::UnicodeUTF8));
    serverTreeWidget->headerItem()->setText(1, QApplication::translate("MainWindowBase", "Host", 0, QApplication::UnicodeUTF8));
    serverTreeWidget->headerItem()->setText(2, QApplication::translate("MainWindowBase", "Port", 0, QApplication::UnicodeUTF8));
    serverTreeWidget->headerItem()->setText(3, QApplication::translate("MainWindowBase", "Last Seen", 0, QApplication::UnicodeUTF8));
    serverTreeWidget->headerItem()->setText(4, QApplication::translate("MainWindowBase", "Tests", 0, QApplication::UnicodeUTF8));
    welcomeDock->setWindowTitle(QApplication::translate("MainWindowBase", "Server Welcome Message", 0, QApplication::UnicodeUTF8));
    ajTab->setTabText(ajTab->indexOf(server), QApplication::translate("MainWindowBase", "Server", 0, QApplication::UnicodeUTF8));
    sharesTreeWidget->headerItem()->setText(0, QApplication::translate("MainWindowBase", "Path", 0, QApplication::UnicodeUTF8));
    sharesTreeWidget->headerItem()->setText(1, QApplication::translate("MainWindowBase", "Size", 0, QApplication::UnicodeUTF8));
    sharesTreeWidget->headerItem()->setText(2, QApplication::translate("MainWindowBase", "Priority", 0, QApplication::UnicodeUTF8));
    ajTab->setTabText(ajTab->indexOf(shares), QApplication::translate("MainWindowBase", "Shares", 0, QApplication::UnicodeUTF8));
    incomingTreeWidget->headerItem()->setText(0, QApplication::translate("MainWindowBase", "Filename", 0, QApplication::UnicodeUTF8));
    incomingTreeWidget->headerItem()->setText(1, QApplication::translate("MainWindowBase", "Size", 0, QApplication::UnicodeUTF8));
    incomingTreeWidget->headerItem()->setText(2, QApplication::translate("MainWindowBase", "Last Modified", 0, QApplication::UnicodeUTF8));
    ajTab->setTabText(ajTab->indexOf(incoming), QApplication::translate("MainWindowBase", "Incoming", 0, QApplication::UnicodeUTF8));
    menuAppleJuice->setTitle(QApplication::translate("MainWindowBase", "&AppleJuice", 0, QApplication::UnicodeUTF8));
    menuHelp->setTitle(QApplication::translate("MainWindowBase", "&Help", 0, QApplication::UnicodeUTF8));
    menuDownload->setTitle(QApplication::translate("MainWindowBase", "Download", 0, QApplication::UnicodeUTF8));
    menuUpload->setTitle(QApplication::translate("MainWindowBase", "Upload", 0, QApplication::UnicodeUTF8));
    menuSearch->setTitle(QApplication::translate("MainWindowBase", "Search", 0, QApplication::UnicodeUTF8));
    menuServer->setTitle(QApplication::translate("MainWindowBase", "Server", 0, QApplication::UnicodeUTF8));
    menuShare->setTitle(QApplication::translate("MainWindowBase", "Share", 0, QApplication::UnicodeUTF8));
    menuIncoming->setTitle(QApplication::translate("MainWindowBase", "Incoming", 0, QApplication::UnicodeUTF8));
    ajTools->setWindowTitle(QApplication::translate("MainWindowBase", "toolBar", 0, QApplication::UnicodeUTF8));
    ajLinks->setWindowTitle(QApplication::translate("MainWindowBase", "toolBar", 0, QApplication::UnicodeUTF8));
    downloadToolBar->setWindowTitle(QApplication::translate("MainWindowBase", "toolBar", 0, QApplication::UnicodeUTF8));
    uploadToolBar->setWindowTitle(QApplication::translate("MainWindowBase", "toolBar", 0, QApplication::UnicodeUTF8));
    searchToolBar->setWindowTitle(QApplication::translate("MainWindowBase", "toolBar", 0, QApplication::UnicodeUTF8));
    serverToolBar->setWindowTitle(QApplication::translate("MainWindowBase", "toolBar", 0, QApplication::UnicodeUTF8));
    shareToolBar->setWindowTitle(QApplication::translate("MainWindowBase", "toolBar", 0, QApplication::UnicodeUTF8));
    incomingToolBar->setWindowTitle(QApplication::translate("MainWindowBase", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindowBase: public Ui_MainWindowBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWBASE_H
