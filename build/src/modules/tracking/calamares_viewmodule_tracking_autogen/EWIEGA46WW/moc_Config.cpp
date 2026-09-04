/****************************************************************************
** Meta object code from reading C++ file 'Config.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/modules/tracking/Config.h"
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
struct qt_meta_tag_ZN19TrackingStyleConfigE_t {};
} // unnamed namespace

template <> constexpr inline auto TrackingStyleConfig::qt_create_metaobjectdata<qt_meta_tag_ZN19TrackingStyleConfigE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "TrackingStyleConfig",
        "trackingChanged",
        "",
        "policyChanged",
        "tracking",
        "TrackingState",
        "isEnabled",
        "isConfigurable",
        "setTracking",
        "policy",
        "trackingStatus",
        "DisabledByConfig",
        "DisabledByUser",
        "EnabledByUser"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'trackingChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'policyChanged'
        QtMocHelpers::SignalData<void(QString)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'tracking'
        QtMocHelpers::SlotData<enum TrackingState() const>(4, 2, QMC::AccessPublic, 0x80000000 | 5),
        // Slot 'isEnabled'
        QtMocHelpers::SlotData<bool() const>(6, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'isConfigurable'
        QtMocHelpers::SlotData<bool() const>(7, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'setTracking'
        QtMocHelpers::SlotData<void(enum TrackingState)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 2 },
        }}),
        // Slot 'setTracking'
        QtMocHelpers::SlotData<void(bool)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'policy'
        QtMocHelpers::SlotData<QString() const>(9, 2, QMC::AccessPublic, QMetaType::QString),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'trackingStatus'
        QtMocHelpers::PropertyData<enum TrackingState>(10, 0x80000000 | 5, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::Final, 0),
        // property 'isEnabled'
        QtMocHelpers::PropertyData<bool>(6, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 0),
        // property 'isConfigurable'
        QtMocHelpers::PropertyData<bool>(7, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 0),
        // property 'policy'
        QtMocHelpers::PropertyData<QString>(9, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Final, 1),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'TrackingState'
        QtMocHelpers::EnumData<enum TrackingState>(5, 5, QMC::EnumFlags{}).add({
            {   11, TrackingState::DisabledByConfig },
            {   12, TrackingState::DisabledByUser },
            {   13, TrackingState::EnabledByUser },
        }),
    };
    return QtMocHelpers::metaObjectData<TrackingStyleConfig, qt_meta_tag_ZN19TrackingStyleConfigE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject TrackingStyleConfig::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19TrackingStyleConfigE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19TrackingStyleConfigE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19TrackingStyleConfigE_t>.metaTypes,
    nullptr
} };

void TrackingStyleConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TrackingStyleConfig *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->trackingChanged(); break;
        case 1: _t->policyChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: { enum TrackingState _r = _t->tracking();
            if (_a[0]) *reinterpret_cast<enum TrackingState*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->isEnabled();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->isConfigurable();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->setTracking((*reinterpret_cast<std::add_pointer_t<enum TrackingState>>(_a[1]))); break;
        case 6: _t->setTracking((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: { QString _r = _t->policy();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TrackingStyleConfig::*)()>(_a, &TrackingStyleConfig::trackingChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (TrackingStyleConfig::*)(QString )>(_a, &TrackingStyleConfig::policyChanged, 1))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<enum TrackingState*>(_v) = _t->tracking(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->isEnabled(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->isConfigurable(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->policy(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTracking(*reinterpret_cast<enum TrackingState*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *TrackingStyleConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrackingStyleConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19TrackingStyleConfigE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TrackingStyleConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void TrackingStyleConfig::trackingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TrackingStyleConfig::policyChanged(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN6ConfigE_t {};
} // unnamed namespace

template <> constexpr inline auto Config::qt_create_metaobjectdata<qt_meta_tag_ZN6ConfigE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Config",
        "generalPolicyChanged",
        "",
        "generalPolicy",
        "installTracking",
        "InstallTrackingConfig*",
        "machineTracking",
        "MachineTrackingConfig*",
        "userTracking",
        "UserTrackingConfig*",
        "noTracking",
        "TrackingStyleConfig*"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'generalPolicyChanged'
        QtMocHelpers::SignalData<void(QString)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'generalPolicy'
        QtMocHelpers::SlotData<QString() const>(3, 2, QMC::AccessPublic, QMetaType::QString),
        // Slot 'installTracking'
        QtMocHelpers::SlotData<InstallTrackingConfig *() const>(4, 2, QMC::AccessPublic, 0x80000000 | 5),
        // Slot 'machineTracking'
        QtMocHelpers::SlotData<MachineTrackingConfig *() const>(6, 2, QMC::AccessPublic, 0x80000000 | 7),
        // Slot 'userTracking'
        QtMocHelpers::SlotData<UserTrackingConfig *() const>(8, 2, QMC::AccessPublic, 0x80000000 | 9),
        // Slot 'noTracking'
        QtMocHelpers::SlotData<void(bool)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'generalPolicy'
        QtMocHelpers::PropertyData<QString>(3, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Final, 0),
        // property 'installTracking'
        QtMocHelpers::PropertyData<TrackingStyleConfig*>(4, 0x80000000 | 11, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final),
        // property 'machineTracking'
        QtMocHelpers::PropertyData<TrackingStyleConfig*>(6, 0x80000000 | 11, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final),
        // property 'userTracking'
        QtMocHelpers::PropertyData<TrackingStyleConfig*>(8, 0x80000000 | 11, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Final),
    };
    QtMocHelpers::UintData qt_enums {
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
        case 0: _t->generalPolicyChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: { QString _r = _t->generalPolicy();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 2: { InstallTrackingConfig* _r = _t->installTracking();
            if (_a[0]) *reinterpret_cast<InstallTrackingConfig**>(_a[0]) = std::move(_r); }  break;
        case 3: { MachineTrackingConfig* _r = _t->machineTracking();
            if (_a[0]) *reinterpret_cast<MachineTrackingConfig**>(_a[0]) = std::move(_r); }  break;
        case 4: { UserTrackingConfig* _r = _t->userTracking();
            if (_a[0]) *reinterpret_cast<UserTrackingConfig**>(_a[0]) = std::move(_r); }  break;
        case 5: _t->noTracking((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Config::*)(QString )>(_a, &Config::generalPolicyChanged, 0))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
        case 2:
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TrackingStyleConfig* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->generalPolicy(); break;
        case 1: *reinterpret_cast<TrackingStyleConfig**>(_v) = _t->installTracking(); break;
        case 2: *reinterpret_cast<TrackingStyleConfig**>(_v) = _t->machineTracking(); break;
        case 3: *reinterpret_cast<TrackingStyleConfig**>(_v) = _t->userTracking(); break;
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
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Config::generalPolicyChanged(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
