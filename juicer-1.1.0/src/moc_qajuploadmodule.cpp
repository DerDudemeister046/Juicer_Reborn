/****************************************************************************
** Meta object code from reading C++ file 'qajuploadmodule.h'
**
** Created: Sun Jan 18 16:43:33 2009
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qajuploadmodule.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qajuploadmodule.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QAjUploadModule[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x0a,
      39,   16,   16,   16, 0x0a,
      66,   58,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QAjUploadModule[] = {
    "QAjUploadModule\0\0adjustSizeOfColumns()\0"
    "selectionChanged()\0checked\0"
    "hideQueuedSlot(bool)\0"
};

const QMetaObject QAjUploadModule::staticMetaObject = {
    { &QAjModuleBase::staticMetaObject, qt_meta_stringdata_QAjUploadModule,
      qt_meta_data_QAjUploadModule, 0 }
};

const QMetaObject *QAjUploadModule::metaObject() const
{
    return &staticMetaObject;
}

void *QAjUploadModule::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QAjUploadModule))
        return static_cast<void*>(const_cast< QAjUploadModule*>(this));
    return QAjModuleBase::qt_metacast(_clname);
}

int QAjUploadModule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAjModuleBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: adjustSizeOfColumns(); break;
        case 1: selectionChanged(); break;
        case 2: hideQueuedSlot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
