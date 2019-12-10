/****************************************************************************
** Meta object code from reading C++ file 'qajserversocket.h'
**
** Created: Sun Jan 18 14:33:56 2009
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qajserversocket.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qajserversocket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QAjServerSocket[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      22,   17,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      41,   16,   16,   16, 0x0a,
      52,   16,   16,   16, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QAjServerSocket[] = {
    "QAjServerSocket\0\0line\0lineReady(QString)\0"
    "readLine()\0newConnectionSlot()\0"
};

const QMetaObject QAjServerSocket::staticMetaObject = {
    { &QTcpServer::staticMetaObject, qt_meta_stringdata_QAjServerSocket,
      qt_meta_data_QAjServerSocket, 0 }
};

const QMetaObject *QAjServerSocket::metaObject() const
{
    return &staticMetaObject;
}

void *QAjServerSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QAjServerSocket))
        return static_cast<void*>(const_cast< QAjServerSocket*>(this));
    return QTcpServer::qt_metacast(_clname);
}

int QAjServerSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: lineReady((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: readLine(); break;
        case 2: newConnectionSlot(); break;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QAjServerSocket::lineReady(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
