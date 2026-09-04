/****************************************************************************
** Meta object code from reading C++ file 'UsersPage.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/modules/users/UsersPage.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UsersPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.11.2. It"
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
struct qt_meta_tag_ZN9UsersPageE_t {};
} // unnamed namespace

template <> constexpr inline auto UsersPage::qt_create_metaobjectdata<qt_meta_tag_ZN9UsersPageE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "UsersPage",
        "onFullNameTextEdited",
        "",
        "reportLoginNameStatus",
        "reportHostNameStatus",
        "onReuseUserPasswordChanged",
        "reportUserPasswordStatus",
        "reportRootPasswordStatus",
        "onActiveDirectoryToggled",
        "checked"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onFullNameTextEdited'
        QtMocHelpers::SlotData<void(const QString &)>(1, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'reportLoginNameStatus'
        QtMocHelpers::SlotData<void(const QString &)>(3, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'reportHostNameStatus'
        QtMocHelpers::SlotData<void(const QString &)>(4, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'onReuseUserPasswordChanged'
        QtMocHelpers::SlotData<void(const int)>(5, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'reportUserPasswordStatus'
        QtMocHelpers::SlotData<void(int, const QString &)>(6, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 2 }, { QMetaType::QString, 2 },
        }}),
        // Slot 'reportRootPasswordStatus'
        QtMocHelpers::SlotData<void(int, const QString &)>(7, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 2 }, { QMetaType::QString, 2 },
        }}),
        // Slot 'onActiveDirectoryToggled'
        QtMocHelpers::SlotData<void(bool)>(8, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Bool, 9 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<UsersPage, qt_meta_tag_ZN9UsersPageE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject UsersPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9UsersPageE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9UsersPageE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9UsersPageE_t>.metaTypes,
    nullptr
} };

void UsersPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<UsersPage *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onFullNameTextEdited((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->reportLoginNameStatus((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->reportHostNameStatus((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->onReuseUserPasswordChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->reportUserPasswordStatus((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 5: _t->reportRootPasswordStatus((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 6: _t->onActiveDirectoryToggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *UsersPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UsersPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9UsersPageE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int UsersPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
