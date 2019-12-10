/****************************************************************************
** Meta object code from reading C++ file 'qajsharewidget.h'
**
** Created: Thu Nov 13 21:06:36 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qajsharewidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qajsharewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QAjShareWidget[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,
      25,   15,   15,   15, 0x05,
      34,   15,   15,   15, 0x05,
      43,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      52,   15,   15,   15, 0x0a,
      65,   15,   15,   15, 0x08,
      78,   15,   15,   15, 0x08,
      91,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QAjShareWidget[] = {
    "QAjShareWidget\0\0insert()\0remove()\0"
    "reload()\0commit()\0commitSlot()\0"
    "insertSlot()\0removeSlot()\0reloadSlot()\0"
};

const QMetaObject QAjShareWidget::staticMetaObject = {
    { &QAjListWidget::staticMetaObject, qt_meta_stringdata_QAjShareWidget,
      qt_meta_data_QAjShareWidget, 0 }
};

const QMetaObject *QAjShareWidget::metaObject() const
{
    return &staticMetaObject;
}

void *QAjShareWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QAjShareWidget))
        return static_cast<void*>(const_cast< QAjShareWidget*>(this));
    return QAjListWidget::qt_metacast(_clname);
}

int QAjShareWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAjListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: insert(); break;
        case 1: remove(); break;
        case 2: reload(); break;
        case 3: commit(); break;
        case 4: commitSlot(); break;
        case 5: insertSlot(); break;
        case 6: removeSlot(); break;
        case 7: reloadSlot(); break;
        }
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QAjShareWidget::insert()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QAjShareWidget::remove()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QAjShareWidget::reload()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QAjShareWidget::commit()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
