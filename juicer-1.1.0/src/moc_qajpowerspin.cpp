/****************************************************************************
** Meta object code from reading C++ file 'qajpowerspin.h'
**
** Created: Sun Jan 18 14:34:12 2009
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qajpowerspin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qajpowerspin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QAjPowerSpin[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      23,   14,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      52,   13,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QAjPowerSpin[] = {
    "QAjPowerSpin\0\0id,value\0"
    "powerChanged(QString,double)\0"
    "powerChanged()\0"
};

const QMetaObject QAjPowerSpin::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QAjPowerSpin,
      qt_meta_data_QAjPowerSpin, 0 }
};

const QMetaObject *QAjPowerSpin::metaObject() const
{
    return &staticMetaObject;
}

void *QAjPowerSpin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QAjPowerSpin))
        return static_cast<void*>(const_cast< QAjPowerSpin*>(this));
    return QWidget::qt_metacast(_clname);
}

int QAjPowerSpin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: powerChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: powerChanged(); break;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QAjPowerSpin::powerChanged(const QString & _t1, double _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
