/****************************************************************************
** Meta object code from reading C++ file 'qajsocket.h'
**
** Created: Sun Jan 18 14:33:57 2009
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qajsocket.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qajsocket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QAjSocket[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QAjSocket[] = {
    "QAjSocket\0\0connected()\0"
};

const QMetaObject QAjSocket::staticMetaObject = {
    { &QTcpSocket::staticMetaObject, qt_meta_stringdata_QAjSocket,
      qt_meta_data_QAjSocket, 0 }
};

const QMetaObject *QAjSocket::metaObject() const
{
    return &staticMetaObject;
}

void *QAjSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QAjSocket))
        return static_cast<void*>(const_cast< QAjSocket*>(this));
    return QTcpSocket::qt_metacast(_clname);
}

int QAjSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpSocket::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: connected(); break;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
