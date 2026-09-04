/****************************************************************************
** Meta object code from reading C++ file 'Config.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/modules/finished/Config.h"
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
        "restartModeChanged",
        "",
        "RestartMode",
        "m",
        "restartNowWantedChanged",
        "w",
        "failureMessageChanged",
        "failureDetailsChanged",
        "failureChanged",
        "restartNowMode",
        "setRestartNowMode",
        "restartNowWanted",
        "setRestartNowWanted",
        "restartNowCommand",
        "notifyOnFinished",
        "failureMessage",
        "failureDetails",
        "hasFailed",
        "doRestart",
        "restartAnyway",
        "doNotify",
        "sendAnyway",
        "onInstallationFailed",
        "message",
        "details",
        "failed",
        "Never",
        "UserDefaultUnchecked",
        "UserDefaultChecked",
        "Always"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'restartModeChanged'
        QtMocHelpers::SignalData<void(enum RestartMode)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'restartNowWantedChanged'
        QtMocHelpers::SignalData<void(bool)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Signal 'failureMessageChanged'
        QtMocHelpers::SignalData<void(const QString &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'failureDetailsChanged'
        QtMocHelpers::SignalData<void(const QString &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'failureChanged'
        QtMocHelpers::SignalData<void(bool)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'restartNowMode'
        QtMocHelpers::SlotData<enum RestartMode() const>(10, 2, QMC::AccessPublic, 0x80000000 | 3),
        // Slot 'setRestartNowMode'
        QtMocHelpers::SlotData<void(enum RestartMode)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'restartNowWanted'
        QtMocHelpers::SlotData<bool() const>(12, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'setRestartNowWanted'
        QtMocHelpers::SlotData<void(bool)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Slot 'restartNowCommand'
        QtMocHelpers::SlotData<QString() const>(14, 2, QMC::AccessPublic, QMetaType::QString),
        // Slot 'notifyOnFinished'
        QtMocHelpers::SlotData<bool() const>(15, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'failureMessage'
        QtMocHelpers::SlotData<QString() const>(16, 2, QMC::AccessPublic, QMetaType::QString),
        // Slot 'failureDetails'
        QtMocHelpers::SlotData<QString() const>(17, 2, QMC::AccessPublic, QMetaType::QString),
        // Slot 'hasFailed'
        QtMocHelpers::SlotData<bool() const>(18, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'doRestart'
        QtMocHelpers::SlotData<void(bool)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 20 },
        }}),
        // Slot 'doRestart'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'doNotify'
        QtMocHelpers::SlotData<void(bool, bool)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 18 }, { QMetaType::Bool, 22 },
        }}),
        // Slot 'doNotify'
        QtMocHelpers::SlotData<void(bool)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 18 },
        }}),
        // Slot 'doNotify'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onInstallationFailed'
        QtMocHelpers::SlotData<void(const QString &, const QString &)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 24 }, { QMetaType::QString, 25 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'restartNowMode'
        QtMocHelpers::PropertyData<enum RestartMode>(10, 0x80000000 | 3, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
        // property 'restartNowWanted'
        QtMocHelpers::PropertyData<bool>(12, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'restartNowCommand'
        QtMocHelpers::PropertyData<QString>(14, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant | QMC::Final),
        // property 'notifyOnFinished'
        QtMocHelpers::PropertyData<bool>(15, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant | QMC::Final),
        // property 'failureMessage'
        QtMocHelpers::PropertyData<QString>(16, QMetaType::QString, QMC::DefaultPropertyFlags, 2),
        // property 'failureDetails'
        QtMocHelpers::PropertyData<QString>(17, QMetaType::QString, QMC::DefaultPropertyFlags, 3),
        // property 'failed'
        QtMocHelpers::PropertyData<bool>(26, QMetaType::Bool, QMC::DefaultPropertyFlags, 4),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'RestartMode'
        QtMocHelpers::EnumData<enum RestartMode>(3, 3, QMC::EnumIsScoped).add({
            {   27, RestartMode::Never },
            {   28, RestartMode::UserDefaultUnchecked },
            {   29, RestartMode::UserDefaultChecked },
            {   30, RestartMode::Always },
        }),
    };
    return QtMocHelpers::metaObjectData<Config, qt_meta_tag_ZN6ConfigE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Config::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
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
        case 0: _t->restartModeChanged((*reinterpret_cast<std::add_pointer_t<enum RestartMode>>(_a[1]))); break;
        case 1: _t->restartNowWantedChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->failureMessageChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->failureDetailsChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->failureChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: { enum RestartMode _r = _t->restartNowMode();
            if (_a[0]) *reinterpret_cast<enum RestartMode*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->setRestartNowMode((*reinterpret_cast<std::add_pointer_t<enum RestartMode>>(_a[1]))); break;
        case 7: { bool _r = _t->restartNowWanted();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->setRestartNowWanted((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: { QString _r = _t->restartNowCommand();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->notifyOnFinished();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { QString _r = _t->failureMessage();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 12: { QString _r = _t->failureDetails();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->hasFailed();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->doRestart((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->doRestart(); break;
        case 16: _t->doNotify((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 17: _t->doNotify((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 18: _t->doNotify(); break;
        case 19: _t->onInstallationFailed((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Config::*)(RestartMode )>(_a, &Config::restartModeChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Config::*)(bool )>(_a, &Config::restartNowWantedChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Config::*)(const QString & )>(_a, &Config::failureMessageChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Config::*)(const QString & )>(_a, &Config::failureDetailsChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Config::*)(bool )>(_a, &Config::failureChanged, 4))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<enum RestartMode*>(_v) = _t->restartNowMode(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->restartNowWanted(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->restartNowCommand(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->notifyOnFinished(); break;
        case 4: *reinterpret_cast<QString*>(_v) = _t->failureMessage(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->failureDetails(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->hasFailed(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRestartNowMode(*reinterpret_cast<enum RestartMode*>(_v)); break;
        case 1: _t->setRestartNowWanted(*reinterpret_cast<bool*>(_v)); break;
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
    return QObject::qt_metacast(_clname);
}

int Config::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 20;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Config::restartModeChanged(RestartMode _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void Config::restartNowWantedChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void Config::failureMessageChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void Config::failureDetailsChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void Config::failureChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}
QT_WARNING_POP
