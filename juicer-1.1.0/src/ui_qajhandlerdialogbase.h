/********************************************************************************
** Form generated from reading ui file 'qajhandlerdialogbase.ui'
**
** Created: Sun Jan 18 14:32:36 2009
**      by: Qt User Interface Compiler version 4.4.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QAJHANDLERDIALOGBASE_H
#define UI_QAJHANDLERDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_HandlerDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *iconLabel;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *againCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *HandlerDialog)
    {
    if (HandlerDialog->objectName().isEmpty())
        HandlerDialog->setObjectName(QString::fromUtf8("HandlerDialog"));
    HandlerDialog->resize(308, 117);
    QIcon icon;
    icon.addPixmap(QPixmap(QString::fromUtf8(":/juicer.png")), QIcon::Normal, QIcon::Off);
    HandlerDialog->setWindowIcon(icon);
    verticalLayout = new QVBoxLayout(HandlerDialog);
    verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
    horizontalLayout = new QHBoxLayout();
    horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
    iconLabel = new QLabel(HandlerDialog);
    iconLabel->setObjectName(QString::fromUtf8("iconLabel"));
    QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(iconLabel->sizePolicy().hasHeightForWidth());
    iconLabel->setSizePolicy(sizePolicy);
    iconLabel->setMinimumSize(QSize(50, 50));
    iconLabel->setMaximumSize(QSize(50, 50));

    horizontalLayout->addWidget(iconLabel);

    label = new QLabel(HandlerDialog);
    label->setObjectName(QString::fromUtf8("label"));
    label->setWordWrap(true);

    horizontalLayout->addWidget(label);


    verticalLayout->addLayout(horizontalLayout);

    verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    verticalLayout->addItem(verticalSpacer);

    horizontalLayout_2 = new QHBoxLayout();
    horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
    againCheckBox = new QCheckBox(HandlerDialog);
    againCheckBox->setObjectName(QString::fromUtf8("againCheckBox"));

    horizontalLayout_2->addWidget(againCheckBox);

    buttonBox = new QDialogButtonBox(HandlerDialog);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setStandardButtons(QDialogButtonBox::No|QDialogButtonBox::Yes);

    horizontalLayout_2->addWidget(buttonBox);


    verticalLayout->addLayout(horizontalLayout_2);

    QWidget::setTabOrder(buttonBox, againCheckBox);

    retranslateUi(HandlerDialog);
    QObject::connect(buttonBox, SIGNAL(accepted()), HandlerDialog, SLOT(accept()));
    QObject::connect(buttonBox, SIGNAL(rejected()), HandlerDialog, SLOT(reject()));

    QMetaObject::connectSlotsByName(HandlerDialog);
    } // setupUi

    void retranslateUi(QDialog *HandlerDialog)
    {
    HandlerDialog->setWindowTitle(QApplication::translate("HandlerDialog", "Protocol Handler", 0, QApplication::UnicodeUTF8));
    iconLabel->setText(QApplication::translate("HandlerDialog", "TextLabel", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("HandlerDialog", "Juicer seems to be not the default application for ajfsp:// links.\n"
"Would you like to change this?", 0, QApplication::UnicodeUTF8));
    againCheckBox->setText(QApplication::translate("HandlerDialog", "don't ask me again", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(HandlerDialog);
    } // retranslateUi

};

namespace Ui {
    class HandlerDialog: public Ui_HandlerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QAJHANDLERDIALOGBASE_H
