/********************************************************************************
** Form generated from reading ui file 'qajnetworkdialogbase.ui'
**
** Created: Sun Jan 18 14:32:36 2009
**      by: Qt User Interface Compiler version 4.4.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QAJNETWORKDIALOGBASE_H
#define UI_QAJNETWORKDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QAjNetworkDialog
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *usersLabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *filesLabel;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *sizeLabel;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLabel *ipLabel;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLabel *firewalledLabel;
    QSpacerItem *horizontalSpacer;
    QFrame *line;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QAjNetworkDialog)
    {
    if (QAjNetworkDialog->objectName().isEmpty())
        QAjNetworkDialog->setObjectName(QString::fromUtf8("QAjNetworkDialog"));
    QAjNetworkDialog->resize(265, 181);
    gridLayout = new QGridLayout(QAjNetworkDialog);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    horizontalSpacer_2 = new QSpacerItem(43, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

    gridLayout->addItem(horizontalSpacer_2, 0, 0, 1, 1);

    verticalLayout = new QVBoxLayout();
    verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
    horizontalLayout = new QHBoxLayout();
    horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
    label = new QLabel(QAjNetworkDialog);
    label->setObjectName(QString::fromUtf8("label"));
    QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
    label->setSizePolicy(sizePolicy);
    label->setMinimumSize(QSize(120, 0));
    label->setMaximumSize(QSize(120, 16777215));

    horizontalLayout->addWidget(label);

    usersLabel = new QLabel(QAjNetworkDialog);
    usersLabel->setObjectName(QString::fromUtf8("usersLabel"));
    usersLabel->setMinimumSize(QSize(30, 0));

    horizontalLayout->addWidget(usersLabel);


    verticalLayout->addLayout(horizontalLayout);

    horizontalLayout_2 = new QHBoxLayout();
    horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
    label_2 = new QLabel(QAjNetworkDialog);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
    label_2->setSizePolicy(sizePolicy);
    label_2->setMinimumSize(QSize(120, 0));
    label_2->setMaximumSize(QSize(120, 16777215));

    horizontalLayout_2->addWidget(label_2);

    filesLabel = new QLabel(QAjNetworkDialog);
    filesLabel->setObjectName(QString::fromUtf8("filesLabel"));
    filesLabel->setMinimumSize(QSize(30, 0));

    horizontalLayout_2->addWidget(filesLabel);


    verticalLayout->addLayout(horizontalLayout_2);

    horizontalLayout_3 = new QHBoxLayout();
    horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
    label_3 = new QLabel(QAjNetworkDialog);
    label_3->setObjectName(QString::fromUtf8("label_3"));
    sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
    label_3->setSizePolicy(sizePolicy);
    label_3->setMinimumSize(QSize(120, 0));
    label_3->setMaximumSize(QSize(120, 16777215));

    horizontalLayout_3->addWidget(label_3);

    sizeLabel = new QLabel(QAjNetworkDialog);
    sizeLabel->setObjectName(QString::fromUtf8("sizeLabel"));
    sizeLabel->setMinimumSize(QSize(30, 0));

    horizontalLayout_3->addWidget(sizeLabel);


    verticalLayout->addLayout(horizontalLayout_3);

    horizontalLayout_4 = new QHBoxLayout();
    horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
    label_4 = new QLabel(QAjNetworkDialog);
    label_4->setObjectName(QString::fromUtf8("label_4"));
    sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
    label_4->setSizePolicy(sizePolicy);
    label_4->setMinimumSize(QSize(120, 0));
    label_4->setMaximumSize(QSize(120, 16777215));

    horizontalLayout_4->addWidget(label_4);

    ipLabel = new QLabel(QAjNetworkDialog);
    ipLabel->setObjectName(QString::fromUtf8("ipLabel"));
    QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(ipLabel->sizePolicy().hasHeightForWidth());
    ipLabel->setSizePolicy(sizePolicy1);
    ipLabel->setMinimumSize(QSize(30, 0));

    horizontalLayout_4->addWidget(ipLabel);


    verticalLayout->addLayout(horizontalLayout_4);

    horizontalLayout_5 = new QHBoxLayout();
    horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
    label_5 = new QLabel(QAjNetworkDialog);
    label_5->setObjectName(QString::fromUtf8("label_5"));
    sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
    label_5->setSizePolicy(sizePolicy);
    label_5->setMinimumSize(QSize(120, 0));
    label_5->setMaximumSize(QSize(120, 16777215));

    horizontalLayout_5->addWidget(label_5);

    firewalledLabel = new QLabel(QAjNetworkDialog);
    firewalledLabel->setObjectName(QString::fromUtf8("firewalledLabel"));
    firewalledLabel->setMinimumSize(QSize(30, 0));

    horizontalLayout_5->addWidget(firewalledLabel);


    verticalLayout->addLayout(horizontalLayout_5);


    gridLayout->addLayout(verticalLayout, 0, 1, 1, 2);

    horizontalSpacer = new QSpacerItem(42, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

    gridLayout->addItem(horizontalSpacer, 0, 3, 1, 1);

    line = new QFrame(QAjNetworkDialog);
    line->setObjectName(QString::fromUtf8("line"));
    QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
    line->setSizePolicy(sizePolicy2);
    line->setFrameShape(QFrame::HLine);
    line->setFrameShadow(QFrame::Sunken);

    gridLayout->addWidget(line, 1, 0, 2, 4);

    buttonBox = new QDialogButtonBox(QAjNetworkDialog);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setOrientation(Qt::Horizontal);
    buttonBox->setStandardButtons(QDialogButtonBox::Ok);

    gridLayout->addWidget(buttonBox, 2, 2, 1, 2);


    retranslateUi(QAjNetworkDialog);
    QObject::connect(buttonBox, SIGNAL(accepted()), QAjNetworkDialog, SLOT(accept()));
    QObject::connect(buttonBox, SIGNAL(rejected()), QAjNetworkDialog, SLOT(reject()));

    QMetaObject::connectSlotsByName(QAjNetworkDialog);
    } // setupUi

    void retranslateUi(QDialog *QAjNetworkDialog)
    {
    QAjNetworkDialog->setWindowTitle(QApplication::translate("QAjNetworkDialog", "Network Info", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("QAjNetworkDialog", "Number of users:", 0, QApplication::UnicodeUTF8));
    usersLabel->setText(QApplication::translate("QAjNetworkDialog", "0", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("QAjNetworkDialog", "Number of files:", 0, QApplication::UnicodeUTF8));
    filesLabel->setText(QApplication::translate("QAjNetworkDialog", "0", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("QAjNetworkDialog", "Size of all files:", 0, QApplication::UnicodeUTF8));
    sizeLabel->setText(QApplication::translate("QAjNetworkDialog", "0", 0, QApplication::UnicodeUTF8));
    label_4->setText(QApplication::translate("QAjNetworkDialog", "Your IP:", 0, QApplication::UnicodeUTF8));
    ipLabel->setText(QApplication::translate("QAjNetworkDialog", "0", 0, QApplication::UnicodeUTF8));
    label_5->setText(QApplication::translate("QAjNetworkDialog", "Behind a firewall:", 0, QApplication::UnicodeUTF8));
    firewalledLabel->setText(QApplication::translate("QAjNetworkDialog", "no", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QAjNetworkDialog);
    } // retranslateUi

};

namespace Ui {
    class QAjNetworkDialog: public Ui_QAjNetworkDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QAJNETWORKDIALOGBASE_H
