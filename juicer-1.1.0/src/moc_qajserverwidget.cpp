/****************************************************************************
** Meta object code from reading C++ file 'qajserverwidget.h'
**
** Created: Thu Nov 13 21:06:34 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qajserverwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qajserverwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QAjServerWidget[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      26,   16,   16,   16, 0x05,
      36,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      43,   16,   16,   16, 0x0a,
      54,   16,   16,   16, 0x0a,
      67,   16,   16,   16, 0x0a,
      90,   81,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QAjServerWidget[] = {
    "QAjServerWidget\0\0remove()\0connect()\0"
    "find()\0findSlot()\0removeSlot()\0"
    "connectSlot()\0id,error\0gotServer(int,bool)\0"
};

const QMetaObject QAjServerWidget::staticMetaObject = {
    { &QAjListWidget::staticMetaObject, qt_meta_stringdata_QAjServerWidget,
      qt_meta_data_QAjServerWidget, 0 }
};

const QMetaObject *QAjServerWidget::metaObject() const
{
    return &staticMetaObject;
}

void *QAjServerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QAjServerWidget))
        return static_cast<void*>(const_cast< QAjServerWidget*>(this));
    return QAjListWidget::qt_metacast(_clname);
}

int QAjServerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAjListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: remove(); break;
        case 1: connect(); break;
        case 2: find(); break;
        case 3: findSlot(); break;
        case 4: removeSlot(); break;
        case 5: connectSlot(); break;
        case 6: gotServer((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        }
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QAjServerWidget::remove()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QAjServerWidget::connect()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QAjServerWidget::find()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
