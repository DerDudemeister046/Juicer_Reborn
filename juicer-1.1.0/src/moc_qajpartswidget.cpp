/****************************************************************************
** Meta object code from reading C++ file 'qajpartswidget.h'
**
** Created: Sun Jan 18 14:33:55 2009
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qajpartswidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qajpartswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QAjPartsWidget[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QAjPartsWidget[] = {
    "QAjPartsWidget\0\0painted()\0"
};

const QMetaObject QAjPartsWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QAjPartsWidget,
      qt_meta_data_QAjPartsWidget, 0 }
};

const QMetaObject *QAjPartsWidget::metaObject() const
{
    return &staticMetaObject;
}

void *QAjPartsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QAjPartsWidget))
        return static_cast<void*>(const_cast< QAjPartsWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QAjPartsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: painted(); break;
        }
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QAjPartsWidget::painted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
