/****************************************************************************
** Meta object code from reading C++ file 'qajdownloadmodule.h'
**
** Created: Sun Jan 18 19:52:10 2009
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qajdownloadmodule.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qajdownloadmodule.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QAjDownloadModule[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      29,   19,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      78,   72,   18,   18, 0x0a,
      95,   18,   18,   18, 0x2a,
     108,   18,   18,   18, 0x0a,
     123,   18,   18,   18, 0x09,
     136,   18,   18,   18, 0x09,
     148,   18,   18,   18, 0x09,
     161,   18,   18,   18, 0x09,
     173,   18,   18,   18, 0x09,
     186,   18,   18,   18, 0x09,
     203,   18,   18,   18, 0x09,
     214,   18,   18,   18, 0x09,
     225,   18,   18,   18, 0x09,
     249,   18,   18,   18, 0x09,
     279,  270,   18,   18, 0x09,
     314,   18,   18,   18, 0x09,
     333,   18,   18,   18, 0x09,
     352,   18,   18,   18, 0x09,
     379,  371,   18,   18, 0x09,
     400,   18,   18,   18, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QAjDownloadModule[] = {
    "QAjDownloadModule\0\0downloads\0"
    "downloadsFinished(QList<QAjDownloadItem*>)\0"
    "force\0updateView(bool)\0updateView()\0"
    "partListSlot()\0cancelSlot()\0cleanSlot()\0"
    "resumeSlot()\0pauseSlot()\0renameSlot()\0"
    "renamePlusSlot()\0openSlot()\0linkSlot()\0"
    "setMultiPowerDownload()\0applyPowerDownload()\0"
    "id,value\0applyPowerDownload(QString,double)\0"
    "maxPowerDownload()\0selectionChanged()\0"
    "storeDownloadFtp()\0checked\0"
    "hidePausedSlot(bool)\0partListWidgetSlot()\0"
};

const QMetaObject QAjDownloadModule::staticMetaObject = {
    { &QAjModuleBase::staticMetaObject, qt_meta_stringdata_QAjDownloadModule,
      qt_meta_data_QAjDownloadModule, 0 }
};

const QMetaObject *QAjDownloadModule::metaObject() const
{
    return &staticMetaObject;
}

void *QAjDownloadModule::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QAjDownloadModule))
        return static_cast<void*>(const_cast< QAjDownloadModule*>(this));
    return QAjModuleBase::qt_metacast(_clname);
}

int QAjDownloadModule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAjModuleBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: downloadsFinished((*reinterpret_cast< const QList<QAjDownloadItem*>(*)>(_a[1]))); break;
        case 1: updateView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: updateView(); break;
        case 3: partListSlot(); break;
        case 4: cancelSlot(); break;
        case 5: cleanSlot(); break;
        case 6: resumeSlot(); break;
        case 7: pauseSlot(); break;
        case 8: renameSlot(); break;
        case 9: renamePlusSlot(); break;
        case 10: openSlot(); break;
        case 11: linkSlot(); break;
        case 12: setMultiPowerDownload(); break;
        case 13: applyPowerDownload(); break;
        case 14: applyPowerDownload((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 15: maxPowerDownload(); break;
        case 16: selectionChanged(); break;
        case 17: storeDownloadFtp(); break;
        case 18: hidePausedSlot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: partListWidgetSlot(); break;
        }
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void QAjDownloadModule::downloadsFinished(const QList<QAjDownloadItem*> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
