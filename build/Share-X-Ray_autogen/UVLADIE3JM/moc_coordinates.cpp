/****************************************************************************
** Meta object code from reading C++ file 'coordinates.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Share-X-Ray/src/coordinates.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'coordinates.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Coordinates_t {
    QByteArrayData data[9];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Coordinates_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Coordinates_t qt_meta_stringdata_Coordinates = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Coordinates"
QT_MOC_LITERAL(1, 12, 11), // "QML.Element"
QT_MOC_LITERAL(2, 24, 4), // "auto"
QT_MOC_LITERAL(3, 29, 9), // "serialize"
QT_MOC_LITERAL(4, 39, 0), // ""
QT_MOC_LITERAL(5, 40, 11), // "deserialize"
QT_MOC_LITERAL(6, 52, 9), // "xmlString"
QT_MOC_LITERAL(7, 62, 2), // "dx"
QT_MOC_LITERAL(8, 65, 2) // "dy"

    },
    "Coordinates\0QML.Element\0auto\0serialize\0"
    "\0deserialize\0xmlString\0dx\0dy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Coordinates[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
       2,   16, // methods
       2,   30, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,

 // methods: name, argc, parameters, tag, flags
       3,    0,   26,    4, 0x02 /* Public */,
       5,    1,   27,    4, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    6,

 // properties: name, type, flags
       7, QMetaType::Double, 0x00095103,
       8, QMetaType::Double, 0x00095103,

       0        // eod
};

void Coordinates::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Coordinates *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->serialize();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->deserialize((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Coordinates *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->dx(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->dy(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Coordinates *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDx(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setDy(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Coordinates::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Coordinates.data,
    qt_meta_data_Coordinates,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Coordinates::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Coordinates::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Coordinates.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Coordinates::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
