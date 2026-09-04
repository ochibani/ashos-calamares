/****************************************************************************
** Meta object code from reading C++ file 'Config.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/modules/users/Config.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Config.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6ConfigE_t {};
} // unnamed namespace

template <> constexpr inline auto Config::qt_create_metaobjectdata<qt_meta_tag_ZN6ConfigE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Config",
        "userShellChanged",
        "",
        "autoLoginGroupChanged",
        "sudoersGroupChanged",
        "fullNameChanged",
        "loginNameChanged",
        "loginNameStatusChanged",
        "hostnameChanged",
        "hostnameStatusChanged",
        "autoLoginChanged",
        "reuseUserPasswordForRootChanged",
        "requireStrongPasswordsChanged",
        "userPasswordChanged",
        "userPasswordSecondaryChanged",
        "userPasswordStatusChanged",
        "rootPasswordChanged",
        "rootPasswordSecondaryChanged",
        "rootPasswordStatusChanged",
        "readyChanged",
        "setUserShell",
        "path",
        "setAutoLoginGroup",
        "group",
        "setSudoersGroup",
        "setFullName",
        "name",
        "setLoginName",
        "login",
        "setHostName",
        "host",
        "setAutoLogin",
        "b",
        "setReuseUserPasswordForRoot",
        "reuse",
        "setRequireStrongPasswords",
        "strong",
        "setUserPassword",
        "setUserPasswordSecondary",
        "setRootPassword",
        "setRootPasswordSecondary",
        "setActiveDirectoryUsed",
        "used",
        "setActiveDirectoryAdminUsername",
        "setActiveDirectoryAdminPassword",
        "setActiveDirectoryDomain",
        "setActiveDirectoryIP",
        "userShell",
        "autoLoginGroup",
        "sudoersGroup",
        "doAutoLogin",
        "fullName",
        "loginName",
        "loginNameStatus",
        "hostname",
        "hostnameStatus",
        "hostnameAction",
        "HostNameAction",
        "userPassword",
        "userPasswordSecondary",
        "userPasswordValidity",
        "userPasswordMessage",
        "rootPassword",
        "rootPasswordSecondary",
        "rootPasswordValidity",
        "rootPasswordMessage",
        "writeRootPassword",
        "reuseUserPasswordForRoot",
        "permitWeakPasswords",
        "requireStrongPasswords",
        "ready"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'userShellChanged'
        QtMocHelpers::SignalData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'autoLoginGroupChanged'
        QtMocHelpers::SignalData<void(const QString &)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'sudoersGroupChanged'
        QtMocHelpers::SignalData<void(const QString &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'fullNameChanged'
        QtMocHelpers::SignalData<void(const QString &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'loginNameChanged'
        QtMocHelpers::SignalData<void(const QString &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'loginNameStatusChanged'
        QtMocHelpers::SignalData<void(const QString &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'hostnameChanged'
        QtMocHelpers::SignalData<void(const QString &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'hostnameStatusChanged'
        QtMocHelpers::SignalData<void(const QString &)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'autoLoginChanged'
        QtMocHelpers::SignalData<void(bool)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'reuseUserPasswordForRootChanged'
        QtMocHelpers::SignalData<void(bool)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'requireStrongPasswordsChanged'
        QtMocHelpers::SignalData<void(bool)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'userPasswordChanged'
        QtMocHelpers::SignalData<void(const QString &)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'userPasswordSecondaryChanged'
        QtMocHelpers::SignalData<void(const QString &)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'userPasswordStatusChanged'
        QtMocHelpers::SignalData<void(int, const QString &)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 }, { QMetaType::QString, 2 },
        }}),
        // Signal 'rootPasswordChanged'
        QtMocHelpers::SignalData<void(const QString &)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'rootPasswordSecondaryChanged'
        QtMocHelpers::SignalData<void(const QString &)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'rootPasswordStatusChanged'
        QtMocHelpers::SignalData<void(int, const QString &)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 }, { QMetaType::QString, 2 },
        }}),
        // Signal 'readyChanged'
        QtMocHelpers::SignalData<void(bool) const>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'setUserShell'
        QtMocHelpers::SlotData<void(const QString &)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 21 },
        }}),
        // Slot 'setAutoLoginGroup'
        QtMocHelpers::SlotData<void(const QString &)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 23 },
        }}),
        // Slot 'setSudoersGroup'
        QtMocHelpers::SlotData<void(const QString &)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 23 },
        }}),
        // Slot 'setFullName'
        QtMocHelpers::SlotData<void(const QString &)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 26 },
        }}),
        // Slot 'setLoginName'
        QtMocHelpers::SlotData<void(const QString &)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 28 },
        }}),
        // Slot 'setHostName'
        QtMocHelpers::SlotData<void(const QString &)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 30 },
        }}),
        // Slot 'setAutoLogin'
        QtMocHelpers::SlotData<void(bool)>(31, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 32 },
        }}),
        // Slot 'setReuseUserPasswordForRoot'
        QtMocHelpers::SlotData<void(bool)>(33, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 34 },
        }}),
        // Slot 'setRequireStrongPasswords'
        QtMocHelpers::SlotData<void(bool)>(35, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 36 },
        }}),
        // Slot 'setUserPassword'
        QtMocHelpers::SlotData<void(const QString &)>(37, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'setUserPasswordSecondary'
        QtMocHelpers::SlotData<void(const QString &)>(38, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'setRootPassword'
        QtMocHelpers::SlotData<void(const QString &)>(39, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'setRootPasswordSecondary'
        QtMocHelpers::SlotData<void(const QString &)>(40, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'setActiveDirectoryUsed'
        QtMocHelpers::SlotData<void(bool)>(41, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 42 },
        }}),
        // Slot 'setActiveDirectoryAdminUsername'
        QtMocHelpers::SlotData<void(const QString &)>(43, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'setActiveDirectoryAdminPassword'
        QtMocHelpers::SlotData<void(const QString &)>(44, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'setActiveDirectoryDomain'
        QtMocHelpers::SlotData<void(const QString &)>(45, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'setActiveDirectoryIP'
        QtMocHelpers::SlotData<void(const QString &)>(46, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'userShell'
        QtMocHelpers::PropertyData<QString>(47, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'autoLoginGroup'
        QtMocHelpers::PropertyData<QString>(48, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'sudoersGroup'
        QtMocHelpers::PropertyData<QString>(49, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'doAutoLogin'
        QtMocHelpers::PropertyData<bool>(50, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable, 8),
        // property 'fullName'
        QtMocHelpers::PropertyData<QString>(51, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'loginName'
        QtMocHelpers::PropertyData<QString>(52, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'loginNameStatus'
        QtMocHelpers::PropertyData<QString>(53, QMetaType::QString, QMC::DefaultPropertyFlags, 5),
        // property 'hostname'
        QtMocHelpers::PropertyData<QString>(54, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable, 6),
        // property 'hostnameStatus'
        QtMocHelpers::PropertyData<QString>(55, QMetaType::QString, QMC::DefaultPropertyFlags, 7),
        // property 'hostnameAction'
        QtMocHelpers::PropertyData<HostNameAction>(56, 0x80000000 | 57, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
        // property 'userPassword'
        QtMocHelpers::PropertyData<QString>(58, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 11),
        // property 'userPasswordSecondary'
        QtMocHelpers::PropertyData<QString>(59, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 12),
        // property 'userPasswordValidity'
        QtMocHelpers::PropertyData<int>(60, QMetaType::Int, QMC::Readable | QMC::Designable | QMC::Scriptable, 13),
        // property 'userPasswordMessage'
        QtMocHelpers::PropertyData<QString>(61, QMetaType::QString, QMC::Readable | QMC::Designable | QMC::Scriptable, 13),
        // property 'rootPassword'
        QtMocHelpers::PropertyData<QString>(62, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 14),
        // property 'rootPasswordSecondary'
        QtMocHelpers::PropertyData<QString>(63, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 15),
        // property 'rootPasswordValidity'
        QtMocHelpers::PropertyData<int>(64, QMetaType::Int, QMC::Readable | QMC::Designable | QMC::Scriptable, 16),
        // property 'rootPasswordMessage'
        QtMocHelpers::PropertyData<QString>(65, QMetaType::QString, QMC::Readable | QMC::Designable | QMC::Scriptable, 16),
        // property 'writeRootPassword'
        QtMocHelpers::PropertyData<bool>(66, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'reuseUserPasswordForRoot'
        QtMocHelpers::PropertyData<bool>(67, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 9),
        // property 'permitWeakPasswords'
        QtMocHelpers::PropertyData<bool>(68, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'requireStrongPasswords'
        QtMocHelpers::PropertyData<bool>(69, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 10),
        // property 'ready'
        QtMocHelpers::PropertyData<bool>(70, QMetaType::Bool, QMC::Readable | QMC::Designable | QMC::Scriptable, 17),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Config, qt_meta_tag_ZN6ConfigE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Config::staticMetaObject = { {
    QMetaObject::SuperData::link<Calamares::ModuleSystem::Config::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6ConfigE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6ConfigE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6ConfigE_t>.metaTypes,
    nullptr
} };

void Config::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Config *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->userShellChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->autoLoginGroupChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->sudoersGroupChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->fullNameChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->loginNameChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->loginNameStatusChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->hostnameChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->hostnameStatusChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->autoLoginChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->reuseUserPasswordForRootChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->requireStrongPasswordsChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->userPasswordChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->userPasswordSecondaryChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->userPasswordStatusChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 14: _t->rootPasswordChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 15: _t->rootPasswordSecondaryChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 16: _t->rootPasswordStatusChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 17: _t->readyChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 18: _t->setUserShell((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 19: _t->setAutoLoginGroup((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 20: _t->setSudoersGroup((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 21: _t->setFullName((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 22: _t->setLoginName((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 23: _t->setHostName((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 24: _t->setAutoLogin((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 25: _t->setReuseUserPasswordForRoot((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 26: _t->setRequireStrongPasswords((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 27: _t->setUserPassword((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 28: _t->setUserPasswordSecondary((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 29: _t->setRootPassword((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 30: _t->setRootPasswordSecondary((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 31: _t->setActiveDirectoryUsed((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 32: _t->setActiveDirectoryAdminUsername((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 33: _t->setActiveDirectoryAdminPassword((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 34: _t->setActiveDirectoryDomain((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 35: _t->setActiveDirectoryIP((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Config::*)(const QString & )>(_a, &Config::userShellChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Config::*)(const QString & )>(_a, &Config::autoLoginGroupChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Config::*)(const QString & )>(_a, &Config::sudoersGroupChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Config::*)(const QString & )>(_a, &Config::fullNameChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Config::*)(const QString & )>(_a, &Config::loginNameChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (Config::*)(const QString & )>(_a, &Config::loginNameStatusChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (Config::*)(const QString & )>(_a, &Config::hostnameChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (Config::*)(const QString & )>(_a, &Config::hostnameStatusChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (Config::*)(bool )>(_a, &Config::autoLoginChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (Config::*)(bool )>(_a, &Config::reuseUserPasswordForRootChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (Config::*)(bool )>(_a, &Config::requireStrongPasswordsChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (Config::*)(const QString & )>(_a, &Config::userPasswordChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (Config::*)(const QString & )>(_a, &Config::userPasswordSecondaryChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (Config::*)(int , const QString & )>(_a, &Config::userPasswordStatusChanged, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (Config::*)(const QString & )>(_a, &Config::rootPasswordChanged, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (Config::*)(const QString & )>(_a, &Config::rootPasswordSecondaryChanged, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (Config::*)(int , const QString & )>(_a, &Config::rootPasswordStatusChanged, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (Config::*)(bool ) const>(_a, &Config::readyChanged, 17))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->userShell(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->autoLoginGroup(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->sudoersGroup(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->doAutoLogin(); break;
        case 4: *reinterpret_cast<QString*>(_v) = _t->fullName(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->loginName(); break;
        case 6: *reinterpret_cast<QString*>(_v) = _t->loginNameStatus(); break;
        case 7: *reinterpret_cast<QString*>(_v) = _t->hostname(); break;
        case 8: *reinterpret_cast<QString*>(_v) = _t->hostnameStatus(); break;
        case 9: *reinterpret_cast<HostNameAction*>(_v) = _t->hostnameAction(); break;
        case 10: *reinterpret_cast<QString*>(_v) = _t->userPassword(); break;
        case 11: *reinterpret_cast<QString*>(_v) = _t->userPasswordSecondary(); break;
        case 12: *reinterpret_cast<int*>(_v) = _t->userPasswordValidity(); break;
        case 13: *reinterpret_cast<QString*>(_v) = _t->userPasswordMessage(); break;
        case 14: *reinterpret_cast<QString*>(_v) = _t->rootPassword(); break;
        case 15: *reinterpret_cast<QString*>(_v) = _t->rootPasswordSecondary(); break;
        case 16: *reinterpret_cast<int*>(_v) = _t->rootPasswordValidity(); break;
        case 17: *reinterpret_cast<QString*>(_v) = _t->rootPasswordMessage(); break;
        case 18: *reinterpret_cast<bool*>(_v) = _t->writeRootPassword(); break;
        case 19: *reinterpret_cast<bool*>(_v) = _t->reuseUserPasswordForRoot(); break;
        case 20: *reinterpret_cast<bool*>(_v) = _t->permitWeakPasswords(); break;
        case 21: *reinterpret_cast<bool*>(_v) = _t->requireStrongPasswords(); break;
        case 22: *reinterpret_cast<bool*>(_v) = _t->isReady(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUserShell(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setAutoLoginGroup(*reinterpret_cast<QString*>(_v)); break;
        case 2: _t->setSudoersGroup(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setAutoLogin(*reinterpret_cast<bool*>(_v)); break;
        case 4: _t->setFullName(*reinterpret_cast<QString*>(_v)); break;
        case 5: _t->setLoginName(*reinterpret_cast<QString*>(_v)); break;
        case 7: _t->setHostName(*reinterpret_cast<QString*>(_v)); break;
        case 10: _t->setUserPassword(*reinterpret_cast<QString*>(_v)); break;
        case 11: _t->setUserPasswordSecondary(*reinterpret_cast<QString*>(_v)); break;
        case 14: _t->setRootPassword(*reinterpret_cast<QString*>(_v)); break;
        case 15: _t->setRootPasswordSecondary(*reinterpret_cast<QString*>(_v)); break;
        case 19: _t->setReuseUserPasswordForRoot(*reinterpret_cast<bool*>(_v)); break;
        case 21: _t->setRequireStrongPasswords(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Config::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Config::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6ConfigE_t>.strings))
        return static_cast<void*>(this);
    return Calamares::ModuleSystem::Config::qt_metacast(_clname);
}

int Config::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Calamares::ModuleSystem::Config::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 36)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 36;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void Config::userShellChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void Config::autoLoginGroupChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void Config::sudoersGroupChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void Config::fullNameChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void Config::loginNameChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void Config::loginNameStatusChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void Config::hostnameChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void Config::hostnameStatusChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void Config::autoLoginChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void Config::reuseUserPasswordForRootChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void Config::requireStrongPasswordsChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void Config::userPasswordChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1);
}

// SIGNAL 12
void Config::userPasswordSecondaryChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1);
}

// SIGNAL 13
void Config::userPasswordStatusChanged(int _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1, _t2);
}

// SIGNAL 14
void Config::rootPasswordChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 14, nullptr, _t1);
}

// SIGNAL 15
void Config::rootPasswordSecondaryChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 15, nullptr, _t1);
}

// SIGNAL 16
void Config::rootPasswordStatusChanged(int _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 16, nullptr, _t1, _t2);
}

// SIGNAL 17
void Config::readyChanged(bool _t1)const
{
    QMetaObject::activate<void>(const_cast< Config *>(this), &staticMetaObject, 17, nullptr, _t1);
}
QT_WARNING_POP
