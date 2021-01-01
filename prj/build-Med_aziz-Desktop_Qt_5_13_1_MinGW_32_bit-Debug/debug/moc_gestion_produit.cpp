/****************************************************************************
** Meta object code from reading C++ file 'gestion_produit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Med_aziz/gestion_produit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gestion_produit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gestion_produit_t {
    QByteArrayData data[15];
    char stringdata0[310];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gestion_produit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gestion_produit_t qt_meta_stringdata_gestion_produit = {
    {
QT_MOC_LITERAL(0, 0, 15), // "gestion_produit"
QT_MOC_LITERAL(1, 16, 18), // "on_ajouter_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 19), // "on_modifier_clicked"
QT_MOC_LITERAL(4, 56, 20), // "on_supprimer_clicked"
QT_MOC_LITERAL(5, 77, 23), // "on_pushButton_9_clicked"
QT_MOC_LITERAL(6, 101, 24), // "on_radioButton_4_clicked"
QT_MOC_LITERAL(7, 126, 33), // "on_comboBox_13_currentTextCha..."
QT_MOC_LITERAL(8, 160, 4), // "arg1"
QT_MOC_LITERAL(9, 165, 23), // "on_lineEdit_textChanged"
QT_MOC_LITERAL(10, 189, 19), // "on_checkBox_clicked"
QT_MOC_LITERAL(11, 209, 7), // "checked"
QT_MOC_LITERAL(12, 217, 33), // "on_comboBox_12_currentTextCha..."
QT_MOC_LITERAL(13, 251, 33), // "on_comboBox_14_currentTextCha..."
QT_MOC_LITERAL(14, 285, 24) // "on_pushButton_10_clicked"

    },
    "gestion_produit\0on_ajouter_clicked\0\0"
    "on_modifier_clicked\0on_supprimer_clicked\0"
    "on_pushButton_9_clicked\0"
    "on_radioButton_4_clicked\0"
    "on_comboBox_13_currentTextChanged\0"
    "arg1\0on_lineEdit_textChanged\0"
    "on_checkBox_clicked\0checked\0"
    "on_comboBox_12_currentTextChanged\0"
    "on_comboBox_14_currentTextChanged\0"
    "on_pushButton_10_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gestion_produit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    1,   74,    2, 0x08 /* Private */,
       9,    1,   77,    2, 0x08 /* Private */,
      10,    1,   80,    2, 0x08 /* Private */,
      12,    1,   83,    2, 0x08 /* Private */,
      13,    1,   86,    2, 0x08 /* Private */,
      14,    0,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,

       0        // eod
};

void gestion_produit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<gestion_produit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_ajouter_clicked(); break;
        case 1: _t->on_modifier_clicked(); break;
        case 2: _t->on_supprimer_clicked(); break;
        case 3: _t->on_pushButton_9_clicked(); break;
        case 4: _t->on_radioButton_4_clicked(); break;
        case 5: _t->on_comboBox_13_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_checkBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_comboBox_12_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->on_comboBox_14_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->on_pushButton_10_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gestion_produit::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_gestion_produit.data,
    qt_meta_data_gestion_produit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gestion_produit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gestion_produit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gestion_produit.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int gestion_produit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
