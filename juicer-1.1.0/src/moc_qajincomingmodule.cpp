/****************************************************************************
** Meta object code from reading C++ file 'qajincomingmodule.h'
**
** Created: Sun Jan 18 16:43:41 2009
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qajincomingmodule.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qajincomingmodule.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QAjIncomingModule[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x0a,
      28,   18,   18,   18, 0x0a,
      35,   18,   18,   18, 0x0a,
      42,   18,   18,   18, 0x0a,
      56,   51,   18,   18, 0x0a,
      73,   18,   18,   18, 0x0a,
     104,   92,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QAjIncomingModule[] = {
    "QAjIncomingModule\0\0reload()\0open()\0"
    "copy()\0remove()\0info\0insert(QUrlInfo)\0"
    "selectionChanged()\0dstFile,ftp\0"
    "ftpReadyRead(QFile*,FTP*)\0"
};

const QMetaObject QAjIncomingModule::staticMetaObject = {
    { &QAjModuleBase::staticMetaObject, qt_meta_stringdata_QAjIncomingModule,
      qt_meta_data_QAjIncomingModule, 0 }
};

const QMetaObject *QAjIncomingModule::metaObject() const
{
    return &staticMetaObject;
}

void *QAjIncomingModule::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QAjIncomingModule))
        return static_cast<void*>(const_cast< QAjIncomingModule*>(this));
    return QAjModuleBase::qt_metacast(_clname);
}

int QAjIncomingModule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAjModuleBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: reload(); break;
        case 1: open(); break;
        case 2: copy(); break;
        case 3: remove(); break;
        case 4: insert((*reinterpret_cast< QUrlInfo(*)>(_a[1]))); break;
        case 5: selectionChanged(); break;
        case 6: ftpReadyRead((*reinterpret_cast< QFile*(*)>(_a[1])),(*reinterpret_cast< FTP*(*)>(_a[2]))); break;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
