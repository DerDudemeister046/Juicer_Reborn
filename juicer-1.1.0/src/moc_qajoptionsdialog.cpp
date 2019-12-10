/****************************************************************************
** Meta object code from reading C++ file 'qajoptionsdialog.h'
**
** Created: Sun Jan 18 16:43:24 2009
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qajoptionsdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qajoptionsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QAjOptionsDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x09,
      38,   17,   17,   17, 0x09,
      54,   17,   17,   17, 0x09,
      82,   17,   17,   17, 0x09,
     106,   17,   17,   17, 0x09,
     131,  123,   17,   17, 0x09,
     158,   17,   17,   17, 0x09,
     174,   17,   17,   17, 0x09,
     194,  189,   17,   17, 0x09,
     214,   17,   17,   17, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QAjOptionsDialog[] = {
    "QAjOptionsDialog\0\0selectIncomingDir()\0"
    "selectTempDir()\0selectIncomingDirSpecific()\0"
    "selectTempDirSpecific()\0selectLauncher()\0"
    "checked\0specificRadioToggled(bool)\0"
    "jumpToFtpSlot()\0acceptedSlot()\0font\0"
    "setFontSizes(QFont)\0setAjfspHandler()\0"
};

const QMetaObject QAjOptionsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QAjOptionsDialog,
      qt_meta_data_QAjOptionsDialog, 0 }
};

const QMetaObject *QAjOptionsDialog::metaObject() const
{
    return &staticMetaObject;
}

void *QAjOptionsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QAjOptionsDialog))
        return static_cast<void*>(const_cast< QAjOptionsDialog*>(this));
    if (!strcmp(_clname, "Ui::QAjOptionsDialogBase"))
        return static_cast< Ui::QAjOptionsDialogBase*>(const_cast< QAjOptionsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QAjOptionsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: selectIncomingDir(); break;
        case 1: selectTempDir(); break;
        case 2: selectIncomingDirSpecific(); break;
        case 3: selectTempDirSpecific(); break;
        case 4: selectLauncher(); break;
        case 5: specificRadioToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: jumpToFtpSlot(); break;
        case 7: acceptedSlot(); break;
        case 8: setFontSizes((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 9: setAjfspHandler(); break;
        }
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
