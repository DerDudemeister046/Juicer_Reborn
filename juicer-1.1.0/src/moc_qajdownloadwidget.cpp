/****************************************************************************
** Meta object code from reading C++ file 'qajdownloadwidget.h'
**
** Created: Thu Nov 13 21:06:23 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qajdownloadwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qajdownloadwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QAjDownloadWidget[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      29,   19,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      84,   72,   18,   18, 0x08,
     107,   18,   18,   18, 0x08,
     119,   18,   18,   18, 0x08,
     132,   18,   18,   18, 0x08,
     145,   18,   18,   18, 0x08,
     157,   18,   18,   18, 0x08,
     172,   18,   18,   18, 0x08,
     185,   18,   18,   18, 0x08,
     202,   18,   18,   18, 0x08,
     213,   18,   18,   18, 0x08,
     232,  224,   18,   18, 0x08,
     253,   18,   18,   18, 0x08,
     283,  274,   18,   18, 0x08,
     318,   18,   18,   18, 0x08,
     349,  337,   18,   18, 0x08,
     389,  383,   18,   18, 0x0a,
     406,   18,   18,   18, 0x2a,
     419,   18,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QAjDownloadWidget[] = {
    "QAjDownloadWidget\0\0downloads\0"
    "downloadsFinished(QList<QAjDownloadItem*>)\0"
    "oneSelected\0selectionChanged(bool)\0"
    "pauseSlot()\0resumeSlot()\0cancelSlot()\0"
    "cleanSlot()\0partListSlot()\0renameSlot()\0"
    "renamePlusSlot()\0openSlot()\0linkSlot()\0"
    "checked\0hidePausedSlot(bool)\0"
    "applyPowerDownload()\0id,value\0"
    "applyPowerDownload(QString,double)\0"
    "maxPowerDownload()\0item,column\0"
    "itemChanged(QTreeWidgetItem*,int)\0"
    "force\0updateView(bool)\0updateView()\0"
    "storeDownloadFtp()\0"
};

const QMetaObject QAjDownloadWidget::staticMetaObject = {
    { &QAjListWidget::staticMetaObject, qt_meta_stringdata_QAjDownloadWidget,
      qt_meta_data_QAjDownloadWidget, 0 }
};

const QMetaObject *QAjDownloadWidget::metaObject() const
{
    return &staticMetaObject;
}

void *QAjDownloadWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QAjDownloadWidget))
        return static_cast<void*>(const_cast< QAjDownloadWidget*>(this));
    return QAjListWidget::qt_metacast(_clname);
}

int QAjDownloadWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAjListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: downloadsFinished((*reinterpret_cast< const QList<QAjDownloadItem*>(*)>(_a[1]))); break;
        case 1: selectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: pauseSlot(); break;
        case 3: resumeSlot(); break;
        case 4: cancelSlot(); break;
        case 5: cleanSlot(); break;
        case 6: partListSlot(); break;
        case 7: renameSlot(); break;
        case 8: renamePlusSlot(); break;
        case 9: openSlot(); break;
        case 10: linkSlot(); break;
        case 11: hidePausedSlot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: applyPowerDownload(); break;
        case 13: applyPowerDownload((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 14: maxPowerDownload(); break;
        case 15: itemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 16: updateView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: updateView(); break;
        case 18: storeDownloadFtp(); break;
        }
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void QAjDownloadWidget::downloadsFinished(const QList<QAjDownloadItem*> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
