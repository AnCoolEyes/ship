/****************************************************************************
** Meta object code from reading C++ file 'control.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../control.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'control.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_control_t {
    QByteArrayData data[14];
    char stringdata0[206];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_control_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_control_t qt_meta_stringdata_control = {
    {
QT_MOC_LITERAL(0, 0, 7), // "control"
QT_MOC_LITERAL(1, 8, 18), // "on_forward_clicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 15), // "on_stop_clicked"
QT_MOC_LITERAL(4, 44, 19), // "on_backward_clicked"
QT_MOC_LITERAL(5, 64, 14), // "on_One_clicked"
QT_MOC_LITERAL(6, 79, 14), // "on_Two_clicked"
QT_MOC_LITERAL(7, 94, 15), // "on_Zero_clicked"
QT_MOC_LITERAL(8, 110, 15), // "on_beat_clicked"
QT_MOC_LITERAL(9, 126, 13), // "on_go_clicked"
QT_MOC_LITERAL(10, 140, 15), // "on_left_clicked"
QT_MOC_LITERAL(11, 156, 16), // "on_pause_clicked"
QT_MOC_LITERAL(12, 173, 16), // "on_right_clicked"
QT_MOC_LITERAL(13, 190, 15) // "on_back_clicked"

    },
    "control\0on_forward_clicked\0\0on_stop_clicked\0"
    "on_backward_clicked\0on_One_clicked\0"
    "on_Two_clicked\0on_Zero_clicked\0"
    "on_beat_clicked\0on_go_clicked\0"
    "on_left_clicked\0on_pause_clicked\0"
    "on_right_clicked\0on_back_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_control[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void control::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<control *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_forward_clicked(); break;
        case 1: _t->on_stop_clicked(); break;
        case 2: _t->on_backward_clicked(); break;
        case 3: _t->on_One_clicked(); break;
        case 4: _t->on_Two_clicked(); break;
        case 5: _t->on_Zero_clicked(); break;
        case 6: _t->on_beat_clicked(); break;
        case 7: _t->on_go_clicked(); break;
        case 8: _t->on_left_clicked(); break;
        case 9: _t->on_pause_clicked(); break;
        case 10: _t->on_right_clicked(); break;
        case 11: _t->on_back_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject control::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_control.data,
    qt_meta_data_control,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *control::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *control::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_control.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int control::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
