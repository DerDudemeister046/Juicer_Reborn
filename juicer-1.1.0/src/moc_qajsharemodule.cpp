/****************************************************************************
** Meta object code from reading C++ file 'qajsharemodule.h'
**
** Created: Sun Jan 18 17:11:06 2009
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qajsharemodule.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qajsharemodule.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QAjShareModule[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x0a,
      29,   15,   15,   15, 0x0a,
      48,   15,   15,   15, 0x08,
      61,   15,   15,   15, 0x08,
      74,   15,   15,   15, 0x08,
      87,   15,   15,   15, 0x08,
     103,   98,   15,   15, 0x08,
     123,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QAjShareModule[] = {
    "QAjShareModule\0\0commitSlot()\0"
    "selectionChanged()\0insertSlot()\0"
    "removeSlot()\0reloadSlot()\0linkSlot()\0"
    "prio\0setTmpPriority(int)\0setPriority()\0"
};

const QMetaObject QAjShareModule::staticMetaObject = {
    { &QAjModuleBase::staticMetaObject, qt_meta_stringdata_QAjShareModule,
      qt_meta_data_QAjShareModule, 0 }
};

const QMetaObject *QAjShareModule::metaObject() const
{
    return &staticMetaObject;
}

void *QAjShareModule::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QAjShareModule))
        return static_cast<void*>(const_cast< QAjShareModule*>(this));
    return QAjModuleBase::qt_metacast(_clname);
}

int QAjShareModule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAjModuleBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: commitSlot(); break;
        case 1: selectionChanged(); break;
        case 2: insertSlot(); break;
        case 3: removeSlot(); break;
        case 4: reloadSlot(); break;
        case 5: linkSlot(); break;
        case 6: setTmpPriority((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: setPriority(); break;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
