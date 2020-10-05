/****************************************************************************
** Meta object code from reading C++ file 'CustomVacation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../CS1DLab4-master/CustomVacation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CustomVacation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CustomVacation_t {
    QByteArrayData data[14];
    char stringdata0[262];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CustomVacation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CustomVacation_t qt_meta_stringdata_CustomVacation = {
    {
QT_MOC_LITERAL(0, 0, 14), // "CustomVacation"
QT_MOC_LITERAL(1, 15, 36), // "on_listWidgetFirst_itemDouble..."
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(4, 70, 4), // "item"
QT_MOC_LITERAL(5, 75, 23), // "pushButtonFirst_clicked"
QT_MOC_LITERAL(6, 99, 24), // "pushButtonSecond_clicked"
QT_MOC_LITERAL(7, 124, 23), // "pushButtonFood1_clicked"
QT_MOC_LITERAL(8, 148, 23), // "pushButtonFood2_clicked"
QT_MOC_LITERAL(9, 172, 17), // "populateStartCity"
QT_MOC_LITERAL(10, 190, 11), // "updateTotal"
QT_MOC_LITERAL(11, 202, 27), // "on_thirteenCityPlan_clicked"
QT_MOC_LITERAL(12, 230, 23), // "on_bookYourTrip_clicked"
QT_MOC_LITERAL(13, 254, 7) // "checked"

    },
    "CustomVacation\0on_listWidgetFirst_itemDoubleClicked\0"
    "\0QListWidgetItem*\0item\0pushButtonFirst_clicked\0"
    "pushButtonSecond_clicked\0"
    "pushButtonFood1_clicked\0pushButtonFood2_clicked\0"
    "populateStartCity\0updateTotal\0"
    "on_thirteenCityPlan_clicked\0"
    "on_bookYourTrip_clicked\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CustomVacation[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    1,   66,    2, 0x08 /* Private */,
      10,    0,   69,    2, 0x08 /* Private */,
      11,    0,   70,    2, 0x08 /* Private */,
      12,    1,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,

       0        // eod
};

void CustomVacation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CustomVacation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_listWidgetFirst_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->pushButtonFirst_clicked(); break;
        case 2: _t->pushButtonSecond_clicked(); break;
        case 3: _t->pushButtonFood1_clicked(); break;
        case 4: _t->pushButtonFood2_clicked(); break;
        case 5: _t->populateStartCity((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 6: _t->updateTotal(); break;
        case 7: _t->on_thirteenCityPlan_clicked(); break;
        case 8: _t->on_bookYourTrip_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CustomVacation::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CustomVacation.data,
    qt_meta_data_CustomVacation,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CustomVacation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CustomVacation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CustomVacation.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CustomVacation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
