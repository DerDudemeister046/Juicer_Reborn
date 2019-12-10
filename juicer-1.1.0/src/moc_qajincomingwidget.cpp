/****************************************************************************
** Meta object code from reading C++ file 'qajincomingwidget.h'
**
** Created: Thu Nov 13 21:06:49 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qajincomingwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qajincomingwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QAjIncomingWidget[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x0a,
      28,   18,   18,   18, 0x0a,
      35,   18,   18,   18, 0x0a,
      42,   18,   18,   18, 0x0a,
      56,   51,   18,   18, 0x0a,
      85,   73,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QAjIncomingWidget[] = {
    "QAjIncomingWidget\0\0reload()\0open()\0"
    "save()\0remove()\0info\0insert(QUrlInfo)\0"
    "dstFile,ftp\0ftpReadyRead(QFile*,FTP*)\0"
};

const QMetaObject QAjIncomingWidget::staticMetaObject = {
    { &QAjListWidget::staticMetaObject, qt_meta_stringdata_QAjIncomingWidget,
      qt_meta_data_QAjIncomingWidget, 0 }
};

const QMetaObject *QAjIncomingWidget::metaObject() const
{
    return &staticMetaObject;
}

void *QAjIncomingWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QAjIncomingWidget))
        return static_cast<void*>(const_cast< QAjIncomingWidget*>(this));
    return QAjListWidget::qt_metacast(_clname);
}

int QAjIncomingWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAjListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: reload(); break;
        case 1: open(); break;
        case 2: save(); break;
        case 3: remove(); break;
        case 4: insert((*reinterpret_cast< QUrlInfo(*)>(_a[1]))); break;
        case 5: ftpReadyRead((*reinterpret_cast< QFile*(*)>(_a[1])),(*reinterpret_cast< FTP*(*)>(_a[2]))); break;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
