/****************************************************************************
** Meta object code from reading C++ file 'qajsearchwidget.h'
**
** Created: Thu Nov 13 21:06:31 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qajsearchwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qajsearchwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QAjSearchWidget[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x08,
      30,   16,   16,   16, 0x08,
      45,   16,   16,   16, 0x08,
      58,   16,   16,   16, 0x08,
      81,   69,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QAjSearchWidget[] = {
    "QAjSearchWidget\0\0removeSlot()\0"
    "downloadSlot()\0searchSlot()\0linkSlot()\0"
    "oneSelected\0selectionChanged(bool)\0"
};

const QMetaObject QAjSearchWidget::staticMetaObject = {
    { &QAjListWidget::staticMetaObject, qt_meta_stringdata_QAjSearchWidget,
      qt_meta_data_QAjSearchWidget, 0 }
};

const QMetaObject *QAjSearchWidget::metaObject() const
{
    return &staticMetaObject;
}

void *QAjSearchWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QAjSearchWidget))
        return static_cast<void*>(const_cast< QAjSearchWidget*>(this));
    return QAjListWidget::qt_metacast(_clname);
}

int QAjSearchWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAjListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: removeSlot(); break;
        case 1: downloadSlot(); break;
        case 2: searchSlot(); break;
        case 3: linkSlot(); break;
        case 4: selectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
