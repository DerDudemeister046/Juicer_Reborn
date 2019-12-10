/****************************************************************************
** Meta object code from reading C++ file 'qajservermodule.h'
**
** Created: Sun Jan 18 16:43:37 2009
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qajservermodule.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qajservermodule.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QAjServerModule[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      26,   16,   16,   16, 0x05,
      36,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      43,   16,   16,   16, 0x0a,
      57,   16,   16,   16, 0x0a,
      70,   16,   16,   16, 0x0a,
      92,   83,   16,   16, 0x0a,
     112,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QAjServerModule[] = {
    "QAjServerModule\0\0remove()\0connect()\0"
    "find()\0connectSlot()\0removeSlot()\0"
    "searchSlot()\0id,error\0gotServer(int,bool)\0"
    "selectionChanged()\0"
};

const QMetaObject QAjServerModule::staticMetaObject = {
    { &QAjModuleBase::staticMetaObject, qt_meta_stringdata_QAjServerModule,
      qt_meta_data_QAjServerModule, 0 }
};

const QMetaObject *QAjServerModule::metaObject() const
{
    return &staticMetaObject;
}

void *QAjServerModule::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QAjServerModule))
        return static_cast<void*>(const_cast< QAjServerModule*>(this));
    return QAjModuleBase::qt_metacast(_clname);
}

int QAjServerModule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAjModuleBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: remove(); break;
        case 1: connect(); break;
        case 2: find(); break;
        case 3: connectSlot(); break;
        case 4: removeSlot(); break;
        case 5: searchSlot(); break;
        case 6: gotServer((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: selectionChanged(); break;
        }
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QAjServerModule::remove()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QAjServerModule::connect()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QAjServerModule::find()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
