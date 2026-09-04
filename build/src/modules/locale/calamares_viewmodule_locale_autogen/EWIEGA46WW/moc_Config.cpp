/****************************************************************************
** Meta object code from reading C++ file 'Config.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/modules/locale/Config.h"
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
        "currentLocationChanged",
        "",
        "const Calamares::Locale::TimeZoneData*",
        "location",
        "currentLocationStatusChanged",
        "currentLanguageStatusChanged",
        "currentLCStatusChanged",
        "prettyStatusChanged",
        "currentLanguageCodeChanged",
        "currentLCCodeChanged",
        "currentTimezoneCodeChanged",
        "currentTimezoneNameChanged",
        "setLanguage",
        "language",
        "setLanguageExplicitly",
        "setLCLocaleExplicitly",
        "locale",
        "setCurrentLocation",
        "regionzone",
        "region",
        "zone",
        "Calamares::GeoIP::RegionZonePair",
        "tz",
        "currentLanguageCode",
        "currentLCCode",
        "currentTimezoneName",
        "currentTimezoneCode",
        "supportedLocales",
        "regionModel",
        "Calamares::Locale::RegionsModel*",
        "zonesModel",
        "Calamares::Locale::ZonesModel*",
        "regionalZonesModel",
        "QAbstractItemModel*",
        "currentLocation",
        "Calamares::Locale::TimeZoneData*",
        "currentLocationStatus",
        "currentLanguageStatus",
        "currentLCStatus",
        "prettyStatus"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'currentLocationChanged'
        QtMocHelpers::SignalData<void(const Calamares::Locale::TimeZoneData *) const>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'currentLocationStatusChanged'
        QtMocHelpers::SignalData<void(const QString &) const>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'currentLanguageStatusChanged'
        QtMocHelpers::SignalData<void(const QString &) const>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'currentLCStatusChanged'
        QtMocHelpers::SignalData<void(const QString &) const>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'prettyStatusChanged'
        QtMocHelpers::SignalData<void(const QString &) const>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'currentLanguageCodeChanged'
        QtMocHelpers::SignalData<void(const QString &) const>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'currentLCCodeChanged'
        QtMocHelpers::SignalData<void(const QString &) const>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'currentTimezoneCodeChanged'
        QtMocHelpers::SignalData<void(const QString &) const>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'currentTimezoneNameChanged'
        QtMocHelpers::SignalData<void(const QString &) const>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'setLanguage'
        QtMocHelpers::SlotData<void(const QString &)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 14 },
        }}),
        // Slot 'setLanguageExplicitly'
        QtMocHelpers::SlotData<void(const QString &)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 14 },
        }}),
        // Slot 'setLCLocaleExplicitly'
        QtMocHelpers::SlotData<void(const QString &)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 17 },
        }}),
        // Slot 'setCurrentLocation'
        QtMocHelpers::SlotData<void(const QString &)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 19 },
        }}),
        // Slot 'setCurrentLocation'
        QtMocHelpers::SlotData<void(const QString &, const QString &)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 20 }, { QMetaType::QString, 21 },
        }}),
        // Slot 'setCurrentLocation'
        QtMocHelpers::SlotData<void(const Calamares::GeoIP::RegionZonePair &)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 22, 23 },
        }}),
        // Slot 'setCurrentLocation'
        QtMocHelpers::SlotData<void(const Calamares::Locale::TimeZoneData *)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 23 },
        }}),
        // Slot 'currentLanguageCode'
        QtMocHelpers::SlotData<QString() const>(24, 2, QMC::AccessPublic, QMetaType::QString),
        // Slot 'currentLCCode'
        QtMocHelpers::SlotData<QString() const>(25, 2, QMC::AccessPublic, QMetaType::QString),
        // Slot 'currentTimezoneName'
        QtMocHelpers::SlotData<QString() const>(26, 2, QMC::AccessPublic, QMetaType::QString),
        // Slot 'currentTimezoneCode'
        QtMocHelpers::SlotData<QString() const>(27, 2, QMC::AccessPublic, QMetaType::QString),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'supportedLocales'
        QtMocHelpers::PropertyData<QStringList>(28, QMetaType::QStringList, QMC::DefaultPropertyFlags | QMC::Constant | QMC::Final),
        // property 'regionModel'
        QtMocHelpers::PropertyData<Calamares::Locale::RegionsModel*>(29, 0x80000000 | 30, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
        // property 'zonesModel'
        QtMocHelpers::PropertyData<Calamares::Locale::ZonesModel*>(31, 0x80000000 | 32, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
        // property 'regionalZonesModel'
        QtMocHelpers::PropertyData<QAbstractItemModel*>(33, 0x80000000 | 34, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
        // property 'currentLocation'
        QtMocHelpers::PropertyData<Calamares::Locale::TimeZoneData*>(35, 0x80000000 | 36, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 0),
        // property 'currentLocationStatus'
        QtMocHelpers::PropertyData<QString>(37, QMetaType::QString, QMC::DefaultPropertyFlags, 2),
        // property 'currentLanguageStatus'
        QtMocHelpers::PropertyData<QString>(38, QMetaType::QString, QMC::DefaultPropertyFlags, 2),
        // property 'currentLCStatus'
        QtMocHelpers::PropertyData<QString>(39, QMetaType::QString, QMC::DefaultPropertyFlags, 3),
        // property 'currentTimezoneName'
        QtMocHelpers::PropertyData<QString>(26, QMetaType::QString, QMC::DefaultPropertyFlags, 8),
        // property 'currentTimezoneCode'
        QtMocHelpers::PropertyData<QString>(27, QMetaType::QString, QMC::DefaultPropertyFlags, 7),
        // property 'currentLanguageCode'
        QtMocHelpers::PropertyData<QString>(24, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable, 5),
        // property 'currentLCCode'
        QtMocHelpers::PropertyData<QString>(25, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable, 6),
        // property 'prettyStatus'
        QtMocHelpers::PropertyData<QString>(40, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Final, 4),
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
        case 0: _t->currentLocationChanged((*reinterpret_cast<std::add_pointer_t<const Calamares::Locale::TimeZoneData*>>(_a[1]))); break;
        case 1: _t->currentLocationStatusChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->currentLanguageStatusChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->currentLCStatusChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->prettyStatusChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->currentLanguageCodeChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->currentLCCodeChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->currentTimezoneCodeChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->currentTimezoneNameChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->setLanguage((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->setLanguageExplicitly((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->setLCLocaleExplicitly((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->setCurrentLocation((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->setCurrentLocation((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 14: _t->setCurrentLocation((*reinterpret_cast<std::add_pointer_t<Calamares::GeoIP::RegionZonePair>>(_a[1]))); break;
        case 15: _t->setCurrentLocation((*reinterpret_cast<std::add_pointer_t<const Calamares::Locale::TimeZoneData*>>(_a[1]))); break;
        case 16: { QString _r = _t->currentLanguageCode();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 17: { QString _r = _t->currentLCCode();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 18: { QString _r = _t->currentTimezoneName();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 19: { QString _r = _t->currentTimezoneCode();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Config::*)(const Calamares::Locale::TimeZoneData * ) const>(_a, &Config::currentLocationChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Config::*)(const QString & ) const>(_a, &Config::currentLocationStatusChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Config::*)(const QString & ) const>(_a, &Config::currentLanguageStatusChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Config::*)(const QString & ) const>(_a, &Config::currentLCStatusChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Config::*)(const QString & ) const>(_a, &Config::prettyStatusChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (Config::*)(const QString & ) const>(_a, &Config::currentLanguageCodeChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (Config::*)(const QString & ) const>(_a, &Config::currentLCCodeChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (Config::*)(const QString & ) const>(_a, &Config::currentTimezoneCodeChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (Config::*)(const QString & ) const>(_a, &Config::currentTimezoneNameChanged, 8))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Calamares::Locale::RegionsModel* >(); break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Calamares::Locale::TimeZoneData* >(); break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Calamares::Locale::ZonesModel* >(); break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractItemModel* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QStringList*>(_v) = _t->supportedLocales(); break;
        case 1: *reinterpret_cast<Calamares::Locale::RegionsModel**>(_v) = _t->regionModel(); break;
        case 2: *reinterpret_cast<Calamares::Locale::ZonesModel**>(_v) = _t->zonesModel(); break;
        case 3: *reinterpret_cast<QAbstractItemModel**>(_v) = _t->regionalZonesModel(); break;
        case 4: *reinterpret_cast<Calamares::Locale::TimeZoneData**>(_v) = _t->currentLocation_c(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->currentLocationStatus(); break;
        case 6: *reinterpret_cast<QString*>(_v) = _t->currentLanguageStatus(); break;
        case 7: *reinterpret_cast<QString*>(_v) = _t->currentLCStatus(); break;
        case 8: *reinterpret_cast<QString*>(_v) = _t->currentTimezoneName(); break;
        case 9: *reinterpret_cast<QString*>(_v) = _t->currentTimezoneCode(); break;
        case 10: *reinterpret_cast<QString*>(_v) = _t->currentLanguageCode(); break;
        case 11: *reinterpret_cast<QString*>(_v) = _t->currentLCCode(); break;
        case 12: *reinterpret_cast<QString*>(_v) = _t->prettyStatus(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 10: _t->setLanguageExplicitly(*reinterpret_cast<QString*>(_v)); break;
        case 11: _t->setLCLocaleExplicitly(*reinterpret_cast<QString*>(_v)); break;
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
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void Config::currentLocationChanged(const Calamares::Locale::TimeZoneData * _t1)const
{
    QMetaObject::activate<void>(const_cast< Config *>(this), &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void Config::currentLocationStatusChanged(const QString & _t1)const
{
    QMetaObject::activate<void>(const_cast< Config *>(this), &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void Config::currentLanguageStatusChanged(const QString & _t1)const
{
    QMetaObject::activate<void>(const_cast< Config *>(this), &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void Config::currentLCStatusChanged(const QString & _t1)const
{
    QMetaObject::activate<void>(const_cast< Config *>(this), &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void Config::prettyStatusChanged(const QString & _t1)const
{
    QMetaObject::activate<void>(const_cast< Config *>(this), &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void Config::currentLanguageCodeChanged(const QString & _t1)const
{
    QMetaObject::activate<void>(const_cast< Config *>(this), &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void Config::currentLCCodeChanged(const QString & _t1)const
{
    QMetaObject::activate<void>(const_cast< Config *>(this), &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void Config::currentTimezoneCodeChanged(const QString & _t1)const
{
    QMetaObject::activate<void>(const_cast< Config *>(this), &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void Config::currentTimezoneNameChanged(const QString & _t1)const
{
    QMetaObject::activate<void>(const_cast< Config *>(this), &staticMetaObject, 8, nullptr, _t1);
}
QT_WARNING_POP
