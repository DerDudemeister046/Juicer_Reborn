/****************************************************************************
** Meta object code from reading C++ file 'qajsearchmodule.h'
**
** Created: Sun Jan 18 16:43:35 2009
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qajsearchmodule.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qajsearchmodule.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QAjSearchModule[] = {

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
      69,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QAjSearchModule[] = {
    "QAjSearchModule\0\0removeSlot()\0"
    "downloadSlot()\0searchSlot()\0linkSlot()\0"
    "selectionChanged()\0"
};

const QMetaObject QAjSearchModule::staticMetaObject = {
    { &QAjModuleBase::staticMetaObject, qt_meta_stringdata_QAjSearchModule,
      qt_meta_data_QAjSearchModule, 0 }
};

const QMetaObject *QAjSearchModule::metaObject() const
{
    return &staticMetaObject;
}

void *QAjSearchModule::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QAjSearchModule))
        return static_cast<void*>(const_cast< QAjSearchModule*>(this));
    return QAjModuleBase::qt_metacast(_clname);
}

int QAjSearchModule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAjModuleBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: removeSlot(); break;
        case 1: downloadSlot(); break;
        case 2: searchSlot(); break;
        case 3: linkSlot(); break;
        case 4: selectionChanged(); break;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
