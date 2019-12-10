/********************************************************************************
** Form generated from reading ui file 'qajmainwindowbase.ui'
**
** Created: Sun Jan 18 16:42:33 2009
**      by: Qt User Interface Compiler version 4.4.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QAJMAINWINDOWBASE_H
#define UI_QAJMAINWINDOWBASE_H

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
#include "qajmodulebase.h"
#include "qajpartswidget.h"

QT_BEGIN_NAMESPACE

class Ui_QAjMainWindowBase
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
    QAjPartsWidget *partsWidget;
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

    void setupUi(QMainWindow *QAjMainWindowBase)
    {
    if (QAjMainWindowBase->objectName().isEmpty())
        QAjMainWindowBase->setObjectName(QString::fromUtf8("QAjMainWindowBase"));
    QAjMainWindowBase->resize(1288, 688);
    actionConfigure = new QAction(QAjMainWindowBase);
    actionConfigure->setObjectName(QString::fromUtf8("actionConfigure"));
    QIcon icon;
    icon.addPixmap(QPixmap(QString::fromUtf8(":/configure.png")), QIcon::Normal, QIcon::Off);
    actionConfigure->setIcon(icon);
    actionNet_Info = new QAction(QAjMainWindowBase);
    actionNet_Info->setObjectName(QString::fromUtf8("actionNet_Info"));
    QIcon icon1;
    icon1.addPixmap(QPixmap(QString::fromUtf8(":/network.png")), QIcon::Normal, QIcon::Off);
    actionNet_Info->setIcon(icon1);
    actionOpen_Aj_Link_List = new QAction(QAjMainWindowBase);
    actionOpen_Aj_Link_List->setObjectName(QString::fromUtf8("actionOpen_Aj_Link_List"));
    QIcon icon2;
    icon2.addPixmap(QPixmap(QString::fromUtf8(":/folder_open.png")), QIcon::Normal, QIcon::Off);
    actionOpen_Aj_Link_List->setIcon(icon2);
    actionExit_Core = new QAction(QAjMainWindowBase);
    actionExit_Core->setObjectName(QString::fromUtf8("actionExit_Core"));
    QIcon icon3;
    icon3.addPixmap(QPixmap(QString::fromUtf8(":/small/exit.png")), QIcon::Normal, QIcon::Off);
    actionExit_Core->setIcon(icon3);
    actionQuit_GUI = new QAction(QAjMainWindowBase);
    actionQuit_GUI->setObjectName(QString::fromUtf8("actionQuit_GUI"));
    QIcon icon4;
    icon4.addPixmap(QPixmap(QString::fromUtf8(":/small/close.png")), QIcon::Normal, QIcon::Off);
    actionQuit_GUI->setIcon(icon4);
    actionAbout = new QAction(QAjMainWindowBase);
    actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
    QIcon icon5;
    icon5.addPixmap(QPixmap(QString::fromUtf8(":/small/version.png")), QIcon::Normal, QIcon::Off);
    actionAbout->setIcon(icon5);
    actionAbout_Qt = new QAction(QAjMainWindowBase);
    actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
    actionAdjust_Columns = new QAction(QAjMainWindowBase);
    actionAdjust_Columns->setObjectName(QString::fromUtf8("actionAdjust_Columns"));
    QIcon icon6;
    icon6.addPixmap(QPixmap(QString::fromUtf8(":/adjust.png")), QIcon::Normal, QIcon::Off);
    actionAdjust_Columns->setIcon(icon6);
    actionProcess_Link_From_Clipboard = new QAction(QAjMainWindowBase);
    actionProcess_Link_From_Clipboard->setObjectName(QString::fromUtf8("actionProcess_Link_From_Clipboard"));
    QIcon icon7;
    icon7.addPixmap(QPixmap(QString::fromUtf8(":/wizard.png")), QIcon::Normal, QIcon::Off);
    actionProcess_Link_From_Clipboard->setIcon(icon7);
    actionPause = new QAction(QAjMainWindowBase);
    actionPause->setObjectName(QString::fromUtf8("actionPause"));
    QIcon icon8;
    icon8.addPixmap(QPixmap(QString::fromUtf8(":/pause.png")), QIcon::Normal, QIcon::Off);
    actionPause->setIcon(icon8);
    actionResume = new QAction(QAjMainWindowBase);
    actionResume->setObjectName(QString::fromUtf8("actionResume"));
    QIcon icon9;
    icon9.addPixmap(QPixmap(QString::fromUtf8(":/resume.png")), QIcon::Normal, QIcon::Off);
    actionResume->setIcon(icon9);
    actionCancel = new QAction(QAjMainWindowBase);
    actionCancel->setObjectName(QString::fromUtf8("actionCancel"));
    QIcon icon10;
    icon10.addPixmap(QPixmap(QString::fromUtf8(":/cancel.png")), QIcon::Normal, QIcon::Off);
    actionCancel->setIcon(icon10);
    actionShow_Part_List = new QAction(QAjMainWindowBase);
    actionShow_Part_List->setObjectName(QString::fromUtf8("actionShow_Part_List"));
    QIcon icon11;
    icon11.addPixmap(QPixmap(QString::fromUtf8(":/partlist.png")), QIcon::Normal, QIcon::Off);
    actionShow_Part_List->setIcon(icon11);
    actionRename = new QAction(QAjMainWindowBase);
    actionRename->setObjectName(QString::fromUtf8("actionRename"));
    QIcon icon12;
    icon12.addPixmap(QPixmap(QString::fromUtf8(":/rename.png")), QIcon::Normal, QIcon::Off);
    actionRename->setIcon(icon12);
    actionRename_By_Clipboard = new QAction(QAjMainWindowBase);
    actionRename_By_Clipboard->setObjectName(QString::fromUtf8("actionRename_By_Clipboard"));
    QIcon icon13;
    icon13.addPixmap(QPixmap(QString::fromUtf8(":/rename_plus.png")), QIcon::Normal, QIcon::Off);
    actionRename_By_Clipboard->setIcon(icon13);
    actionOpen = new QAction(QAjMainWindowBase);
    actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
    QIcon icon14;
    icon14.addPixmap(QPixmap(QString::fromUtf8(":/exec.png")), QIcon::Normal, QIcon::Off);
    actionOpen->setIcon(icon14);
    actionCopy_Link = new QAction(QAjMainWindowBase);
    actionCopy_Link->setObjectName(QString::fromUtf8("actionCopy_Link"));
    QIcon icon15;
    icon15.addPixmap(QPixmap(QString::fromUtf8(":/text_block.png")), QIcon::Normal, QIcon::Off);
    actionCopy_Link->setIcon(icon15);
    actionRemove_Finished = new QAction(QAjMainWindowBase);
    actionRemove_Finished->setObjectName(QString::fromUtf8("actionRemove_Finished"));
    QIcon icon16;
    icon16.addPixmap(QPixmap(QString::fromUtf8(":/filter.png")), QIcon::Normal, QIcon::Off);
    actionRemove_Finished->setIcon(icon16);
    actionCreate_Link_List = new QAction(QAjMainWindowBase);
    actionCreate_Link_List->setObjectName(QString::fromUtf8("actionCreate_Link_List"));
    QIcon icon17;
    icon17.addPixmap(QPixmap(QString::fromUtf8(":/toggle_log.png")), QIcon::Normal, QIcon::Off);
    actionCreate_Link_List->setIcon(icon17);
    actionHide_Paused = new QAction(QAjMainWindowBase);
    actionHide_Paused->setObjectName(QString::fromUtf8("actionHide_Paused"));
    actionHide_Paused->setCheckable(true);
    QIcon icon18;
    icon18.addPixmap(QPixmap(QString::fromUtf8(":/pause_fade.png")), QIcon::Normal, QIcon::Off);
    actionHide_Paused->setIcon(icon18);
    actionMaximal_Power = new QAction(QAjMainWindowBase);
    actionMaximal_Power->setObjectName(QString::fromUtf8("actionMaximal_Power"));
    QIcon icon19;
    icon19.addPixmap(QPixmap(QString::fromUtf8(":/launch.png")), QIcon::Normal, QIcon::Off);
    actionMaximal_Power->setIcon(icon19);
    actionHide_Queued = new QAction(QAjMainWindowBase);
    actionHide_Queued->setObjectName(QString::fromUtf8("actionHide_Queued"));
    actionHide_Queued->setCheckable(true);
    actionHide_Queued->setIcon(icon18);
    actionDownload = new QAction(QAjMainWindowBase);
    actionDownload->setObjectName(QString::fromUtf8("actionDownload"));
    QIcon icon20;
    icon20.addPixmap(QPixmap(QString::fromUtf8(":/save.png")), QIcon::Normal, QIcon::Off);
    actionDownload->setIcon(icon20);
    actionCancel_Search = new QAction(QAjMainWindowBase);
    actionCancel_Search->setObjectName(QString::fromUtf8("actionCancel_Search"));
    actionCancel_Search->setIcon(icon10);
    actionCopy_Link_Search = new QAction(QAjMainWindowBase);
    actionCopy_Link_Search->setObjectName(QString::fromUtf8("actionCopy_Link_Search"));
    actionCopy_Link_Search->setIcon(icon15);
    actionCreate_Link_List_Search = new QAction(QAjMainWindowBase);
    actionCreate_Link_List_Search->setObjectName(QString::fromUtf8("actionCreate_Link_List_Search"));
    actionCreate_Link_List_Search->setIcon(icon17);
    actionConnect_Server = new QAction(QAjMainWindowBase);
    actionConnect_Server->setObjectName(QString::fromUtf8("actionConnect_Server"));
    QIcon icon21;
    icon21.addPixmap(QPixmap(QString::fromUtf8(":/connect.png")), QIcon::Normal, QIcon::Off);
    actionConnect_Server->setIcon(icon21);
    actionRemove_Server = new QAction(QAjMainWindowBase);
    actionRemove_Server->setObjectName(QString::fromUtf8("actionRemove_Server"));
    actionRemove_Server->setIcon(icon10);
    actionSearch_Server = new QAction(QAjMainWindowBase);
    actionSearch_Server->setObjectName(QString::fromUtf8("actionSearch_Server"));
    QIcon icon22;
    icon22.addPixmap(QPixmap(QString::fromUtf8(":/find.png")), QIcon::Normal, QIcon::Off);
    actionSearch_Server->setIcon(icon22);
    actionShow_Welcome_Message = new QAction(QAjMainWindowBase);
    actionShow_Welcome_Message->setObjectName(QString::fromUtf8("actionShow_Welcome_Message"));
    actionShow_Welcome_Message->setCheckable(true);
    actionShow_Welcome_Message->setIcon(icon15);
    actionAdd_Share = new QAction(QAjMainWindowBase);
    actionAdd_Share->setObjectName(QString::fromUtf8("actionAdd_Share"));
    QIcon icon23;
    icon23.addPixmap(QPixmap(QString::fromUtf8(":/add.png")), QIcon::Normal, QIcon::Off);
    actionAdd_Share->setIcon(icon23);
    actionRemove_Share = new QAction(QAjMainWindowBase);
    actionRemove_Share->setObjectName(QString::fromUtf8("actionRemove_Share"));
    QIcon icon24;
    icon24.addPixmap(QPixmap(QString::fromUtf8(":/remove.png")), QIcon::Normal, QIcon::Off);
    actionRemove_Share->setIcon(icon24);
    actionReload_Share = new QAction(QAjMainWindowBase);
    actionReload_Share->setObjectName(QString::fromUtf8("actionReload_Share"));
    QIcon icon25;
    icon25.addPixmap(QPixmap(QString::fromUtf8(":/update.png")), QIcon::Normal, QIcon::Off);
    actionReload_Share->setIcon(icon25);
    actionCommit_Share = new QAction(QAjMainWindowBase);
    actionCommit_Share->setObjectName(QString::fromUtf8("actionCommit_Share"));
    actionCommit_Share->setEnabled(false);
    QIcon icon26;
    icon26.addPixmap(QPixmap(QString::fromUtf8(":/commit.png")), QIcon::Normal, QIcon::Off);
    actionCommit_Share->setIcon(icon26);
    actionCopy_Link_Share = new QAction(QAjMainWindowBase);
    actionCopy_Link_Share->setObjectName(QString::fromUtf8("actionCopy_Link_Share"));
    actionCopy_Link_Share->setIcon(icon15);
    actionCreate_Link_List_Share = new QAction(QAjMainWindowBase);
    actionCreate_Link_List_Share->setObjectName(QString::fromUtf8("actionCreate_Link_List_Share"));
    actionCreate_Link_List_Share->setIcon(icon17);
    actionOpen_Incoming = new QAction(QAjMainWindowBase);
    actionOpen_Incoming->setObjectName(QString::fromUtf8("actionOpen_Incoming"));
    actionOpen_Incoming->setIcon(icon14);
    actionCopy_Incoming = new QAction(QAjMainWindowBase);
    actionCopy_Incoming->setObjectName(QString::fromUtf8("actionCopy_Incoming"));
    actionCopy_Incoming->setIcon(icon20);
    actionDelete_Incoming = new QAction(QAjMainWindowBase);
    actionDelete_Incoming->setObjectName(QString::fromUtf8("actionDelete_Incoming"));
    actionDelete_Incoming->setIcon(icon10);
    actionReload_Incoming = new QAction(QAjMainWindowBase);
    actionReload_Incoming->setObjectName(QString::fromUtf8("actionReload_Incoming"));
    QIcon icon27;
    icon27.addPixmap(QPixmap(QString::fromUtf8(":/reload.png")), QIcon::Normal, QIcon::Off);
    actionReload_Incoming->setIcon(icon27);
    actionShow_Part_List_Dock = new QAction(QAjMainWindowBase);
    actionShow_Part_List_Dock->setObjectName(QString::fromUtf8("actionShow_Part_List_Dock"));
    actionShow_Part_List_Dock->setCheckable(true);
    QIcon icon28;
    icon28.addPixmap(QPixmap(QString::fromUtf8(":/partlist2.png")), QIcon::Normal, QIcon::Off);
    actionShow_Part_List_Dock->setIcon(icon28);
    centralwidget = new QWidget(QAjMainWindowBase);
    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
    verticalLayout = new QVBoxLayout(centralwidget);
    verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
    ajTab = new QTabWidget(centralwidget);
    ajTab->setObjectName(QString::fromUtf8("ajTab"));
    downloads = new DockMain();
    downloads->setObjectName(QString::fromUtf8("downloads"));
    downloadsTreeWidget = new QTreeWidget(downloads);
    QIcon icon29;
    icon29.addPixmap(QPixmap(QString::fromUtf8(":/small/launch.png")), QIcon::Normal, QIcon::Off);
    downloadsTreeWidget->headerItem()->setIcon(5, icon29);
    QIcon icon30;
    icon30.addPixmap(QPixmap(QString::fromUtf8(":/small/clock.png")), QIcon::Normal, QIcon::Off);
    downloadsTreeWidget->headerItem()->setIcon(9, icon30);
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
    partListDock->setMinimumSize(QSize(0, 0));
    dockWidgetContents_8 = new QWidget();
    dockWidgetContents_8->setObjectName(QString::fromUtf8("dockWidgetContents_8"));
    verticalLayout_2 = new QVBoxLayout(dockWidgetContents_8);
    verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
    partsWidget = new QAjPartsWidget(dockWidgetContents_8);
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
    QIcon icon31;
    icon31.addPixmap(QPixmap(QString::fromUtf8(":/small/down.png")), QIcon::Normal, QIcon::Off);
    ajTab->addTab(downloads, icon31, QString());
    uploads = new QWidget();
    uploads->setObjectName(QString::fromUtf8("uploads"));
    verticalLayout_3 = new QVBoxLayout(uploads);
    verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
    uploadsTreeWidget = new QTreeWidget(uploads);
    uploadsTreeWidget->setObjectName(QString::fromUtf8("uploadsTreeWidget"));
    uploadsTreeWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
    uploadsTreeWidget->setSortingEnabled(true);

    verticalLayout_3->addWidget(uploadsTreeWidget);

    QIcon icon32;
    icon32.addPixmap(QPixmap(QString::fromUtf8(":/small/up.png")), QIcon::Normal, QIcon::Off);
    ajTab->addTab(uploads, icon32, QString());
    search = new QWidget();
    search->setObjectName(QString::fromUtf8("search"));
    verticalLayout_4 = new QVBoxLayout(search);
    verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
    searchsTreeWidget = new QTreeWidget(search);
    searchsTreeWidget->setObjectName(QString::fromUtf8("searchsTreeWidget"));
    searchsTreeWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
    searchsTreeWidget->setSortingEnabled(true);

    verticalLayout_4->addWidget(searchsTreeWidget);

    QIcon icon33;
    icon33.addPixmap(QPixmap(QString::fromUtf8(":/small/searching.png")), QIcon::Normal, QIcon::Off);
    ajTab->addTab(search, icon33, QString());
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
    QIcon icon34;
    icon34.addPixmap(QPixmap(QString::fromUtf8(":/small/server.png")), QIcon::Normal, QIcon::Off);
    ajTab->addTab(server, icon34, QString());
    shares = new QWidget();
    shares->setObjectName(QString::fromUtf8("shares"));
    verticalLayout_6 = new QVBoxLayout(shares);
    verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
    sharesTreeWidget = new QTreeWidget(shares);
    sharesTreeWidget->setObjectName(QString::fromUtf8("sharesTreeWidget"));
    sharesTreeWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
    sharesTreeWidget->setSortingEnabled(true);

    verticalLayout_6->addWidget(sharesTreeWidget);

    QIcon icon35;
    icon35.addPixmap(QPixmap(QString::fromUtf8(":/small/folder_open.png")), QIcon::Normal, QIcon::Off);
    ajTab->addTab(shares, icon35, QString());
    incoming = new QWidget();
    incoming->setObjectName(QString::fromUtf8("incoming"));
    verticalLayout_7 = new QVBoxLayout(incoming);
    verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
    incomingTreeWidget = new QTreeWidget(incoming);
    incomingTreeWidget->setObjectName(QString::fromUtf8("incomingTreeWidget"));
    incomingTreeWidget->setSortingEnabled(true);

    verticalLayout_7->addWidget(incomingTreeWidget);

    QIcon icon36;
    icon36.addPixmap(QPixmap(QString::fromUtf8(":/small/ftp.png")), QIcon::Normal, QIcon::Off);
    ajTab->addTab(incoming, icon36, QString());

    verticalLayout->addWidget(ajTab);

    QAjMainWindowBase->setCentralWidget(centralwidget);
    menubar = new QMenuBar(QAjMainWindowBase);
    menubar->setObjectName(QString::fromUtf8("menubar"));
    menubar->setGeometry(QRect(0, 0, 1288, 27));
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
    QAjMainWindowBase->setMenuBar(menubar);
    statusbar = new QStatusBar(QAjMainWindowBase);
    statusbar->setObjectName(QString::fromUtf8("statusbar"));
    QAjMainWindowBase->setStatusBar(statusbar);
    ajTools = new QToolBar(QAjMainWindowBase);
    ajTools->setObjectName(QString::fromUtf8("ajTools"));
    ajTools->setIconSize(QSize(22, 22));
    QAjMainWindowBase->addToolBar(Qt::TopToolBarArea, ajTools);
    ajLinks = new QToolBar(QAjMainWindowBase);
    ajLinks->setObjectName(QString::fromUtf8("ajLinks"));
    ajLinks->setMinimumSize(QSize(0, 0));
    ajLinks->setIconSize(QSize(22, 22));
    QAjMainWindowBase->addToolBar(Qt::TopToolBarArea, ajLinks);
    downloadToolBar = new QToolBar(QAjMainWindowBase);
    downloadToolBar->setObjectName(QString::fromUtf8("downloadToolBar"));
    downloadToolBar->setIconSize(QSize(22, 22));
    QAjMainWindowBase->addToolBar(Qt::TopToolBarArea, downloadToolBar);
    QAjMainWindowBase->insertToolBarBreak(downloadToolBar);
    uploadToolBar = new QToolBar(QAjMainWindowBase);
    uploadToolBar->setObjectName(QString::fromUtf8("uploadToolBar"));
    uploadToolBar->setIconSize(QSize(22, 22));
    QAjMainWindowBase->addToolBar(Qt::TopToolBarArea, uploadToolBar);
    searchToolBar = new QToolBar(QAjMainWindowBase);
    searchToolBar->setObjectName(QString::fromUtf8("searchToolBar"));
    searchToolBar->setIconSize(QSize(22, 22));
    QAjMainWindowBase->addToolBar(Qt::TopToolBarArea, searchToolBar);
    serverToolBar = new QToolBar(QAjMainWindowBase);
    serverToolBar->setObjectName(QString::fromUtf8("serverToolBar"));
    serverToolBar->setIconSize(QSize(22, 22));
    QAjMainWindowBase->addToolBar(Qt::TopToolBarArea, serverToolBar);
    shareToolBar = new QToolBar(QAjMainWindowBase);
    shareToolBar->setObjectName(QString::fromUtf8("shareToolBar"));
    shareToolBar->setIconSize(QSize(22, 22));
    QAjMainWindowBase->addToolBar(Qt::TopToolBarArea, shareToolBar);
    incomingToolBar = new QToolBar(QAjMainWindowBase);
    incomingToolBar->setObjectName(QString::fromUtf8("incomingToolBar"));
    incomingToolBar->setIconSize(QSize(22, 22));
    QAjMainWindowBase->addToolBar(Qt::TopToolBarArea, incomingToolBar);

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

    retranslateUi(QAjMainWindowBase);

    ajTab->setCurrentIndex(0);


    QMetaObject::connectSlotsByName(QAjMainWindowBase);
    } // setupUi

    void retranslateUi(QMainWindow *QAjMainWindowBase)
    {
    QAjMainWindowBase->setWindowTitle(QApplication::translate("QAjMainWindowBase", "MainWindow", 0, QApplication::UnicodeUTF8));
    actionConfigure->setText(QApplication::translate("QAjMainWindowBase", "Configure", 0, QApplication::UnicodeUTF8));
    actionConfigure->setShortcut(QApplication::translate("QAjMainWindowBase", "Ctrl+O", 0, QApplication::UnicodeUTF8));
    actionNet_Info->setText(QApplication::translate("QAjMainWindowBase", "Net Info", 0, QApplication::UnicodeUTF8));
    actionNet_Info->setShortcut(QApplication::translate("QAjMainWindowBase", "Ctrl+N", 0, QApplication::UnicodeUTF8));
    actionOpen_Aj_Link_List->setText(QApplication::translate("QAjMainWindowBase", "Open Aj Link List", 0, QApplication::UnicodeUTF8));
    actionExit_Core->setText(QApplication::translate("QAjMainWindowBase", "Exit Core", 0, QApplication::UnicodeUTF8));
    actionExit_Core->setShortcut(QApplication::translate("QAjMainWindowBase", "Ctrl+E", 0, QApplication::UnicodeUTF8));
    actionQuit_GUI->setText(QApplication::translate("QAjMainWindowBase", "Quit GUI", 0, QApplication::UnicodeUTF8));
    actionQuit_GUI->setShortcut(QApplication::translate("QAjMainWindowBase", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
    actionAbout->setText(QApplication::translate("QAjMainWindowBase", "About", 0, QApplication::UnicodeUTF8));
    actionAbout->setShortcut(QApplication::translate("QAjMainWindowBase", "F1", 0, QApplication::UnicodeUTF8));
    actionAbout_Qt->setText(QApplication::translate("QAjMainWindowBase", "About Qt", 0, QApplication::UnicodeUTF8));
    actionAdjust_Columns->setText(QApplication::translate("QAjMainWindowBase", "Adjust Column", 0, QApplication::UnicodeUTF8));
    actionProcess_Link_From_Clipboard->setText(QApplication::translate("QAjMainWindowBase", "Process Link From Clipboard", 0, QApplication::UnicodeUTF8));
    actionPause->setText(QApplication::translate("QAjMainWindowBase", "Pause", 0, QApplication::UnicodeUTF8));
    actionResume->setText(QApplication::translate("QAjMainWindowBase", "Resume", 0, QApplication::UnicodeUTF8));
    actionCancel->setText(QApplication::translate("QAjMainWindowBase", "Cancel", 0, QApplication::UnicodeUTF8));
    actionShow_Part_List->setText(QApplication::translate("QAjMainWindowBase", "Show Part List Dialog", 0, QApplication::UnicodeUTF8));
    actionRename->setText(QApplication::translate("QAjMainWindowBase", "Rename", 0, QApplication::UnicodeUTF8));
    actionRename_By_Clipboard->setText(QApplication::translate("QAjMainWindowBase", "Rename By Clipboard", 0, QApplication::UnicodeUTF8));
    actionOpen->setText(QApplication::translate("QAjMainWindowBase", "Open", 0, QApplication::UnicodeUTF8));
    actionCopy_Link->setText(QApplication::translate("QAjMainWindowBase", "Copy Link", 0, QApplication::UnicodeUTF8));
    actionRemove_Finished->setText(QApplication::translate("QAjMainWindowBase", "Remove Finished", 0, QApplication::UnicodeUTF8));
    actionCreate_Link_List->setText(QApplication::translate("QAjMainWindowBase", "Create Link List", 0, QApplication::UnicodeUTF8));
    actionHide_Paused->setText(QApplication::translate("QAjMainWindowBase", "Hide Paused", 0, QApplication::UnicodeUTF8));
    actionMaximal_Power->setText(QApplication::translate("QAjMainWindowBase", "Maximal Power", 0, QApplication::UnicodeUTF8));
    actionHide_Queued->setText(QApplication::translate("QAjMainWindowBase", "Hide Queued", 0, QApplication::UnicodeUTF8));
    actionDownload->setText(QApplication::translate("QAjMainWindowBase", "download", 0, QApplication::UnicodeUTF8));
    actionCancel_Search->setText(QApplication::translate("QAjMainWindowBase", "Cancel", 0, QApplication::UnicodeUTF8));
    actionCopy_Link_Search->setText(QApplication::translate("QAjMainWindowBase", "Copy Link", 0, QApplication::UnicodeUTF8));
    actionCreate_Link_List_Search->setText(QApplication::translate("QAjMainWindowBase", "Create Link List", 0, QApplication::UnicodeUTF8));
    actionConnect_Server->setText(QApplication::translate("QAjMainWindowBase", "Connect", 0, QApplication::UnicodeUTF8));
    actionRemove_Server->setText(QApplication::translate("QAjMainWindowBase", "Remove", 0, QApplication::UnicodeUTF8));
    actionSearch_Server->setText(QApplication::translate("QAjMainWindowBase", "Search", 0, QApplication::UnicodeUTF8));
    actionShow_Welcome_Message->setText(QApplication::translate("QAjMainWindowBase", "Show Welcome Message", 0, QApplication::UnicodeUTF8));
    actionAdd_Share->setText(QApplication::translate("QAjMainWindowBase", "Add", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    actionAdd_Share->setToolTip(QApplication::translate("QAjMainWindowBase", "Add New Share Folder", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    actionRemove_Share->setText(QApplication::translate("QAjMainWindowBase", "Remove", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    actionRemove_Share->setToolTip(QApplication::translate("QAjMainWindowBase", "Remove Share Folder", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    actionReload_Share->setText(QApplication::translate("QAjMainWindowBase", "Reload", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    actionReload_Share->setToolTip(QApplication::translate("QAjMainWindowBase", "Reload Shares From The Core", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    actionCommit_Share->setText(QApplication::translate("QAjMainWindowBase", "Commit", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    actionCommit_Share->setToolTip(QApplication::translate("QAjMainWindowBase", "Commit Changes And Start Share Checking", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    actionCopy_Link_Share->setText(QApplication::translate("QAjMainWindowBase", "Copy Link", 0, QApplication::UnicodeUTF8));
    actionCreate_Link_List_Share->setText(QApplication::translate("QAjMainWindowBase", "Create Link List", 0, QApplication::UnicodeUTF8));
    actionOpen_Incoming->setText(QApplication::translate("QAjMainWindowBase", "Open", 0, QApplication::UnicodeUTF8));
    actionCopy_Incoming->setText(QApplication::translate("QAjMainWindowBase", "Copy", 0, QApplication::UnicodeUTF8));
    actionDelete_Incoming->setText(QApplication::translate("QAjMainWindowBase", "Delete", 0, QApplication::UnicodeUTF8));
    actionReload_Incoming->setText(QApplication::translate("QAjMainWindowBase", "Reload", 0, QApplication::UnicodeUTF8));
    actionShow_Part_List_Dock->setText(QApplication::translate("QAjMainWindowBase", "Show Part List Dock", 0, QApplication::UnicodeUTF8));
    actionShow_Part_List_Dock->setIconText(QApplication::translate("QAjMainWindowBase", "Show Part List Dock", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    actionShow_Part_List_Dock->setToolTip(QApplication::translate("QAjMainWindowBase", "Show Part List Dock Widget", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    downloadsTreeWidget->headerItem()->setText(0, QApplication::translate("QAjMainWindowBase", "Filename", 0, QApplication::UnicodeUTF8));
    downloadsTreeWidget->headerItem()->setText(1, QApplication::translate("QAjMainWindowBase", "Sources", 0, QApplication::UnicodeUTF8));
    downloadsTreeWidget->headerItem()->setText(2, QApplication::translate("QAjMainWindowBase", "Speed", 0, QApplication::UnicodeUTF8));
    downloadsTreeWidget->headerItem()->setText(3, QApplication::translate("QAjMainWindowBase", "Status", 0, QApplication::UnicodeUTF8));
    downloadsTreeWidget->headerItem()->setText(4, QApplication::translate("QAjMainWindowBase", "Finished", 0, QApplication::UnicodeUTF8));
    downloadsTreeWidget->headerItem()->setText(5, QApplication::translate("QAjMainWindowBase", "Power", 0, QApplication::UnicodeUTF8));
    downloadsTreeWidget->headerItem()->setText(6, QApplication::translate("QAjMainWindowBase", "Size", 0, QApplication::UnicodeUTF8));
    downloadsTreeWidget->headerItem()->setText(7, QApplication::translate("QAjMainWindowBase", "Finished", 0, QApplication::UnicodeUTF8));
    downloadsTreeWidget->headerItem()->setText(8, QApplication::translate("QAjMainWindowBase", "Remaining", 0, QApplication::UnicodeUTF8));
    downloadsTreeWidget->headerItem()->setText(9, QApplication::translate("QAjMainWindowBase", "Eta", 0, QApplication::UnicodeUTF8));
    downloadsTreeWidget->headerItem()->setText(10, QApplication::translate("QAjMainWindowBase", "Not Seen", 0, QApplication::UnicodeUTF8));
    partListDock->setWindowTitle(QApplication::translate("QAjMainWindowBase", "Part List", 0, QApplication::UnicodeUTF8));
    ajTab->setTabText(ajTab->indexOf(downloads), QApplication::translate("QAjMainWindowBase", "Downloads", 0, QApplication::UnicodeUTF8));
    uploadsTreeWidget->headerItem()->setText(0, QApplication::translate("QAjMainWindowBase", "Filename", 0, QApplication::UnicodeUTF8));
    uploadsTreeWidget->headerItem()->setText(1, QApplication::translate("QAjMainWindowBase", "Nick", 0, QApplication::UnicodeUTF8));
    uploadsTreeWidget->headerItem()->setText(2, QApplication::translate("QAjMainWindowBase", "Speed", 0, QApplication::UnicodeUTF8));
    uploadsTreeWidget->headerItem()->setText(3, QApplication::translate("QAjMainWindowBase", "Status", 0, QApplication::UnicodeUTF8));
    uploadsTreeWidget->headerItem()->setText(4, QApplication::translate("QAjMainWindowBase", "Priority", 0, QApplication::UnicodeUTF8));
    uploadsTreeWidget->headerItem()->setText(5, QApplication::translate("QAjMainWindowBase", "OS", 0, QApplication::UnicodeUTF8));
    uploadsTreeWidget->headerItem()->setText(6, QApplication::translate("QAjMainWindowBase", "Direct State", 0, QApplication::UnicodeUTF8));
    uploadsTreeWidget->headerItem()->setText(7, QApplication::translate("QAjMainWindowBase", "Core", 0, QApplication::UnicodeUTF8));
    ajTab->setTabText(ajTab->indexOf(uploads), QApplication::translate("QAjMainWindowBase", "Uploads", 0, QApplication::UnicodeUTF8));
    searchsTreeWidget->headerItem()->setText(0, QApplication::translate("QAjMainWindowBase", "Search", 0, QApplication::UnicodeUTF8));
    searchsTreeWidget->headerItem()->setText(1, QApplication::translate("QAjMainWindowBase", "Size", 0, QApplication::UnicodeUTF8));
    searchsTreeWidget->headerItem()->setText(2, QApplication::translate("QAjMainWindowBase", "Hits", 0, QApplication::UnicodeUTF8));
    ajTab->setTabText(ajTab->indexOf(search), QApplication::translate("QAjMainWindowBase", "Search", 0, QApplication::UnicodeUTF8));
    serverTreeWidget->headerItem()->setText(0, QApplication::translate("QAjMainWindowBase", "Name", 0, QApplication::UnicodeUTF8));
    serverTreeWidget->headerItem()->setText(1, QApplication::translate("QAjMainWindowBase", "Host", 0, QApplication::UnicodeUTF8));
    serverTreeWidget->headerItem()->setText(2, QApplication::translate("QAjMainWindowBase", "Port", 0, QApplication::UnicodeUTF8));
    serverTreeWidget->headerItem()->setText(3, QApplication::translate("QAjMainWindowBase", "Last Seen", 0, QApplication::UnicodeUTF8));
    serverTreeWidget->headerItem()->setText(4, QApplication::translate("QAjMainWindowBase", "Tests", 0, QApplication::UnicodeUTF8));
    welcomeDock->setWindowTitle(QApplication::translate("QAjMainWindowBase", "Server Welcome Message", 0, QApplication::UnicodeUTF8));
    ajTab->setTabText(ajTab->indexOf(server), QApplication::translate("QAjMainWindowBase", "Server", 0, QApplication::UnicodeUTF8));
    sharesTreeWidget->headerItem()->setText(0, QApplication::translate("QAjMainWindowBase", "Path", 0, QApplication::UnicodeUTF8));
    sharesTreeWidget->headerItem()->setText(1, QApplication::translate("QAjMainWindowBase", "Size", 0, QApplication::UnicodeUTF8));
    sharesTreeWidget->headerItem()->setText(2, QApplication::translate("QAjMainWindowBase", "Priority", 0, QApplication::UnicodeUTF8));
    ajTab->setTabText(ajTab->indexOf(shares), QApplication::translate("QAjMainWindowBase", "Shares", 0, QApplication::UnicodeUTF8));
    incomingTreeWidget->headerItem()->setText(0, QApplication::translate("QAjMainWindowBase", "Filename", 0, QApplication::UnicodeUTF8));
    incomingTreeWidget->headerItem()->setText(1, QApplication::translate("QAjMainWindowBase", "Size", 0, QApplication::UnicodeUTF8));
    incomingTreeWidget->headerItem()->setText(2, QApplication::translate("QAjMainWindowBase", "Last Modified", 0, QApplication::UnicodeUTF8));
    ajTab->setTabText(ajTab->indexOf(incoming), QApplication::translate("QAjMainWindowBase", "Incoming", 0, QApplication::UnicodeUTF8));
    menuAppleJuice->setTitle(QApplication::translate("QAjMainWindowBase", "&AppleJuice", 0, QApplication::UnicodeUTF8));
    menuHelp->setTitle(QApplication::translate("QAjMainWindowBase", "&Help", 0, QApplication::UnicodeUTF8));
    menuDownload->setTitle(QApplication::translate("QAjMainWindowBase", "Download", 0, QApplication::UnicodeUTF8));
    menuUpload->setTitle(QApplication::translate("QAjMainWindowBase", "Upload", 0, QApplication::UnicodeUTF8));
    menuSearch->setTitle(QApplication::translate("QAjMainWindowBase", "Search", 0, QApplication::UnicodeUTF8));
    menuServer->setTitle(QApplication::translate("QAjMainWindowBase", "Server", 0, QApplication::UnicodeUTF8));
    menuShare->setTitle(QApplication::translate("QAjMainWindowBase", "Share", 0, QApplication::UnicodeUTF8));
    menuIncoming->setTitle(QApplication::translate("QAjMainWindowBase", "Incoming", 0, QApplication::UnicodeUTF8));
    ajTools->setWindowTitle(QApplication::translate("QAjMainWindowBase", "toolBar", 0, QApplication::UnicodeUTF8));
    ajLinks->setWindowTitle(QApplication::translate("QAjMainWindowBase", "toolBar", 0, QApplication::UnicodeUTF8));
    downloadToolBar->setWindowTitle(QApplication::translate("QAjMainWindowBase", "toolBar", 0, QApplication::UnicodeUTF8));
    uploadToolBar->setWindowTitle(QApplication::translate("QAjMainWindowBase", "toolBar", 0, QApplication::UnicodeUTF8));
    searchToolBar->setWindowTitle(QApplication::translate("QAjMainWindowBase", "toolBar", 0, QApplication::UnicodeUTF8));
    serverToolBar->setWindowTitle(QApplication::translate("QAjMainWindowBase", "toolBar", 0, QApplication::UnicodeUTF8));
    shareToolBar->setWindowTitle(QApplication::translate("QAjMainWindowBase", "toolBar", 0, QApplication::UnicodeUTF8));
    incomingToolBar->setWindowTitle(QApplication::translate("QAjMainWindowBase", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QAjMainWindowBase: public Ui_QAjMainWindowBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QAJMAINWINDOWBASE_H
