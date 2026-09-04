/****************************************************************************
** Meta object code from reading C++ file 'Config.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/modules/welcome/Config.h"
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
        "countryCodeChanged",
        "",
        "countryCode",
        "localeIndexChanged",
        "localeIndex",
        "isNextEnabledChanged",
        "isNextEnabled",
        "genericWelcomeMessageChanged",
        "message",
        "warningMessageChanged",
        "supportUrlChanged",
        "knownIssuesUrlChanged",
        "releaseNotesUrlChanged",
        "donateUrlChanged",
        "languagesModel",
        "Calamares::Locale::TranslationsModel*",
        "retranslate",
        "requirementsModel",
        "Calamares::RequirementsModel*",
        "unsatisfiedRequirements",
        "QAbstractItemModel*",
        "checkRequirements",
        "Calamares::RequirementsList",
        "languageIcon",
        "aboutMessage",
        "genericWelcomeMessage",
        "warningMessage",
        "supportUrl",
        "knownIssuesUrl",
        "releaseNotesUrl",
        "donateUrl"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'countryCodeChanged'
        QtMocHelpers::SignalData<void(QString)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'localeIndexChanged'
        QtMocHelpers::SignalData<void(int)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Signal 'isNextEnabledChanged'
        QtMocHelpers::SignalData<void(bool)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 7 },
        }}),
        // Signal 'genericWelcomeMessageChanged'
        QtMocHelpers::SignalData<void(QString)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 },
        }}),
        // Signal 'warningMessageChanged'
        QtMocHelpers::SignalData<void(QString)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 },
        }}),
        // Signal 'supportUrlChanged'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'knownIssuesUrlChanged'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'releaseNotesUrlChanged'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'donateUrlChanged'
        QtMocHelpers::SignalData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'languagesModel'
        QtMocHelpers::SlotData<Calamares::Locale::TranslationsModel *() const>(15, 2, QMC::AccessPublic, 0x80000000 | 16),
        // Slot 'retranslate'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'requirementsModel'
        QtMocHelpers::SlotData<Calamares::RequirementsModel *() const>(18, 2, QMC::AccessPublic, 0x80000000 | 19),
        // Slot 'unsatisfiedRequirements'
        QtMocHelpers::SlotData<QAbstractItemModel *() const>(20, 2, QMC::AccessPublic, 0x80000000 | 21),
        // Slot 'checkRequirements'
        QtMocHelpers::SlotData<Calamares::RequirementsList() const>(22, 2, QMC::AccessPublic, 0x80000000 | 23),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'languagesModel'
        QtMocHelpers::PropertyData<Calamares::Locale::TranslationsModel*>(15, 0x80000000 | 16, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
        // property 'requirementsModel'
        QtMocHelpers::PropertyData<Calamares::RequirementsModel*>(18, 0x80000000 | 19, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
        // property 'unsatisfiedRequirements'
        QtMocHelpers::PropertyData<QAbstractItemModel*>(20, 0x80000000 | 21, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant | QMC::Final),
        // property 'languageIcon'
        QtMocHelpers::PropertyData<QString>(24, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant | QMC::Final),
        // property 'countryCode'
        QtMocHelpers::PropertyData<QString>(3, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::Final, 0),
        // property 'localeIndex'
        QtMocHelpers::PropertyData<int>(5, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'aboutMessage'
        QtMocHelpers::PropertyData<QString>(25, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant | QMC::Final),
        // property 'genericWelcomeMessage'
        QtMocHelpers::PropertyData<QString>(26, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::Final, 3),
        // property 'warningMessage'
        QtMocHelpers::PropertyData<QString>(27, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Final, 4),
        // property 'supportUrl'
        QtMocHelpers::PropertyData<QString>(28, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::Final, 5),
        // property 'knownIssuesUrl'
        QtMocHelpers::PropertyData<QString>(29, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::Final, 6),
        // property 'releaseNotesUrl'
        QtMocHelpers::PropertyData<QString>(30, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::Final, 7),
        // property 'donateUrl'
        QtMocHelpers::PropertyData<QString>(31, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::Final, 8),
        // property 'isNextEnabled'
        QtMocHelpers::PropertyData<bool>(7, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::Final, 2),
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
        case 0: _t->countryCodeChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->localeIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->isNextEnabledChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->genericWelcomeMessageChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->warningMessageChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->supportUrlChanged(); break;
        case 6: _t->knownIssuesUrlChanged(); break;
        case 7: _t->releaseNotesUrlChanged(); break;
        case 8: _t->donateUrlChanged(); break;
        case 9: { Calamares::Locale::TranslationsModel* _r = _t->languagesModel();
            if (_a[0]) *reinterpret_cast<Calamares::Locale::TranslationsModel**>(_a[0]) = std::move(_r); }  break;
        case 10: _t->retranslate(); break;
        case 11: { Calamares::RequirementsModel* _r = _t->requirementsModel();
            if (_a[0]) *reinterpret_cast<Calamares::RequirementsModel**>(_a[0]) = std::move(_r); }  break;
        case 12: { QAbstractItemModel* _r = _t->unsatisfiedRequirements();
            if (_a[0]) *reinterpret_cast<QAbstractItemModel**>(_a[0]) = std::move(_r); }  break;
        case 13: { Calamares::RequirementsList _r = _t->checkRequirements();
            if (_a[0]) *reinterpret_cast<Calamares::RequirementsList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Config::*)(QString )>(_a, &Config::countryCodeChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Config::*)(int )>(_a, &Config::localeIndexChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Config::*)(bool )>(_a, &Config::isNextEnabledChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Config::*)(QString )>(_a, &Config::genericWelcomeMessageChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Config::*)(QString )>(_a, &Config::warningMessageChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (Config::*)()>(_a, &Config::supportUrlChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (Config::*)()>(_a, &Config::knownIssuesUrlChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (Config::*)()>(_a, &Config::releaseNotesUrlChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (Config::*)()>(_a, &Config::donateUrlChanged, 8))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Calamares::Locale::TranslationsModel* >(); break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Calamares::RequirementsModel* >(); break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractItemModel* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<Calamares::Locale::TranslationsModel**>(_v) = _t->languagesModel(); break;
        case 1: *reinterpret_cast<Calamares::RequirementsModel**>(_v) = _t->requirementsModel(); break;
        case 2: *reinterpret_cast<QAbstractItemModel**>(_v) = _t->unsatisfiedRequirements(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->languageIcon(); break;
        case 4: *reinterpret_cast<QString*>(_v) = _t->m_countryCode; break;
        case 5: *reinterpret_cast<int*>(_v) = _t->localeIndex(); break;
        case 6: *reinterpret_cast<QString*>(_v) = _t->aboutMessage(); break;
        case 7: *reinterpret_cast<QString*>(_v) = _t->m_genericWelcomeMessage; break;
        case 8: *reinterpret_cast<QString*>(_v) = _t->warningMessage(); break;
        case 9: *reinterpret_cast<QString*>(_v) = _t->m_supportUrl; break;
        case 10: *reinterpret_cast<QString*>(_v) = _t->m_knownIssuesUrl; break;
        case 11: *reinterpret_cast<QString*>(_v) = _t->m_releaseNotesUrl; break;
        case 12: *reinterpret_cast<QString*>(_v) = _t->m_donateUrl; break;
        case 13: *reinterpret_cast<bool*>(_v) = _t->m_isNextEnabled; break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 4:
            if (QtMocHelpers::setProperty(_t->m_countryCode, *reinterpret_cast<QString*>(_v)))
                Q_EMIT _t->countryCodeChanged(_t->m_countryCode);
            break;
        case 5: _t->setLocaleIndex(*reinterpret_cast<int*>(_v)); break;
        case 7:
            if (QtMocHelpers::setProperty(_t->m_genericWelcomeMessage, *reinterpret_cast<QString*>(_v)))
                Q_EMIT _t->genericWelcomeMessageChanged(_t->m_genericWelcomeMessage);
            break;
        case 9:
            if (QtMocHelpers::setProperty(_t->m_supportUrl, *reinterpret_cast<QString*>(_v)))
                Q_EMIT _t->supportUrlChanged();
            break;
        case 10:
            if (QtMocHelpers::setProperty(_t->m_knownIssuesUrl, *reinterpret_cast<QString*>(_v)))
                Q_EMIT _t->knownIssuesUrlChanged();
            break;
        case 11:
            if (QtMocHelpers::setProperty(_t->m_releaseNotesUrl, *reinterpret_cast<QString*>(_v)))
                Q_EMIT _t->releaseNotesUrlChanged();
            break;
        case 12:
            if (QtMocHelpers::setProperty(_t->m_donateUrl, *reinterpret_cast<QString*>(_v)))
                Q_EMIT _t->donateUrlChanged();
            break;
        case 13:
            if (QtMocHelpers::setProperty(_t->m_isNextEnabled, *reinterpret_cast<bool*>(_v)))
                Q_EMIT _t->isNextEnabledChanged(_t->m_isNextEnabled);
            break;
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
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void Config::countryCodeChanged(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void Config::localeIndexChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void Config::isNextEnabledChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void Config::genericWelcomeMessageChanged(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void Config::warningMessageChanged(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void Config::supportUrlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Config::knownIssuesUrlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Config::releaseNotesUrlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Config::donateUrlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
