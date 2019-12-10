/***************************************************************************
 *   Copyright (C) 2004 by Matthias Reif                                   *
 *   matthias.reif@informatik.tu-chemnitz.de                               *
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
#ifndef QAJSHAREITEM_H
#define QAJSHAREITEM_H

#include <QString>
#include <QList>

#include "item.h"
#include "sharefileitem.h"

/**
@author Matthias Reif
*/
class ShareItem : public Item
{
public:
    ShareItem(QTreeWidget* parent, const QString& path, bool recursive);
    virtual ~ShareItem();
    QString getPath() { return path; }
    bool isRecursive() { return recursive; }
    void insertSharedFile(ShareFileItem* sharedFile);
    void update();
    enum {PATH_COL, SIZE_COL, PRIORITY_COL};
private:
    bool recursive;
    QString path;
    QList<ShareFileItem*> sharedFiles;
};

#endif
