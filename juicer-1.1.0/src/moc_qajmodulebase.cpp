/****************************************************************************
** Meta object code from reading C++ file 'qajmodulebase.h'
**
** Created: Sun Jan 18 16:43:36 2009
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qajmodulebase.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qajmodulebase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QAjModuleBase[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      37,   14,   14,   14, 0x09,
      52,   14,   14,   14, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QAjModuleBase[] = {
    "QAjModuleBase\0\0adjustSizeOfColumns()\0"
    "linkListSlot()\0selectionChanged()\0"
};

const QMetaObject QAjModuleBase::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QAjModuleBase,
      qt_meta_data_QAjModuleBase, 0 }
};

const QMetaObject *QAjModuleBase::metaObject() const
{
    return &staticMetaObject;
}

void *QAjModuleBase::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QAjModuleBase))
        return static_cast<void*>(const_cast< QAjModuleBase*>(this));
    return QObject::qt_metacast(_clname);
}

int QAjModuleBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: adjustSizeOfColumns(); break;
        case 1: linkListSlot(); break;
        case 2: selectionChanged(); break;
        }
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_DockMain[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets

       0        // eod
};

static const char qt_meta_stringdata_DockMain[] = {
    "DockMain\0"
};

const QMetaObject DockMain::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_DockMain,
      qt_meta_data_DockMain, 0 }
};

const QMetaObject *DockMain::metaObject() const
{
    return &staticMetaObject;
}

void *DockMain::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DockMain))
        return static_cast<void*>(const_cast< DockMain*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int DockMain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
