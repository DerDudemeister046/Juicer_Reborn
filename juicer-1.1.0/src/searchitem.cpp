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
#include "searchitem.h"

SearchItem::SearchItem( QString id, QTreeWidget* parent ) : Item( parent, id )
{
    hits = 0;
    entriesCount = 0;
}

SearchItem::~SearchItem()
{}

SearchEntryItem* SearchItem::findSearchEntry( QString id )
{
    if ( entries.contains( id ) )
        return entries[ id ];
    else
        return NULL;
}

bool SearchItem::operator<( const QTreeWidgetItem & other ) const
{
    int sortIndex = treeWidget()->header()->sortIndicatorSection();


    Item* item = (Item*)&other;
    {
        SearchItem* searchItem = (SearchItem*)item;
        switch ( sortIndex )
        {
        case TEXT_COL:
            return this->text( TEXT_COL ) < other.text( TEXT_COL );
//         case SIZE_COL:
//             return size < ->getHits();
        case COUNT_COL:
            return this->hits < searchItem->getHits();
        default:
            return this->text( sortIndex ) < other.text( sortIndex );
        }
    }

}
