/****************************************************************************
** Meta object code from reading C++ file 'motor.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MotorTest/motor.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'motor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSmotorENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSmotorENDCLASS = QtMocHelpers::stringData(
    "motor",
    "dischage_chage",
    "",
    "quint16*",
    "Make_Curve_Time",
    "Make_Curve",
    "Dog_Time",
    "on_pushButton_clicked",
    "on_pushButton_2_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSmotorENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[6];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[16];
    char stringdata5[11];
    char stringdata6[9];
    char stringdata7[22];
    char stringdata8[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSmotorENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSmotorENDCLASS_t qt_meta_stringdata_CLASSmotorENDCLASS = {
    {
        QT_MOC_LITERAL(0, 5),  // "motor"
        QT_MOC_LITERAL(6, 14),  // "dischage_chage"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 8),  // "quint16*"
        QT_MOC_LITERAL(31, 15),  // "Make_Curve_Time"
        QT_MOC_LITERAL(47, 10),  // "Make_Curve"
        QT_MOC_LITERAL(58, 8),  // "Dog_Time"
        QT_MOC_LITERAL(67, 21),  // "on_pushButton_clicked"
        QT_MOC_LITERAL(89, 23)   // "on_pushButton_2_clicked"
    },
    "motor",
    "dischage_chage",
    "",
    "quint16*",
    "Make_Curve_Time",
    "Make_Curve",
    "Dog_Time",
    "on_pushButton_clicked",
    "on_pushButton_2_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmotorENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   50,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   57,    2, 0x08,    5 /* Private */,
       5,    0,   58,    2, 0x08,    6 /* Private */,
       6,    0,   59,    2, 0x08,    7 /* Private */,
       7,    0,   60,    2, 0x08,    8 /* Private */,
       8,    0,   61,    2, 0x08,    9 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 3, QMetaType::UInt,    2,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject motor::staticMetaObject = { {
    QMetaObject::SuperData::link<QGroupBox::staticMetaObject>(),
    qt_meta_stringdata_CLASSmotorENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmotorENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmotorENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<motor, std::true_type>,
        // method 'dischage_chage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint16 *, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint, std::false_type>,
        // method 'Make_Curve_Time'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Make_Curve'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Dog_Time'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void motor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<motor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dischage_chage((*reinterpret_cast< std::add_pointer_t<quint32>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint16*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<uint>>(_a[3]))); break;
        case 1: _t->Make_Curve_Time(); break;
        case 2: _t->Make_Curve(); break;
        case 3: _t->Dog_Time(); break;
        case 4: _t->on_pushButton_clicked(); break;
        case 5: _t->on_pushButton_2_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (motor::*)(quint32 , quint16 * , uint );
            if (_t _q_method = &motor::dischage_chage; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *motor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *motor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmotorENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QGroupBox::qt_metacast(_clname);
}

int motor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void motor::dischage_chage(quint32 _t1, quint16 * _t2, uint _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
