/****************************************************************************
** Meta object code from reading C++ file 'Config.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/modules/partition/Config.h"
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
        "installChoiceChanged",
        "",
        "InstallChoice",
        "swapChoiceChanged",
        "SwapChoice",
        "eraseModeFilesystemChanged",
        "replaceModeFilesystemChanged",
        "setInstallChoice",
        "setSwapChoice",
        "setEraseFsTypeChoice",
        "filesystemName",
        "setReplaceFilesystemChoice",
        "installChoice",
        "swapChoice",
        "eraseModeFilesystem",
        "replaceModeFilesystem",
        "allowManualPartitioning",
        "preCheckEncryption",
        "showNotEncryptedBootMessage",
        "lvmEnabled",
        "essentialMounts",
        "NoChoice",
        "Alongside",
        "Erase",
        "Replace",
        "Manual",
        "NoSwap",
        "ReuseSwap",
        "SmallSwap",
        "FullSwap",
        "SwapFile",
        "LuksGeneration",
        "Luks1",
        "Luks2"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'installChoiceChanged'
        QtMocHelpers::SignalData<void(enum InstallChoice)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Signal 'swapChoiceChanged'
        QtMocHelpers::SignalData<void(enum SwapChoice)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 2 },
        }}),
        // Signal 'eraseModeFilesystemChanged'
        QtMocHelpers::SignalData<void(const QString &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'replaceModeFilesystemChanged'
        QtMocHelpers::SignalData<void(const QString &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'setInstallChoice'
        QtMocHelpers::SlotData<void(int)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'setInstallChoice'
        QtMocHelpers::SlotData<void(enum InstallChoice)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Slot 'setSwapChoice'
        QtMocHelpers::SlotData<void(int)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'setSwapChoice'
        QtMocHelpers::SlotData<void(enum SwapChoice)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 2 },
        }}),
        // Slot 'setEraseFsTypeChoice'
        QtMocHelpers::SlotData<void(const QString &)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 11 },
        }}),
        // Slot 'setReplaceFilesystemChoice'
        QtMocHelpers::SlotData<void(const QString &)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 11 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'installChoice'
        QtMocHelpers::PropertyData<enum InstallChoice>(13, 0x80000000 | 3, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
        // property 'swapChoice'
        QtMocHelpers::PropertyData<enum SwapChoice>(14, 0x80000000 | 5, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 1),
        // property 'eraseModeFilesystem'
        QtMocHelpers::PropertyData<QString>(15, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable, 2),
        // property 'replaceModeFilesystem'
        QtMocHelpers::PropertyData<QString>(16, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable, 3),
        // property 'allowManualPartitioning'
        QtMocHelpers::PropertyData<bool>(17, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant | QMC::Final),
        // property 'preCheckEncryption'
        QtMocHelpers::PropertyData<bool>(18, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant | QMC::Final),
        // property 'showNotEncryptedBootMessage'
        QtMocHelpers::PropertyData<bool>(19, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant | QMC::Final),
        // property 'lvmEnabled'
        QtMocHelpers::PropertyData<bool>(20, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant | QMC::Final),
        // property 'essentialMounts'
        QtMocHelpers::PropertyData<QStringList>(21, QMetaType::QStringList, QMC::DefaultPropertyFlags | QMC::Constant | QMC::Final),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'InstallChoice'
        QtMocHelpers::EnumData<enum InstallChoice>(3, 3, QMC::EnumFlags{}).add({
            {   22, InstallChoice::NoChoice },
            {   23, InstallChoice::Alongside },
            {   24, InstallChoice::Erase },
            {   25, InstallChoice::Replace },
            {   26, InstallChoice::Manual },
        }),
        // enum 'SwapChoice'
        QtMocHelpers::EnumData<enum SwapChoice>(5, 5, QMC::EnumFlags{}).add({
            {   27, SwapChoice::NoSwap },
            {   28, SwapChoice::ReuseSwap },
            {   29, SwapChoice::SmallSwap },
            {   30, SwapChoice::FullSwap },
            {   31, SwapChoice::SwapFile },
        }),
        // enum 'LuksGeneration'
        QtMocHelpers::EnumData<enum LuksGeneration>(32, 32, QMC::EnumIsScoped).add({
            {   33, LuksGeneration::Luks1 },
            {   34, LuksGeneration::Luks2 },
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
        case 0: _t->installChoiceChanged((*reinterpret_cast<std::add_pointer_t<enum InstallChoice>>(_a[1]))); break;
        case 1: _t->swapChoiceChanged((*reinterpret_cast<std::add_pointer_t<enum SwapChoice>>(_a[1]))); break;
        case 2: _t->eraseModeFilesystemChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->replaceModeFilesystemChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->setInstallChoice((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->setInstallChoice((*reinterpret_cast<std::add_pointer_t<enum InstallChoice>>(_a[1]))); break;
        case 6: _t->setSwapChoice((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->setSwapChoice((*reinterpret_cast<std::add_pointer_t<enum SwapChoice>>(_a[1]))); break;
        case 8: _t->setEraseFsTypeChoice((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->setReplaceFilesystemChoice((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Config::*)(InstallChoice )>(_a, &Config::installChoiceChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Config::*)(SwapChoice )>(_a, &Config::swapChoiceChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Config::*)(const QString & )>(_a, &Config::eraseModeFilesystemChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Config::*)(const QString & )>(_a, &Config::replaceModeFilesystemChanged, 3))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<enum InstallChoice*>(_v) = _t->installChoice(); break;
        case 1: *reinterpret_cast<enum SwapChoice*>(_v) = _t->swapChoice(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->eraseFsType(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->replaceModeFilesystem(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->allowManualPartitioning(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->preCheckEncryption(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->showNotEncryptedBootMessage(); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->isLVMEnabled(); break;
        case 8: *reinterpret_cast<QStringList*>(_v) = _t->essentialMounts(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setInstallChoice(*reinterpret_cast<enum InstallChoice*>(_v)); break;
        case 1: _t->setSwapChoice(*reinterpret_cast<enum SwapChoice*>(_v)); break;
        case 2: _t->setEraseFsTypeChoice(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setReplaceFilesystemChoice(*reinterpret_cast<QString*>(_v)); break;
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
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Config::installChoiceChanged(InstallChoice _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void Config::swapChoiceChanged(SwapChoice _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void Config::eraseModeFilesystemChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void Config::replaceModeFilesystemChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}
QT_WARNING_POP
