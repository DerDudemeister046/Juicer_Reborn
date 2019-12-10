/********************************************************************************
** Form generated from reading ui file 'qajlogindialogbase.ui'
**
** Created: Sun Jan 18 14:32:36 2009
**      by: Qt User Interface Compiler version 4.4.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QAJLOGINDIALOGBASE_H
#define UI_QAJLOGINDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpinBox>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QAjLoginDialogBase
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *headerLabel;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *hostEdit;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QSpinBox *portSpinBox;
    QToolButton *resetPortButton;
    QLabel *label_3;
    QLineEdit *passwordEdit;
    QCheckBox *savePasswordCheckBox;
    QFrame *line;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QAjLoginDialogBase)
    {
    if (QAjLoginDialogBase->objectName().isEmpty())
        QAjLoginDialogBase->setObjectName(QString::fromUtf8("QAjLoginDialogBase"));
    QAjLoginDialogBase->setWindowModality(Qt::ApplicationModal);
    QAjLoginDialogBase->resize(266, 206);
    QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(QAjLoginDialogBase->sizePolicy().hasHeightForWidth());
    QAjLoginDialogBase->setSizePolicy(sizePolicy);
    QAjLoginDialogBase->setModal(true);
    verticalLayout = new QVBoxLayout(QAjLoginDialogBase);
    verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
    headerLabel = new QLabel(QAjLoginDialogBase);
    headerLabel->setObjectName(QString::fromUtf8("headerLabel"));

    verticalLayout->addWidget(headerLabel);

    formLayout = new QFormLayout();
    formLayout->setObjectName(QString::fromUtf8("formLayout"));
    label = new QLabel(QAjLoginDialogBase);
    label->setObjectName(QString::fromUtf8("label"));
    QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
    sizePolicy1.setHorizontalStretch(2);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
    label->setSizePolicy(sizePolicy1);

    formLayout->setWidget(0, QFormLayout::LabelRole, label);

    hostEdit = new QLineEdit(QAjLoginDialogBase);
    hostEdit->setObjectName(QString::fromUtf8("hostEdit"));
    QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
    sizePolicy2.setHorizontalStretch(3);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(hostEdit->sizePolicy().hasHeightForWidth());
    hostEdit->setSizePolicy(sizePolicy2);

    formLayout->setWidget(0, QFormLayout::FieldRole, hostEdit);

    label_2 = new QLabel(QAjLoginDialogBase);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
    label_2->setSizePolicy(sizePolicy1);

    formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

    horizontalLayout = new QHBoxLayout();
    horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
    portSpinBox = new QSpinBox(QAjLoginDialogBase);
    portSpinBox->setObjectName(QString::fromUtf8("portSpinBox"));
    QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
    sizePolicy3.setHorizontalStretch(3);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(portSpinBox->sizePolicy().hasHeightForWidth());
    portSpinBox->setSizePolicy(sizePolicy3);
    portSpinBox->setAlignment(Qt::AlignRight);
    portSpinBox->setMinimum(1);
    portSpinBox->setMaximum(65535);

    horizontalLayout->addWidget(portSpinBox);

    resetPortButton = new QToolButton(QAjLoginDialogBase);
    resetPortButton->setObjectName(QString::fromUtf8("resetPortButton"));
    QIcon icon;
    icon.addPixmap(QPixmap(QString::fromUtf8(":/small/undo.png")), QIcon::Normal, QIcon::Off);
    resetPortButton->setIcon(icon);

    horizontalLayout->addWidget(resetPortButton);


    formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout);

    label_3 = new QLabel(QAjLoginDialogBase);
    label_3->setObjectName(QString::fromUtf8("label_3"));
    sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
    label_3->setSizePolicy(sizePolicy1);

    formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

    passwordEdit = new QLineEdit(QAjLoginDialogBase);
    passwordEdit->setObjectName(QString::fromUtf8("passwordEdit"));
    sizePolicy2.setHeightForWidth(passwordEdit->sizePolicy().hasHeightForWidth());
    passwordEdit->setSizePolicy(sizePolicy2);
    passwordEdit->setEchoMode(QLineEdit::Password);

    formLayout->setWidget(2, QFormLayout::FieldRole, passwordEdit);


    verticalLayout->addLayout(formLayout);

    savePasswordCheckBox = new QCheckBox(QAjLoginDialogBase);
    savePasswordCheckBox->setObjectName(QString::fromUtf8("savePasswordCheckBox"));
    savePasswordCheckBox->setLayoutDirection(Qt::LeftToRight);

    verticalLayout->addWidget(savePasswordCheckBox);

    line = new QFrame(QAjLoginDialogBase);
    line->setObjectName(QString::fromUtf8("line"));
    line->setFrameShape(QFrame::HLine);
    line->setFrameShadow(QFrame::Sunken);

    verticalLayout->addWidget(line);

    buttonBox = new QDialogButtonBox(QAjLoginDialogBase);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
    sizePolicy4.setHorizontalStretch(1);
    sizePolicy4.setVerticalStretch(1);
    sizePolicy4.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
    buttonBox->setSizePolicy(sizePolicy4);
    buttonBox->setOrientation(Qt::Horizontal);
    buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ignore|QDialogButtonBox::Ok);
    buttonBox->setCenterButtons(false);

    verticalLayout->addWidget(buttonBox);

    QWidget::setTabOrder(passwordEdit, savePasswordCheckBox);
    QWidget::setTabOrder(savePasswordCheckBox, buttonBox);
    QWidget::setTabOrder(buttonBox, hostEdit);
    QWidget::setTabOrder(hostEdit, portSpinBox);
    QWidget::setTabOrder(portSpinBox, resetPortButton);

    retranslateUi(QAjLoginDialogBase);
    QObject::connect(buttonBox, SIGNAL(accepted()), QAjLoginDialogBase, SLOT(accept()));
    QObject::connect(buttonBox, SIGNAL(rejected()), QAjLoginDialogBase, SLOT(reject()));

    QMetaObject::connectSlotsByName(QAjLoginDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QAjLoginDialogBase)
    {
    QAjLoginDialogBase->setWindowTitle(QApplication::translate("QAjLoginDialogBase", "Juicer Login", 0, QApplication::UnicodeUTF8));
    headerLabel->setText(QApplication::translate("QAjLoginDialogBase", "<h3>Login</h3>", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("QAjLoginDialogBase", "Host:", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("QAjLoginDialogBase", "Core-Port:", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    resetPortButton->setToolTip(QApplication::translate("QAjLoginDialogBase", "reset to default value", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    resetPortButton->setText(QApplication::translate("QAjLoginDialogBase", "default value", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("QAjLoginDialogBase", "Password:", 0, QApplication::UnicodeUTF8));
    savePasswordCheckBox->setText(QApplication::translate("QAjLoginDialogBase", "save password", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QAjLoginDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QAjLoginDialogBase: public Ui_QAjLoginDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QAJLOGINDIALOGBASE_H
