/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../CS1DLab4-master/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[15];
    char stringdata0[337];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 42), // "on_CityViewPage_customContext..."
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 3), // "pos"
QT_MOC_LITERAL(4, 59, 26), // "on_loginPushButton_clicked"
QT_MOC_LITERAL(5, 86, 26), // "on_clearPushButton_clicked"
QT_MOC_LITERAL(6, 113, 22), // "on_countryInfo_clicked"
QT_MOC_LITERAL(7, 136, 22), // "on_backButton1_clicked"
QT_MOC_LITERAL(8, 159, 22), // "on_backButton2_clicked"
QT_MOC_LITERAL(9, 182, 22), // "on_displayFood_clicked"
QT_MOC_LITERAL(10, 205, 45), // "on_startingCityComboBox_2_cur..."
QT_MOC_LITERAL(11, 251, 4), // "arg1"
QT_MOC_LITERAL(12, 256, 39), // "on_foodItemComboBox_currentIn..."
QT_MOC_LITERAL(13, 296, 4), // "text"
QT_MOC_LITERAL(14, 301, 35) // "on_startingCityComboBox_2_act..."

    },
    "MainWindow\0on_CityViewPage_customContextMenuRequested\0"
    "\0pos\0on_loginPushButton_clicked\0"
    "on_clearPushButton_clicked\0"
    "on_countryInfo_clicked\0on_backButton1_clicked\0"
    "on_backButton2_clicked\0on_displayFood_clicked\0"
    "on_startingCityComboBox_2_currentIndexChanged\0"
    "arg1\0on_foodItemComboBox_currentIndexChanged\0"
    "text\0on_startingCityComboBox_2_activated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x08 /* Private */,
       4,    0,   67,    2, 0x08 /* Private */,
       5,    0,   68,    2, 0x08 /* Private */,
       6,    0,   69,    2, 0x08 /* Private */,
       7,    0,   70,    2, 0x08 /* Private */,
       8,    0,   71,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    1,   73,    2, 0x08 /* Private */,
      12,    1,   76,    2, 0x08 /* Private */,
      14,    1,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_CityViewPage_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: _t->on_loginPushButton_clicked(); break;
        case 2: _t->on_clearPushButton_clicked(); break;
        case 3: _t->on_countryInfo_clicked(); break;
        case 4: _t->on_backButton1_clicked(); break;
        case 5: _t->on_backButton2_clicked(); break;
        case 6: _t->on_displayFood_clicked(); break;
        case 7: _t->on_startingCityComboBox_2_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_foodItemComboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->on_startingCityComboBox_2_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
