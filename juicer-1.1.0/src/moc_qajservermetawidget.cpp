/****************************************************************************
** Meta object code from reading C++ file 'qajservermetawidget.h'
**
** Created: Thu Nov 13 21:06:47 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qajservermetawidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qajservermetawidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QAjServerMetaWidget[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      26,   21,   20,   20, 0x08,
      81,   73,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QAjServerMetaWidget[] = {
    "QAjServerMetaWidget\0\0area\0"
    "welcomeDockLocationChanged(Qt::DockWidgetArea)\0"
    "visible\0dockVisibleSlot(bool)\0"
};

const QMetaObject QAjServerMetaWidget::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QAjServerMetaWidget,
      qt_meta_data_QAjServerMetaWidget, 0 }
};

const QMetaObject *QAjServerMetaWidget::metaObject() const
{
    return &staticMetaObject;
}

void *QAjServerMetaWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QAjServerMetaWidget))
        return static_cast<void*>(const_cast< QAjServerMetaWidget*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int QAjServerMetaWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: welcomeDockLocationChanged((*reinterpret_cast< Qt::DockWidgetArea(*)>(_a[1]))); break;
        case 1: dockVisibleSlot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
