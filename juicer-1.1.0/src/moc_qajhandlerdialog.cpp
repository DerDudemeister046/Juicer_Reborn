/****************************************************************************
** Meta object code from reading C++ file 'qajhandlerdialog.h'
**
** Created: Sun Jan 18 16:43:30 2009
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qajhandlerdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qajhandlerdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QAjHandlerDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x09,
      27,   17,   17,   17, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QAjHandlerDialog[] = {
    "QAjHandlerDialog\0\0reject()\0accept()\0"
};

const QMetaObject QAjHandlerDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QAjHandlerDialog,
      qt_meta_data_QAjHandlerDialog, 0 }
};

const QMetaObject *QAjHandlerDialog::metaObject() const
{
    return &staticMetaObject;
}

void *QAjHandlerDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QAjHandlerDialog))
        return static_cast<void*>(const_cast< QAjHandlerDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QAjHandlerDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: reject(); break;
        case 1: accept(); break;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
