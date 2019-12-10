//
// C++ Implementation: 
//
// Description: 
//
//
// Author: Matthias Reif <matthias.reif@informatik.tu-chemnitz.de>, (C) 2007
//
// Copyright: See COPYING file that comes with this distribution
//
//


#include "logindialog.h"

LoginDialog::LoginDialog(QWidget* parent, Qt::WFlags fl): QDialog( parent, fl ), Ui::LoginDialogBase()
{
    setupUi(this);
    connect(buttonBox, SIGNAL(clicked(QAbstractButton*)), this, SLOT(clicked(QAbstractButton*)));
    connect(resetPortButton, SIGNAL(clicked()), this, SLOT(resetPort()));
}

LoginDialog::~LoginDialog()
{
}


/*!
    \fn LoginDialog::clicked(QAbstractButton* button)
 */
void LoginDialog::clicked(QAbstractButton* button)
{
	ignore = (buttonBox->standardButton(button) == QDialogButtonBox::Ignore);
}


/*!
    \fn LoginDialog::resetPort()
 */
void LoginDialog::resetPort()
{
    portSpinBox->setValue(9851);
}
