/***************************************************************************
 *   Copyright (C) 2007 by Matthias Reif   *
 *   matthias.reif@informatik.tu-chemnitz.de   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#ifndef QAJICONWIDGET_H
#define QAJICONWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QBoxLayout>

/**
	@author Matthias Reif <matthias.reif@informatik.tu-chemnitz.de>
*/
class IconWidget : public QWidget
{
Q_OBJECT
public:
    IconWidget(QString icon, QString text, QBoxLayout::Direction dir, QWidget *parent = 0, int spacing = -1, int margin = 9);

    ~IconWidget();
    void setText( const QString& text );

private:
    QLabel *iconLabel, *textLabel;
};

#endif
