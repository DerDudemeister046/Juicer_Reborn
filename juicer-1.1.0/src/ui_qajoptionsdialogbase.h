/********************************************************************************
** Form generated from reading ui file 'qajoptionsdialogbase.ui'
**
** Created: Sun Jan 18 14:32:36 2009
**      by: Qt User Interface Compiler version 4.4.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QAJOPTIONSDIALOGBASE_H
#define UI_QAJOPTIONSDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFontComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QAjOptionsDialogBase
{
public:
    QGridLayout *gridLayout;
    QListWidget *listWidget;
    QStackedWidget *stackedWidget;
    QWidget *Core;
    QVBoxLayout *verticalLayout;
    QLabel *label_24;
    QFrame *line;
    QFormLayout *formLayout;
    QLabel *nickLabel;
    QLineEdit *nickEdit;
    QLabel *passwordLabel;
    QLineEdit *passwordEdit;
    QLabel *retypeLabel;
    QLineEdit *retypeEdit;
    QLabel *coreLabel;
    QLineEdit *coreEdit;
    QLabel *xmlLabel;
    QLineEdit *xmlEdit;
    QLabel *incomingLabel;
    QHBoxLayout *horizontalLayout;
    QLineEdit *incomingEdit;
    QToolButton *incomingButton;
    QLabel *tempLabel;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *tempEdit;
    QToolButton *tempButton;
    QLabel *tcpLabel;
    QLineEdit *tcpEdit;
    QCheckBox *autoConnect;
    QCheckBox *savePassword;
    QSpacerItem *verticalSpacer_2;
    QWidget *Limits;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_25;
    QFrame *line_2;
    QFormLayout *formLayout_2;
    QLabel *downLabel;
    QSpinBox *downSpin;
    QLabel *upLabel;
    QSpinBox *upSpin;
    QLabel *slotLabel;
    QSpinBox *slotSpin;
    QLabel *sourcesLabel;
    QSpinBox *sourcesSpin;
    QLabel *connectionsLabel;
    QSpinBox *connectionsSpin;
    QLabel *newLabel;
    QSpinBox *newSpin;
    QSpacerItem *verticalSpacer_4;
    QWidget *Appearance;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_26;
    QFrame *line_3;
    QCheckBox *showSplash;
    QCheckBox *trayCheckBox;
    QCheckBox *altRowsCheckBox;
    QFormLayout *formLayout_4;
    QLabel *label_30;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *languageComboBox;
    QSpacerItem *horizontalSpacer;
    QLabel *label_32;
    QHBoxLayout *horizontalLayout_4;
    QFontComboBox *fontComboBox;
    QComboBox *fontSizeComboBox;
    QFormLayout *formLayout_3;
    QLabel *label_31;
    QListWidget *statusbarList;
    QLabel *label_33;
    QListWidget *downloadTabList;
    QWidget *Behaviour;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_27;
    QFrame *line_4;
    QFormLayout *formLayout_5;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_5;
    QSpinBox *refreshSpin;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_8;
    QLineEdit *serverEdit;
    QCheckBox *fetchServersCheckBox;
    QGroupBox *handlerGroupBox;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_10;
    QCheckBox *handlerCheckCheckBox;
    QCheckBox *handlerDefaultCheckBox;
    QPushButton *handlerPushButton;
    QSpacerItem *verticalSpacer_3;
    QWidget *Launching;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_28;
    QFrame *line_5;
    QFormLayout *formLayout_8;
    QLabel *label_22;
    QHBoxLayout *horizontalLayout_6;
    QComboBox *launchCombo;
    QToolButton *launcherButton;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *sameComputerRadio;
    QRadioButton *specificRadio;
    QLabel *incomingSpecificLabel;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *incomingSpecificEdit;
    QToolButton *incomingSpecificButton;
    QLabel *tempSpecificLabel;
    QHBoxLayout *horizontalLayout_9;
    QLineEdit *tempSpecificEdit;
    QToolButton *tempSpecificButton;
    QRadioButton *ftpRadio;
    QPushButton *jumpFtpButton;
    QSpacerItem *verticalSpacer_5;
    QWidget *Ftp;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_29;
    QFrame *line_6;
    QFormLayout *formLayout_6;
    QLabel *label_17;
    QLineEdit *ftpServerEdit;
    QLabel *label_18;
    QLineEdit *ftpPortEdit;
    QLabel *label_19;
    QLineEdit *ftpUserEdit;
    QLabel *label_20;
    QLineEdit *ftpPasswordEdit;
    QLabel *label_21;
    QLineEdit *ftpInDirEdit;
    QLabel *label_23;
    QLineEdit *ftpTmpDirEdit;
    QHBoxLayout *horizontalLayout_7;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_8;
    QRadioButton *ftpPassiveRadioButton;
    QRadioButton *ftpActiveRadioButton;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_7;
    QRadioButton *ftpFullRadioButton;
    QFormLayout *formLayout_7;
    QRadioButton *ftpMbRadioButton;
    QSpinBox *ftpMbSpinBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QAjOptionsDialogBase)
    {
    if (QAjOptionsDialogBase->objectName().isEmpty())
        QAjOptionsDialogBase->setObjectName(QString::fromUtf8("QAjOptionsDialogBase"));
    QAjOptionsDialogBase->resize(522, 445);
    QIcon icon;
    icon.addPixmap(QPixmap(QString::fromUtf8(":/juicer.png")), QIcon::Normal, QIcon::Off);
    QAjOptionsDialogBase->setWindowIcon(icon);
    gridLayout = new QGridLayout(QAjOptionsDialogBase);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    listWidget = new QListWidget(QAjOptionsDialogBase);
    listWidget->setObjectName(QString::fromUtf8("listWidget"));
    QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
    listWidget->setSizePolicy(sizePolicy);
    listWidget->setMinimumSize(QSize(131, 0));
    listWidget->setMaximumSize(QSize(131, 16777215));
    listWidget->setAutoScroll(false);
    listWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

    gridLayout->addWidget(listWidget, 0, 0, 1, 1);

    stackedWidget = new QStackedWidget(QAjOptionsDialogBase);
    stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
    QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
    sizePolicy1.setHorizontalStretch(1);
    sizePolicy1.setVerticalStretch(1);
    sizePolicy1.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
    stackedWidget->setSizePolicy(sizePolicy1);
    stackedWidget->setFrameShape(QFrame::NoFrame);
    Core = new QWidget();
    Core->setObjectName(QString::fromUtf8("Core"));
    verticalLayout = new QVBoxLayout(Core);
    verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
    label_24 = new QLabel(Core);
    label_24->setObjectName(QString::fromUtf8("label_24"));
    QFont font;
    font.setPointSize(14);
    label_24->setFont(font);

    verticalLayout->addWidget(label_24);

    line = new QFrame(Core);
    line->setObjectName(QString::fromUtf8("line"));
    line->setFrameShape(QFrame::HLine);
    line->setFrameShadow(QFrame::Sunken);

    verticalLayout->addWidget(line);

    formLayout = new QFormLayout();
    formLayout->setObjectName(QString::fromUtf8("formLayout"));
    nickLabel = new QLabel(Core);
    nickLabel->setObjectName(QString::fromUtf8("nickLabel"));

    formLayout->setWidget(0, QFormLayout::LabelRole, nickLabel);

    nickEdit = new QLineEdit(Core);
    nickEdit->setObjectName(QString::fromUtf8("nickEdit"));

    formLayout->setWidget(0, QFormLayout::FieldRole, nickEdit);

    passwordLabel = new QLabel(Core);
    passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));

    formLayout->setWidget(1, QFormLayout::LabelRole, passwordLabel);

    passwordEdit = new QLineEdit(Core);
    passwordEdit->setObjectName(QString::fromUtf8("passwordEdit"));
    passwordEdit->setEchoMode(QLineEdit::Password);

    formLayout->setWidget(1, QFormLayout::FieldRole, passwordEdit);

    retypeLabel = new QLabel(Core);
    retypeLabel->setObjectName(QString::fromUtf8("retypeLabel"));

    formLayout->setWidget(2, QFormLayout::LabelRole, retypeLabel);

    retypeEdit = new QLineEdit(Core);
    retypeEdit->setObjectName(QString::fromUtf8("retypeEdit"));
    retypeEdit->setEchoMode(QLineEdit::Password);

    formLayout->setWidget(2, QFormLayout::FieldRole, retypeEdit);

    coreLabel = new QLabel(Core);
    coreLabel->setObjectName(QString::fromUtf8("coreLabel"));

    formLayout->setWidget(3, QFormLayout::LabelRole, coreLabel);

    coreEdit = new QLineEdit(Core);
    coreEdit->setObjectName(QString::fromUtf8("coreEdit"));

    formLayout->setWidget(3, QFormLayout::FieldRole, coreEdit);

    xmlLabel = new QLabel(Core);
    xmlLabel->setObjectName(QString::fromUtf8("xmlLabel"));

    formLayout->setWidget(4, QFormLayout::LabelRole, xmlLabel);

    xmlEdit = new QLineEdit(Core);
    xmlEdit->setObjectName(QString::fromUtf8("xmlEdit"));

    formLayout->setWidget(4, QFormLayout::FieldRole, xmlEdit);

    incomingLabel = new QLabel(Core);
    incomingLabel->setObjectName(QString::fromUtf8("incomingLabel"));

    formLayout->setWidget(5, QFormLayout::LabelRole, incomingLabel);

    horizontalLayout = new QHBoxLayout();
    horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
    incomingEdit = new QLineEdit(Core);
    incomingEdit->setObjectName(QString::fromUtf8("incomingEdit"));

    horizontalLayout->addWidget(incomingEdit);

    incomingButton = new QToolButton(Core);
    incomingButton->setObjectName(QString::fromUtf8("incomingButton"));

    horizontalLayout->addWidget(incomingButton);


    formLayout->setLayout(5, QFormLayout::FieldRole, horizontalLayout);

    tempLabel = new QLabel(Core);
    tempLabel->setObjectName(QString::fromUtf8("tempLabel"));

    formLayout->setWidget(6, QFormLayout::LabelRole, tempLabel);

    horizontalLayout_2 = new QHBoxLayout();
    horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
    tempEdit = new QLineEdit(Core);
    tempEdit->setObjectName(QString::fromUtf8("tempEdit"));

    horizontalLayout_2->addWidget(tempEdit);

    tempButton = new QToolButton(Core);
    tempButton->setObjectName(QString::fromUtf8("tempButton"));

    horizontalLayout_2->addWidget(tempButton);


    formLayout->setLayout(6, QFormLayout::FieldRole, horizontalLayout_2);

    tcpLabel = new QLabel(Core);
    tcpLabel->setObjectName(QString::fromUtf8("tcpLabel"));

    formLayout->setWidget(7, QFormLayout::LabelRole, tcpLabel);

    tcpEdit = new QLineEdit(Core);
    tcpEdit->setObjectName(QString::fromUtf8("tcpEdit"));

    formLayout->setWidget(7, QFormLayout::FieldRole, tcpEdit);


    verticalLayout->addLayout(formLayout);

    autoConnect = new QCheckBox(Core);
    autoConnect->setObjectName(QString::fromUtf8("autoConnect"));

    verticalLayout->addWidget(autoConnect);

    savePassword = new QCheckBox(Core);
    savePassword->setObjectName(QString::fromUtf8("savePassword"));

    verticalLayout->addWidget(savePassword);

    verticalSpacer_2 = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

    verticalLayout->addItem(verticalSpacer_2);

    stackedWidget->addWidget(Core);
    Limits = new QWidget();
    Limits->setObjectName(QString::fromUtf8("Limits"));
    verticalLayout_2 = new QVBoxLayout(Limits);
    verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
    label_25 = new QLabel(Limits);
    label_25->setObjectName(QString::fromUtf8("label_25"));
    label_25->setFont(font);

    verticalLayout_2->addWidget(label_25);

    line_2 = new QFrame(Limits);
    line_2->setObjectName(QString::fromUtf8("line_2"));
    line_2->setFrameShape(QFrame::HLine);
    line_2->setFrameShadow(QFrame::Sunken);

    verticalLayout_2->addWidget(line_2);

    formLayout_2 = new QFormLayout();
    formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
    downLabel = new QLabel(Limits);
    downLabel->setObjectName(QString::fromUtf8("downLabel"));
    QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
    sizePolicy2.setHorizontalStretch(50);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(downLabel->sizePolicy().hasHeightForWidth());
    downLabel->setSizePolicy(sizePolicy2);

    formLayout_2->setWidget(0, QFormLayout::LabelRole, downLabel);

    downSpin = new QSpinBox(Limits);
    downSpin->setObjectName(QString::fromUtf8("downSpin"));
    QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
    sizePolicy3.setHorizontalStretch(1);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(downSpin->sizePolicy().hasHeightForWidth());
    downSpin->setSizePolicy(sizePolicy3);
    downSpin->setAlignment(Qt::AlignRight);
    downSpin->setMaximum(9999);

    formLayout_2->setWidget(0, QFormLayout::FieldRole, downSpin);

    upLabel = new QLabel(Limits);
    upLabel->setObjectName(QString::fromUtf8("upLabel"));
    sizePolicy2.setHeightForWidth(upLabel->sizePolicy().hasHeightForWidth());
    upLabel->setSizePolicy(sizePolicy2);

    formLayout_2->setWidget(1, QFormLayout::LabelRole, upLabel);

    upSpin = new QSpinBox(Limits);
    upSpin->setObjectName(QString::fromUtf8("upSpin"));
    sizePolicy3.setHeightForWidth(upSpin->sizePolicy().hasHeightForWidth());
    upSpin->setSizePolicy(sizePolicy3);
    upSpin->setAlignment(Qt::AlignRight);
    upSpin->setMaximum(9999);

    formLayout_2->setWidget(1, QFormLayout::FieldRole, upSpin);

    slotLabel = new QLabel(Limits);
    slotLabel->setObjectName(QString::fromUtf8("slotLabel"));
    sizePolicy2.setHeightForWidth(slotLabel->sizePolicy().hasHeightForWidth());
    slotLabel->setSizePolicy(sizePolicy2);

    formLayout_2->setWidget(2, QFormLayout::LabelRole, slotLabel);

    slotSpin = new QSpinBox(Limits);
    slotSpin->setObjectName(QString::fromUtf8("slotSpin"));
    sizePolicy3.setHeightForWidth(slotSpin->sizePolicy().hasHeightForWidth());
    slotSpin->setSizePolicy(sizePolicy3);
    slotSpin->setAlignment(Qt::AlignRight);
    slotSpin->setMaximum(9999);

    formLayout_2->setWidget(2, QFormLayout::FieldRole, slotSpin);

    sourcesLabel = new QLabel(Limits);
    sourcesLabel->setObjectName(QString::fromUtf8("sourcesLabel"));
    sizePolicy2.setHeightForWidth(sourcesLabel->sizePolicy().hasHeightForWidth());
    sourcesLabel->setSizePolicy(sizePolicy2);

    formLayout_2->setWidget(3, QFormLayout::LabelRole, sourcesLabel);

    sourcesSpin = new QSpinBox(Limits);
    sourcesSpin->setObjectName(QString::fromUtf8("sourcesSpin"));
    sizePolicy3.setHeightForWidth(sourcesSpin->sizePolicy().hasHeightForWidth());
    sourcesSpin->setSizePolicy(sizePolicy3);
    sourcesSpin->setAlignment(Qt::AlignRight);
    sourcesSpin->setMaximum(9999);

    formLayout_2->setWidget(3, QFormLayout::FieldRole, sourcesSpin);

    connectionsLabel = new QLabel(Limits);
    connectionsLabel->setObjectName(QString::fromUtf8("connectionsLabel"));
    sizePolicy2.setHeightForWidth(connectionsLabel->sizePolicy().hasHeightForWidth());
    connectionsLabel->setSizePolicy(sizePolicy2);

    formLayout_2->setWidget(4, QFormLayout::LabelRole, connectionsLabel);

    connectionsSpin = new QSpinBox(Limits);
    connectionsSpin->setObjectName(QString::fromUtf8("connectionsSpin"));
    sizePolicy3.setHeightForWidth(connectionsSpin->sizePolicy().hasHeightForWidth());
    connectionsSpin->setSizePolicy(sizePolicy3);
    connectionsSpin->setAlignment(Qt::AlignRight);
    connectionsSpin->setMaximum(9999);

    formLayout_2->setWidget(4, QFormLayout::FieldRole, connectionsSpin);

    newLabel = new QLabel(Limits);
    newLabel->setObjectName(QString::fromUtf8("newLabel"));
    sizePolicy2.setHeightForWidth(newLabel->sizePolicy().hasHeightForWidth());
    newLabel->setSizePolicy(sizePolicy2);

    formLayout_2->setWidget(5, QFormLayout::LabelRole, newLabel);

    newSpin = new QSpinBox(Limits);
    newSpin->setObjectName(QString::fromUtf8("newSpin"));
    sizePolicy3.setHeightForWidth(newSpin->sizePolicy().hasHeightForWidth());
    newSpin->setSizePolicy(sizePolicy3);
    newSpin->setAlignment(Qt::AlignRight);
    newSpin->setMaximum(9999);

    formLayout_2->setWidget(5, QFormLayout::FieldRole, newSpin);


    verticalLayout_2->addLayout(formLayout_2);

    verticalSpacer_4 = new QSpacerItem(20, 152, QSizePolicy::Minimum, QSizePolicy::Expanding);

    verticalLayout_2->addItem(verticalSpacer_4);

    stackedWidget->addWidget(Limits);
    Appearance = new QWidget();
    Appearance->setObjectName(QString::fromUtf8("Appearance"));
    verticalLayout_3 = new QVBoxLayout(Appearance);
    verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
    label_26 = new QLabel(Appearance);
    label_26->setObjectName(QString::fromUtf8("label_26"));
    label_26->setFont(font);

    verticalLayout_3->addWidget(label_26);

    line_3 = new QFrame(Appearance);
    line_3->setObjectName(QString::fromUtf8("line_3"));
    line_3->setFrameShape(QFrame::HLine);
    line_3->setFrameShadow(QFrame::Sunken);

    verticalLayout_3->addWidget(line_3);

    showSplash = new QCheckBox(Appearance);
    showSplash->setObjectName(QString::fromUtf8("showSplash"));

    verticalLayout_3->addWidget(showSplash);

    trayCheckBox = new QCheckBox(Appearance);
    trayCheckBox->setObjectName(QString::fromUtf8("trayCheckBox"));

    verticalLayout_3->addWidget(trayCheckBox);

    altRowsCheckBox = new QCheckBox(Appearance);
    altRowsCheckBox->setObjectName(QString::fromUtf8("altRowsCheckBox"));

    verticalLayout_3->addWidget(altRowsCheckBox);

    formLayout_4 = new QFormLayout();
    formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
    label_30 = new QLabel(Appearance);
    label_30->setObjectName(QString::fromUtf8("label_30"));
    QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
    sizePolicy4.setHorizontalStretch(0);
    sizePolicy4.setVerticalStretch(0);
    sizePolicy4.setHeightForWidth(label_30->sizePolicy().hasHeightForWidth());
    label_30->setSizePolicy(sizePolicy4);
    label_30->setMaximumSize(QSize(66, 16777215));

    formLayout_4->setWidget(0, QFormLayout::LabelRole, label_30);

    horizontalLayout_3 = new QHBoxLayout();
    horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
    languageComboBox = new QComboBox(Appearance);
    languageComboBox->setObjectName(QString::fromUtf8("languageComboBox"));
    QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Fixed);
    sizePolicy5.setHorizontalStretch(0);
    sizePolicy5.setVerticalStretch(0);
    sizePolicy5.setHeightForWidth(languageComboBox->sizePolicy().hasHeightForWidth());
    languageComboBox->setSizePolicy(sizePolicy5);

    horizontalLayout_3->addWidget(languageComboBox);

    horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    horizontalLayout_3->addItem(horizontalSpacer);


    formLayout_4->setLayout(0, QFormLayout::FieldRole, horizontalLayout_3);

    label_32 = new QLabel(Appearance);
    label_32->setObjectName(QString::fromUtf8("label_32"));
    sizePolicy4.setHeightForWidth(label_32->sizePolicy().hasHeightForWidth());
    label_32->setSizePolicy(sizePolicy4);

    formLayout_4->setWidget(1, QFormLayout::LabelRole, label_32);

    horizontalLayout_4 = new QHBoxLayout();
    horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
    fontComboBox = new QFontComboBox(Appearance);
    fontComboBox->setObjectName(QString::fromUtf8("fontComboBox"));
    sizePolicy5.setHeightForWidth(fontComboBox->sizePolicy().hasHeightForWidth());
    fontComboBox->setSizePolicy(sizePolicy5);

    horizontalLayout_4->addWidget(fontComboBox);

    fontSizeComboBox = new QComboBox(Appearance);
    fontSizeComboBox->setObjectName(QString::fromUtf8("fontSizeComboBox"));

    horizontalLayout_4->addWidget(fontSizeComboBox);


    formLayout_4->setLayout(1, QFormLayout::FieldRole, horizontalLayout_4);


    verticalLayout_3->addLayout(formLayout_4);

    formLayout_3 = new QFormLayout();
    formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
    label_31 = new QLabel(Appearance);
    label_31->setObjectName(QString::fromUtf8("label_31"));
    QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Preferred);
    sizePolicy6.setHorizontalStretch(0);
    sizePolicy6.setVerticalStretch(0);
    sizePolicy6.setHeightForWidth(label_31->sizePolicy().hasHeightForWidth());
    label_31->setSizePolicy(sizePolicy6);
    label_31->setSizeIncrement(QSize(0, 0));
    label_31->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

    formLayout_3->setWidget(0, QFormLayout::LabelRole, label_31);

    statusbarList = new QListWidget(Appearance);
    new QListWidgetItem(statusbarList);
    new QListWidgetItem(statusbarList);
    new QListWidgetItem(statusbarList);
    new QListWidgetItem(statusbarList);
    new QListWidgetItem(statusbarList);
    new QListWidgetItem(statusbarList);
    new QListWidgetItem(statusbarList);
    statusbarList->setObjectName(QString::fromUtf8("statusbarList"));
    QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Fixed);
    sizePolicy7.setHorizontalStretch(100);
    sizePolicy7.setVerticalStretch(0);
    sizePolicy7.setHeightForWidth(statusbarList->sizePolicy().hasHeightForWidth());
    statusbarList->setSizePolicy(sizePolicy7);
    statusbarList->setMinimumSize(QSize(143, 100));
    statusbarList->setMaximumSize(QSize(9999, 180));
    statusbarList->setSizeIncrement(QSize(10, 0));
    statusbarList->setSelectionMode(QAbstractItemView::MultiSelection);

    formLayout_3->setWidget(0, QFormLayout::FieldRole, statusbarList);

    label_33 = new QLabel(Appearance);
    label_33->setObjectName(QString::fromUtf8("label_33"));
    label_33->setEnabled(false);
    QSizePolicy sizePolicy8(QSizePolicy::Minimum, QSizePolicy::Preferred);
    sizePolicy8.setHorizontalStretch(1);
    sizePolicy8.setVerticalStretch(0);
    sizePolicy8.setHeightForWidth(label_33->sizePolicy().hasHeightForWidth());
    label_33->setSizePolicy(sizePolicy8);
    label_33->setSizeIncrement(QSize(1, 0));
    label_33->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

    formLayout_3->setWidget(1, QFormLayout::LabelRole, label_33);

    downloadTabList = new QListWidget(Appearance);
    new QListWidgetItem(downloadTabList);
    new QListWidgetItem(downloadTabList);
    new QListWidgetItem(downloadTabList);
    new QListWidgetItem(downloadTabList);
    new QListWidgetItem(downloadTabList);
    new QListWidgetItem(downloadTabList);
    new QListWidgetItem(downloadTabList);
    new QListWidgetItem(downloadTabList);
    new QListWidgetItem(downloadTabList);
    downloadTabList->setObjectName(QString::fromUtf8("downloadTabList"));
    downloadTabList->setEnabled(false);
    QSizePolicy sizePolicy9(QSizePolicy::Expanding, QSizePolicy::Fixed);
    sizePolicy9.setHorizontalStretch(20);
    sizePolicy9.setVerticalStretch(0);
    sizePolicy9.setHeightForWidth(downloadTabList->sizePolicy().hasHeightForWidth());
    downloadTabList->setSizePolicy(sizePolicy9);
    downloadTabList->setMinimumSize(QSize(143, 100));
    downloadTabList->setMaximumSize(QSize(9999, 180));
    downloadTabList->setSizeIncrement(QSize(10, 0));
    downloadTabList->setSelectionMode(QAbstractItemView::MultiSelection);

    formLayout_3->setWidget(1, QFormLayout::FieldRole, downloadTabList);


    verticalLayout_3->addLayout(formLayout_3);

    stackedWidget->addWidget(Appearance);
    Behaviour = new QWidget();
    Behaviour->setObjectName(QString::fromUtf8("Behaviour"));
    verticalLayout_10 = new QVBoxLayout(Behaviour);
    verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
    label_27 = new QLabel(Behaviour);
    label_27->setObjectName(QString::fromUtf8("label_27"));
    label_27->setFont(font);

    verticalLayout_10->addWidget(label_27);

    line_4 = new QFrame(Behaviour);
    line_4->setObjectName(QString::fromUtf8("line_4"));
    line_4->setFrameShape(QFrame::HLine);
    line_4->setFrameShadow(QFrame::Sunken);

    verticalLayout_10->addWidget(line_4);

    formLayout_5 = new QFormLayout();
    formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
    label_9 = new QLabel(Behaviour);
    label_9->setObjectName(QString::fromUtf8("label_9"));

    formLayout_5->setWidget(0, QFormLayout::LabelRole, label_9);

    horizontalLayout_5 = new QHBoxLayout();
    horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
    refreshSpin = new QSpinBox(Behaviour);
    refreshSpin->setObjectName(QString::fromUtf8("refreshSpin"));
    refreshSpin->setMaximumSize(QSize(100, 16777215));
    refreshSpin->setMinimum(1);

    horizontalLayout_5->addWidget(refreshSpin);

    horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    horizontalLayout_5->addItem(horizontalSpacer_2);


    formLayout_5->setLayout(0, QFormLayout::FieldRole, horizontalLayout_5);

    label_8 = new QLabel(Behaviour);
    label_8->setObjectName(QString::fromUtf8("label_8"));

    formLayout_5->setWidget(1, QFormLayout::LabelRole, label_8);

    serverEdit = new QLineEdit(Behaviour);
    serverEdit->setObjectName(QString::fromUtf8("serverEdit"));

    formLayout_5->setWidget(1, QFormLayout::FieldRole, serverEdit);

    fetchServersCheckBox = new QCheckBox(Behaviour);
    fetchServersCheckBox->setObjectName(QString::fromUtf8("fetchServersCheckBox"));

    formLayout_5->setWidget(2, QFormLayout::FieldRole, fetchServersCheckBox);


    verticalLayout_10->addLayout(formLayout_5);

    handlerGroupBox = new QGroupBox(Behaviour);
    handlerGroupBox->setObjectName(QString::fromUtf8("handlerGroupBox"));
    verticalLayout_4 = new QVBoxLayout(handlerGroupBox);
    verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
    verticalLayout_4->setContentsMargins(-1, 4, -1, -1);
    horizontalLayout_10 = new QHBoxLayout();
    horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
    handlerCheckCheckBox = new QCheckBox(handlerGroupBox);
    handlerCheckCheckBox->setObjectName(QString::fromUtf8("handlerCheckCheckBox"));

    horizontalLayout_10->addWidget(handlerCheckCheckBox);

    handlerDefaultCheckBox = new QCheckBox(handlerGroupBox);
    handlerDefaultCheckBox->setObjectName(QString::fromUtf8("handlerDefaultCheckBox"));

    horizontalLayout_10->addWidget(handlerDefaultCheckBox);


    verticalLayout_4->addLayout(horizontalLayout_10);

    handlerPushButton = new QPushButton(handlerGroupBox);
    handlerPushButton->setObjectName(QString::fromUtf8("handlerPushButton"));

    verticalLayout_4->addWidget(handlerPushButton);


    verticalLayout_10->addWidget(handlerGroupBox);

    verticalSpacer_3 = new QSpacerItem(20, 255, QSizePolicy::Minimum, QSizePolicy::Expanding);

    verticalLayout_10->addItem(verticalSpacer_3);

    stackedWidget->addWidget(Behaviour);
    Launching = new QWidget();
    Launching->setObjectName(QString::fromUtf8("Launching"));
    verticalLayout_6 = new QVBoxLayout(Launching);
    verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
    label_28 = new QLabel(Launching);
    label_28->setObjectName(QString::fromUtf8("label_28"));
    label_28->setFont(font);

    verticalLayout_6->addWidget(label_28);

    line_5 = new QFrame(Launching);
    line_5->setObjectName(QString::fromUtf8("line_5"));
    line_5->setFrameShape(QFrame::HLine);
    line_5->setFrameShadow(QFrame::Sunken);

    verticalLayout_6->addWidget(line_5);

    formLayout_8 = new QFormLayout();
    formLayout_8->setObjectName(QString::fromUtf8("formLayout_8"));
    label_22 = new QLabel(Launching);
    label_22->setObjectName(QString::fromUtf8("label_22"));
    QSizePolicy sizePolicy10(QSizePolicy::Fixed, QSizePolicy::Fixed);
    sizePolicy10.setHorizontalStretch(0);
    sizePolicy10.setVerticalStretch(0);
    sizePolicy10.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
    label_22->setSizePolicy(sizePolicy10);

    formLayout_8->setWidget(0, QFormLayout::LabelRole, label_22);

    horizontalLayout_6 = new QHBoxLayout();
    horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
    launchCombo = new QComboBox(Launching);
    launchCombo->setObjectName(QString::fromUtf8("launchCombo"));
    launchCombo->setEditable(true);

    horizontalLayout_6->addWidget(launchCombo);

    launcherButton = new QToolButton(Launching);
    launcherButton->setObjectName(QString::fromUtf8("launcherButton"));

    horizontalLayout_6->addWidget(launcherButton);


    formLayout_8->setLayout(0, QFormLayout::FieldRole, horizontalLayout_6);


    verticalLayout_6->addLayout(formLayout_8);

    groupBox = new QGroupBox(Launching);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    QSizePolicy sizePolicy11(QSizePolicy::Expanding, QSizePolicy::Expanding);
    sizePolicy11.setHorizontalStretch(0);
    sizePolicy11.setVerticalStretch(0);
    sizePolicy11.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
    groupBox->setSizePolicy(sizePolicy11);
    verticalLayout_5 = new QVBoxLayout(groupBox);
    verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
    sameComputerRadio = new QRadioButton(groupBox);
    sameComputerRadio->setObjectName(QString::fromUtf8("sameComputerRadio"));

    verticalLayout_5->addWidget(sameComputerRadio);

    specificRadio = new QRadioButton(groupBox);
    specificRadio->setObjectName(QString::fromUtf8("specificRadio"));

    verticalLayout_5->addWidget(specificRadio);

    incomingSpecificLabel = new QLabel(groupBox);
    incomingSpecificLabel->setObjectName(QString::fromUtf8("incomingSpecificLabel"));

    verticalLayout_5->addWidget(incomingSpecificLabel);

    horizontalLayout_8 = new QHBoxLayout();
    horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
    incomingSpecificEdit = new QLineEdit(groupBox);
    incomingSpecificEdit->setObjectName(QString::fromUtf8("incomingSpecificEdit"));

    horizontalLayout_8->addWidget(incomingSpecificEdit);

    incomingSpecificButton = new QToolButton(groupBox);
    incomingSpecificButton->setObjectName(QString::fromUtf8("incomingSpecificButton"));

    horizontalLayout_8->addWidget(incomingSpecificButton);


    verticalLayout_5->addLayout(horizontalLayout_8);

    tempSpecificLabel = new QLabel(groupBox);
    tempSpecificLabel->setObjectName(QString::fromUtf8("tempSpecificLabel"));

    verticalLayout_5->addWidget(tempSpecificLabel);

    horizontalLayout_9 = new QHBoxLayout();
    horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
    tempSpecificEdit = new QLineEdit(groupBox);
    tempSpecificEdit->setObjectName(QString::fromUtf8("tempSpecificEdit"));

    horizontalLayout_9->addWidget(tempSpecificEdit);

    tempSpecificButton = new QToolButton(groupBox);
    tempSpecificButton->setObjectName(QString::fromUtf8("tempSpecificButton"));

    horizontalLayout_9->addWidget(tempSpecificButton);


    verticalLayout_5->addLayout(horizontalLayout_9);

    ftpRadio = new QRadioButton(groupBox);
    ftpRadio->setObjectName(QString::fromUtf8("ftpRadio"));
    ftpRadio->setEnabled(true);

    verticalLayout_5->addWidget(ftpRadio);

    jumpFtpButton = new QPushButton(groupBox);
    jumpFtpButton->setObjectName(QString::fromUtf8("jumpFtpButton"));

    verticalLayout_5->addWidget(jumpFtpButton);


    verticalLayout_6->addWidget(groupBox);

    verticalSpacer_5 = new QSpacerItem(20, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

    verticalLayout_6->addItem(verticalSpacer_5);

    stackedWidget->addWidget(Launching);
    Ftp = new QWidget();
    Ftp->setObjectName(QString::fromUtf8("Ftp"));
    verticalLayout_9 = new QVBoxLayout(Ftp);
    verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
    label_29 = new QLabel(Ftp);
    label_29->setObjectName(QString::fromUtf8("label_29"));
    label_29->setFont(font);

    verticalLayout_9->addWidget(label_29);

    line_6 = new QFrame(Ftp);
    line_6->setObjectName(QString::fromUtf8("line_6"));
    line_6->setFrameShape(QFrame::HLine);
    line_6->setFrameShadow(QFrame::Sunken);

    verticalLayout_9->addWidget(line_6);

    formLayout_6 = new QFormLayout();
    formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
    label_17 = new QLabel(Ftp);
    label_17->setObjectName(QString::fromUtf8("label_17"));

    formLayout_6->setWidget(0, QFormLayout::LabelRole, label_17);

    ftpServerEdit = new QLineEdit(Ftp);
    ftpServerEdit->setObjectName(QString::fromUtf8("ftpServerEdit"));

    formLayout_6->setWidget(0, QFormLayout::FieldRole, ftpServerEdit);

    label_18 = new QLabel(Ftp);
    label_18->setObjectName(QString::fromUtf8("label_18"));

    formLayout_6->setWidget(1, QFormLayout::LabelRole, label_18);

    ftpPortEdit = new QLineEdit(Ftp);
    ftpPortEdit->setObjectName(QString::fromUtf8("ftpPortEdit"));

    formLayout_6->setWidget(1, QFormLayout::FieldRole, ftpPortEdit);

    label_19 = new QLabel(Ftp);
    label_19->setObjectName(QString::fromUtf8("label_19"));

    formLayout_6->setWidget(2, QFormLayout::LabelRole, label_19);

    ftpUserEdit = new QLineEdit(Ftp);
    ftpUserEdit->setObjectName(QString::fromUtf8("ftpUserEdit"));

    formLayout_6->setWidget(2, QFormLayout::FieldRole, ftpUserEdit);

    label_20 = new QLabel(Ftp);
    label_20->setObjectName(QString::fromUtf8("label_20"));

    formLayout_6->setWidget(3, QFormLayout::LabelRole, label_20);

    ftpPasswordEdit = new QLineEdit(Ftp);
    ftpPasswordEdit->setObjectName(QString::fromUtf8("ftpPasswordEdit"));
    ftpPasswordEdit->setEchoMode(QLineEdit::Password);

    formLayout_6->setWidget(3, QFormLayout::FieldRole, ftpPasswordEdit);

    label_21 = new QLabel(Ftp);
    label_21->setObjectName(QString::fromUtf8("label_21"));

    formLayout_6->setWidget(4, QFormLayout::LabelRole, label_21);

    ftpInDirEdit = new QLineEdit(Ftp);
    ftpInDirEdit->setObjectName(QString::fromUtf8("ftpInDirEdit"));

    formLayout_6->setWidget(4, QFormLayout::FieldRole, ftpInDirEdit);

    label_23 = new QLabel(Ftp);
    label_23->setObjectName(QString::fromUtf8("label_23"));

    formLayout_6->setWidget(5, QFormLayout::LabelRole, label_23);

    ftpTmpDirEdit = new QLineEdit(Ftp);
    ftpTmpDirEdit->setObjectName(QString::fromUtf8("ftpTmpDirEdit"));

    formLayout_6->setWidget(5, QFormLayout::FieldRole, ftpTmpDirEdit);


    verticalLayout_9->addLayout(formLayout_6);

    horizontalLayout_7 = new QHBoxLayout();
    horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
    groupBox_3 = new QGroupBox(Ftp);
    groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
    QSizePolicy sizePolicy12(QSizePolicy::Preferred, QSizePolicy::Preferred);
    sizePolicy12.setHorizontalStretch(1);
    sizePolicy12.setVerticalStretch(0);
    sizePolicy12.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
    groupBox_3->setSizePolicy(sizePolicy12);
    verticalLayout_8 = new QVBoxLayout(groupBox_3);
    verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
    ftpPassiveRadioButton = new QRadioButton(groupBox_3);
    ftpPassiveRadioButton->setObjectName(QString::fromUtf8("ftpPassiveRadioButton"));

    verticalLayout_8->addWidget(ftpPassiveRadioButton);

    ftpActiveRadioButton = new QRadioButton(groupBox_3);
    ftpActiveRadioButton->setObjectName(QString::fromUtf8("ftpActiveRadioButton"));

    verticalLayout_8->addWidget(ftpActiveRadioButton);


    horizontalLayout_7->addWidget(groupBox_3);

    groupBox_2 = new QGroupBox(Ftp);
    groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
    QSizePolicy sizePolicy13(QSizePolicy::Minimum, QSizePolicy::Preferred);
    sizePolicy13.setHorizontalStretch(2);
    sizePolicy13.setVerticalStretch(0);
    sizePolicy13.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
    groupBox_2->setSizePolicy(sizePolicy13);
    groupBox_2->setSizeIncrement(QSize(0, 0));
    verticalLayout_7 = new QVBoxLayout(groupBox_2);
    verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
    ftpFullRadioButton = new QRadioButton(groupBox_2);
    ftpFullRadioButton->setObjectName(QString::fromUtf8("ftpFullRadioButton"));

    verticalLayout_7->addWidget(ftpFullRadioButton);

    formLayout_7 = new QFormLayout();
    formLayout_7->setObjectName(QString::fromUtf8("formLayout_7"));
    ftpMbRadioButton = new QRadioButton(groupBox_2);
    ftpMbRadioButton->setObjectName(QString::fromUtf8("ftpMbRadioButton"));

    formLayout_7->setWidget(0, QFormLayout::LabelRole, ftpMbRadioButton);

    ftpMbSpinBox = new QSpinBox(groupBox_2);
    ftpMbSpinBox->setObjectName(QString::fromUtf8("ftpMbSpinBox"));
    QSizePolicy sizePolicy14(QSizePolicy::Minimum, QSizePolicy::Fixed);
    sizePolicy14.setHorizontalStretch(0);
    sizePolicy14.setVerticalStretch(0);
    sizePolicy14.setHeightForWidth(ftpMbSpinBox->sizePolicy().hasHeightForWidth());
    ftpMbSpinBox->setSizePolicy(sizePolicy14);
    ftpMbSpinBox->setLayoutDirection(Qt::LeftToRight);
    ftpMbSpinBox->setFrame(true);
    ftpMbSpinBox->setAlignment(Qt::AlignRight);

    formLayout_7->setWidget(0, QFormLayout::FieldRole, ftpMbSpinBox);


    verticalLayout_7->addLayout(formLayout_7);


    horizontalLayout_7->addWidget(groupBox_2);


    verticalLayout_9->addLayout(horizontalLayout_7);

    verticalSpacer = new QSpacerItem(20, 41, QSizePolicy::Minimum, QSizePolicy::Expanding);

    verticalLayout_9->addItem(verticalSpacer);

    stackedWidget->addWidget(Ftp);

    gridLayout->addWidget(stackedWidget, 0, 1, 1, 1);

    buttonBox = new QDialogButtonBox(QAjOptionsDialogBase);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

    gridLayout->addWidget(buttonBox, 1, 1, 1, 1);

    QWidget::setTabOrder(listWidget, nickEdit);
    QWidget::setTabOrder(nickEdit, passwordEdit);
    QWidget::setTabOrder(passwordEdit, retypeEdit);
    QWidget::setTabOrder(retypeEdit, coreEdit);
    QWidget::setTabOrder(coreEdit, xmlEdit);
    QWidget::setTabOrder(xmlEdit, incomingEdit);
    QWidget::setTabOrder(incomingEdit, incomingButton);
    QWidget::setTabOrder(incomingButton, tempEdit);
    QWidget::setTabOrder(tempEdit, tempButton);
    QWidget::setTabOrder(tempButton, tcpEdit);
    QWidget::setTabOrder(tcpEdit, autoConnect);
    QWidget::setTabOrder(autoConnect, savePassword);
    QWidget::setTabOrder(savePassword, downSpin);
    QWidget::setTabOrder(downSpin, upSpin);
    QWidget::setTabOrder(upSpin, slotSpin);
    QWidget::setTabOrder(slotSpin, sourcesSpin);
    QWidget::setTabOrder(sourcesSpin, connectionsSpin);
    QWidget::setTabOrder(connectionsSpin, newSpin);
    QWidget::setTabOrder(newSpin, showSplash);
    QWidget::setTabOrder(showSplash, trayCheckBox);
    QWidget::setTabOrder(trayCheckBox, altRowsCheckBox);
    QWidget::setTabOrder(altRowsCheckBox, languageComboBox);
    QWidget::setTabOrder(languageComboBox, fontComboBox);
    QWidget::setTabOrder(fontComboBox, fontSizeComboBox);
    QWidget::setTabOrder(fontSizeComboBox, statusbarList);
    QWidget::setTabOrder(statusbarList, downloadTabList);
    QWidget::setTabOrder(downloadTabList, refreshSpin);
    QWidget::setTabOrder(refreshSpin, serverEdit);
    QWidget::setTabOrder(serverEdit, fetchServersCheckBox);
    QWidget::setTabOrder(fetchServersCheckBox, launchCombo);
    QWidget::setTabOrder(launchCombo, launcherButton);
    QWidget::setTabOrder(launcherButton, sameComputerRadio);
    QWidget::setTabOrder(sameComputerRadio, specificRadio);
    QWidget::setTabOrder(specificRadio, incomingSpecificEdit);
    QWidget::setTabOrder(incomingSpecificEdit, incomingSpecificButton);
    QWidget::setTabOrder(incomingSpecificButton, tempSpecificEdit);
    QWidget::setTabOrder(tempSpecificEdit, tempSpecificButton);
    QWidget::setTabOrder(tempSpecificButton, ftpRadio);
    QWidget::setTabOrder(ftpRadio, jumpFtpButton);
    QWidget::setTabOrder(jumpFtpButton, ftpServerEdit);
    QWidget::setTabOrder(ftpServerEdit, ftpPortEdit);
    QWidget::setTabOrder(ftpPortEdit, ftpUserEdit);
    QWidget::setTabOrder(ftpUserEdit, ftpPasswordEdit);
    QWidget::setTabOrder(ftpPasswordEdit, ftpInDirEdit);
    QWidget::setTabOrder(ftpInDirEdit, ftpTmpDirEdit);
    QWidget::setTabOrder(ftpTmpDirEdit, ftpPassiveRadioButton);
    QWidget::setTabOrder(ftpPassiveRadioButton, ftpActiveRadioButton);
    QWidget::setTabOrder(ftpActiveRadioButton, ftpFullRadioButton);
    QWidget::setTabOrder(ftpFullRadioButton, ftpMbRadioButton);
    QWidget::setTabOrder(ftpMbRadioButton, ftpMbSpinBox);

    retranslateUi(QAjOptionsDialogBase);
    QObject::connect(handlerCheckCheckBox, SIGNAL(clicked(bool)), handlerDefaultCheckBox, SLOT(setEnabled(bool)));
    QObject::connect(buttonBox, SIGNAL(accepted()), QAjOptionsDialogBase, SLOT(accept()));
    QObject::connect(buttonBox, SIGNAL(rejected()), QAjOptionsDialogBase, SLOT(reject()));

    stackedWidget->setCurrentIndex(0);


    QMetaObject::connectSlotsByName(QAjOptionsDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QAjOptionsDialogBase)
    {
    QAjOptionsDialogBase->setWindowTitle(QApplication::translate("QAjOptionsDialogBase", "Configure", 0, QApplication::UnicodeUTF8));
    label_24->setText(QApplication::translate("QAjOptionsDialogBase", "Core", 0, QApplication::UnicodeUTF8));
    nickLabel->setText(QApplication::translate("QAjOptionsDialogBase", "Nick:", 0, QApplication::UnicodeUTF8));
    passwordLabel->setText(QApplication::translate("QAjOptionsDialogBase", "New Password:", 0, QApplication::UnicodeUTF8));
    retypeLabel->setText(QApplication::translate("QAjOptionsDialogBase", "Retype Password:", 0, QApplication::UnicodeUTF8));
    coreLabel->setText(QApplication::translate("QAjOptionsDialogBase", "Core Address:", 0, QApplication::UnicodeUTF8));
    xmlLabel->setText(QApplication::translate("QAjOptionsDialogBase", "XML Port:", 0, QApplication::UnicodeUTF8));
    incomingLabel->setText(QApplication::translate("QAjOptionsDialogBase", "Incoming Directory:", 0, QApplication::UnicodeUTF8));
    incomingButton->setText(QApplication::translate("QAjOptionsDialogBase", "...", 0, QApplication::UnicodeUTF8));
    tempLabel->setText(QApplication::translate("QAjOptionsDialogBase", "Temporary Directory:", 0, QApplication::UnicodeUTF8));
    tempButton->setText(QApplication::translate("QAjOptionsDialogBase", "...", 0, QApplication::UnicodeUTF8));
    tcpLabel->setText(QApplication::translate("QAjOptionsDialogBase", "TCP Port:", 0, QApplication::UnicodeUTF8));
    autoConnect->setText(QApplication::translate("QAjOptionsDialogBase", "automatically connect to servers", 0, QApplication::UnicodeUTF8));
    savePassword->setText(QApplication::translate("QAjOptionsDialogBase", "save core password", 0, QApplication::UnicodeUTF8));
    label_25->setText(QApplication::translate("QAjOptionsDialogBase", "Limits", 0, QApplication::UnicodeUTF8));
    downLabel->setText(QApplication::translate("QAjOptionsDialogBase", "Max. Download Speed:", 0, QApplication::UnicodeUTF8));
    downSpin->setSuffix(QApplication::translate("QAjOptionsDialogBase", " kByte/s", 0, QApplication::UnicodeUTF8));
    upLabel->setText(QApplication::translate("QAjOptionsDialogBase", "Max. Upload Speed:", 0, QApplication::UnicodeUTF8));
    upSpin->setSuffix(QApplication::translate("QAjOptionsDialogBase", " kByte/s", 0, QApplication::UnicodeUTF8));
    slotLabel->setText(QApplication::translate("QAjOptionsDialogBase", "Max. Speed Per Slot:", 0, QApplication::UnicodeUTF8));
    slotSpin->setSuffix(QApplication::translate("QAjOptionsDialogBase", " kByte/s", 0, QApplication::UnicodeUTF8));
    sourcesLabel->setText(QApplication::translate("QAjOptionsDialogBase", "Max. Sources Per File:", 0, QApplication::UnicodeUTF8));
    sourcesSpin->setSuffix(QString());
    connectionsLabel->setText(QApplication::translate("QAjOptionsDialogBase", "Max. Connections:", 0, QApplication::UnicodeUTF8));
    connectionsSpin->setSuffix(QString());
    newLabel->setText(QApplication::translate("QAjOptionsDialogBase", "Max. New Connections:", 0, QApplication::UnicodeUTF8));
    newSpin->setSuffix(QApplication::translate("QAjOptionsDialogBase", " per 10 seconds", 0, QApplication::UnicodeUTF8));
    label_26->setText(QApplication::translate("QAjOptionsDialogBase", "Appearance", 0, QApplication::UnicodeUTF8));
    showSplash->setText(QApplication::translate("QAjOptionsDialogBase", "show splash screen on startup", 0, QApplication::UnicodeUTF8));
    trayCheckBox->setText(QApplication::translate("QAjOptionsDialogBase", "use tray icon", 0, QApplication::UnicodeUTF8));
    altRowsCheckBox->setText(QApplication::translate("QAjOptionsDialogBase", "alternating row colors", 0, QApplication::UnicodeUTF8));
    label_30->setText(QApplication::translate("QAjOptionsDialogBase", "language:", 0, QApplication::UnicodeUTF8));
    label_32->setText(QApplication::translate("QAjOptionsDialogBase", "font:", 0, QApplication::UnicodeUTF8));
    label_31->setText(QApplication::translate("QAjOptionsDialogBase", "show in statusbar:", 0, QApplication::UnicodeUTF8));

    const bool __sortingEnabled = statusbarList->isSortingEnabled();
    statusbarList->setSortingEnabled(false);
    statusbarList->item(0)->setText(QApplication::translate("QAjOptionsDialogBase", "connected since", 0, QApplication::UnicodeUTF8));
    statusbarList->item(1)->setText(QApplication::translate("QAjOptionsDialogBase", "core version", 0, QApplication::UnicodeUTF8));
    statusbarList->item(2)->setText(QApplication::translate("QAjOptionsDialogBase", "downstream", 0, QApplication::UnicodeUTF8));
    statusbarList->item(3)->setText(QApplication::translate("QAjOptionsDialogBase", "upstream", 0, QApplication::UnicodeUTF8));
    statusbarList->item(4)->setText(QApplication::translate("QAjOptionsDialogBase", "downloaded", 0, QApplication::UnicodeUTF8));
    statusbarList->item(5)->setText(QApplication::translate("QAjOptionsDialogBase", "uploaded", 0, QApplication::UnicodeUTF8));
    statusbarList->item(6)->setText(QApplication::translate("QAjOptionsDialogBase", "credits", 0, QApplication::UnicodeUTF8));

    statusbarList->setSortingEnabled(__sortingEnabled);
    label_33->setText(QApplication::translate("QAjOptionsDialogBase", "show in download tab:", 0, QApplication::UnicodeUTF8));

    const bool __sortingEnabled1 = downloadTabList->isSortingEnabled();
    downloadTabList->setSortingEnabled(false);
    downloadTabList->item(0)->setText(QApplication::translate("QAjOptionsDialogBase", "filename", 0, QApplication::UnicodeUTF8));
    downloadTabList->item(1)->setText(QApplication::translate("QAjOptionsDialogBase", "sources", 0, QApplication::UnicodeUTF8));
    downloadTabList->item(2)->setText(QApplication::translate("QAjOptionsDialogBase", "speed", 0, QApplication::UnicodeUTF8));
    downloadTabList->item(3)->setText(QApplication::translate("QAjOptionsDialogBase", "status", 0, QApplication::UnicodeUTF8));
    downloadTabList->item(4)->setText(QApplication::translate("QAjOptionsDialogBase", "power", 0, QApplication::UnicodeUTF8));
    downloadTabList->item(5)->setText(QApplication::translate("QAjOptionsDialogBase", "size", 0, QApplication::UnicodeUTF8));
    downloadTabList->item(6)->setText(QApplication::translate("QAjOptionsDialogBase", "ready", 0, QApplication::UnicodeUTF8));
    downloadTabList->item(7)->setText(QApplication::translate("QAjOptionsDialogBase", "missing", 0, QApplication::UnicodeUTF8));
    downloadTabList->item(8)->setText(QApplication::translate("QAjOptionsDialogBase", "eta", 0, QApplication::UnicodeUTF8));

    downloadTabList->setSortingEnabled(__sortingEnabled1);
    label_27->setText(QApplication::translate("QAjOptionsDialogBase", "Behaviour", 0, QApplication::UnicodeUTF8));
    label_9->setText(QApplication::translate("QAjOptionsDialogBase", "Refresh:", 0, QApplication::UnicodeUTF8));
    refreshSpin->setSuffix(QApplication::translate("QAjOptionsDialogBase", "sec.", 0, QApplication::UnicodeUTF8));
    label_8->setText(QApplication::translate("QAjOptionsDialogBase", "Server Source:", 0, QApplication::UnicodeUTF8));
    fetchServersCheckBox->setText(QApplication::translate("QAjOptionsDialogBase", "fetch new servers on startup", 0, QApplication::UnicodeUTF8));
    handlerGroupBox->setTitle(QApplication::translate("QAjOptionsDialogBase", "ajfsp:// handler", 0, QApplication::UnicodeUTF8));
    handlerCheckCheckBox->setText(QApplication::translate("QAjOptionsDialogBase", "check on startup", 0, QApplication::UnicodeUTF8));
    handlerDefaultCheckBox->setText(QApplication::translate("QAjOptionsDialogBase", "set as default", 0, QApplication::UnicodeUTF8));
    handlerPushButton->setText(QApplication::translate("QAjOptionsDialogBase", "make default application now", 0, QApplication::UnicodeUTF8));
    label_28->setText(QApplication::translate("QAjOptionsDialogBase", "Launching", 0, QApplication::UnicodeUTF8));
    label_22->setText(QApplication::translate("QAjOptionsDialogBase", "Open files with:", 0, QApplication::UnicodeUTF8));
    launcherButton->setText(QApplication::translate("QAjOptionsDialogBase", "...", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("QAjOptionsDialogBase", "Location of files", 0, QApplication::UnicodeUTF8));
    sameComputerRadio->setText(QApplication::translate("QAjOptionsDialogBase", "Core is running at the same computer", 0, QApplication::UnicodeUTF8));
    specificRadio->setText(QApplication::translate("QAjOptionsDialogBase", "Use specific folders:", 0, QApplication::UnicodeUTF8));
    incomingSpecificLabel->setText(QApplication::translate("QAjOptionsDialogBase", "Incoming Directory:", 0, QApplication::UnicodeUTF8));
    incomingSpecificButton->setText(QApplication::translate("QAjOptionsDialogBase", "...", 0, QApplication::UnicodeUTF8));
    tempSpecificLabel->setText(QApplication::translate("QAjOptionsDialogBase", "Temporary Directory:", 0, QApplication::UnicodeUTF8));
    tempSpecificButton->setText(QApplication::translate("QAjOptionsDialogBase", "...", 0, QApplication::UnicodeUTF8));
    ftpRadio->setText(QApplication::translate("QAjOptionsDialogBase", "Use ftp", 0, QApplication::UnicodeUTF8));
    jumpFtpButton->setText(QApplication::translate("QAjOptionsDialogBase", "jump to ftp settings", 0, QApplication::UnicodeUTF8));
    label_29->setText(QApplication::translate("QAjOptionsDialogBase", "FTP", 0, QApplication::UnicodeUTF8));
    label_17->setText(QApplication::translate("QAjOptionsDialogBase", "Server:", 0, QApplication::UnicodeUTF8));
    label_18->setText(QApplication::translate("QAjOptionsDialogBase", "Port:", 0, QApplication::UnicodeUTF8));
    label_19->setText(QApplication::translate("QAjOptionsDialogBase", "User:", 0, QApplication::UnicodeUTF8));
    label_20->setText(QApplication::translate("QAjOptionsDialogBase", "Password:", 0, QApplication::UnicodeUTF8));
    label_21->setText(QApplication::translate("QAjOptionsDialogBase", "Incoming Directory:", 0, QApplication::UnicodeUTF8));
    label_23->setText(QApplication::translate("QAjOptionsDialogBase", "Temporary Directory:", 0, QApplication::UnicodeUTF8));
    groupBox_3->setTitle(QApplication::translate("QAjOptionsDialogBase", "Mode", 0, QApplication::UnicodeUTF8));
    ftpPassiveRadioButton->setText(QApplication::translate("QAjOptionsDialogBase", "passive", 0, QApplication::UnicodeUTF8));
    ftpActiveRadioButton->setText(QApplication::translate("QAjOptionsDialogBase", "active", 0, QApplication::UnicodeUTF8));
    groupBox_2->setTitle(QApplication::translate("QAjOptionsDialogBase", "Launching", 0, QApplication::UnicodeUTF8));
    ftpFullRadioButton->setText(QApplication::translate("QAjOptionsDialogBase", "open after 100% ", 0, QApplication::UnicodeUTF8));
    ftpMbRadioButton->setText(QApplication::translate("QAjOptionsDialogBase", "open after", 0, QApplication::UnicodeUTF8));
    ftpMbSpinBox->setSuffix(QApplication::translate("QAjOptionsDialogBase", "MB", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QAjOptionsDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QAjOptionsDialogBase: public Ui_QAjOptionsDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QAJOPTIONSDIALOGBASE_H
