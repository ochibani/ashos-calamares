/****************************************************************************
** Meta object code from reading C++ file 'ViewManager.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/libcalamaresui/ViewManager.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ViewManager.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN9Calamares11ViewManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto Calamares::ViewManager::qt_create_metaobjectdata<qt_meta_tag_ZN9Calamares11ViewManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Calamares::ViewManager",
        "currentStepChanged",
        "",
        "ensureSize",
        "QSize",
        "size",
        "cancelEnabled",
        "enabled",
        "nextEnabledChanged",
        "nextLabelChanged",
        "nextIconChanged",
        "backEnabledChanged",
        "backLabelChanged",
        "backIconChanged",
        "backAndNextVisibleChanged",
        "quitEnabledChanged",
        "quitLabelChanged",
        "quitIconChanged",
        "quitVisibleChanged",
        "quitTooltipChanged",
        "next",
        "nextEnabled",
        "nextLabel",
        "nextIcon",
        "back",
        "backEnabled",
        "backLabel",
        "backIcon",
        "backAndNextVisible",
        "quit",
        "quitEnabled",
        "quitLabel",
        "quitIcon",
        "quitVisible",
        "quitTooltip",
        "onInstallationFailed",
        "message",
        "details",
        "onInitFailed",
        "modules",
        "onInitComplete",
        "updateNextStatus",
        "isDebugMode",
        "isChrootMode",
        "isSetupMode",
        "logFilePath",
        "currentStepIndex",
        "panelSides",
        "Qt::Orientations"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'currentStepChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'ensureSize'
        QtMocHelpers::SignalData<void(QSize) const>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 },
        }}),
        // Signal 'cancelEnabled'
        QtMocHelpers::SignalData<void(bool) const>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 7 },
        }}),
        // Signal 'nextEnabledChanged'
        QtMocHelpers::SignalData<void(bool) const>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'nextLabelChanged'
        QtMocHelpers::SignalData<void(QString) const>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'nextIconChanged'
        QtMocHelpers::SignalData<void(QString) const>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'backEnabledChanged'
        QtMocHelpers::SignalData<void(bool) const>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'backLabelChanged'
        QtMocHelpers::SignalData<void(QString) const>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'backIconChanged'
        QtMocHelpers::SignalData<void(QString) const>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'backAndNextVisibleChanged'
        QtMocHelpers::SignalData<void(bool) const>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'quitEnabledChanged'
        QtMocHelpers::SignalData<void(bool) const>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'quitLabelChanged'
        QtMocHelpers::SignalData<void(QString) const>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'quitIconChanged'
        QtMocHelpers::SignalData<void(QString) const>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'quitVisibleChanged'
        QtMocHelpers::SignalData<void(bool) const>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'quitTooltipChanged'
        QtMocHelpers::SignalData<void(QString) const>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'next'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'nextEnabled'
        QtMocHelpers::SlotData<bool() const>(21, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'nextLabel'
        QtMocHelpers::SlotData<QString() const>(22, 2, QMC::AccessPublic, QMetaType::QString),
        // Slot 'nextIcon'
        QtMocHelpers::SlotData<QString() const>(23, 2, QMC::AccessPublic, QMetaType::QString),
        // Slot 'back'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'backEnabled'
        QtMocHelpers::SlotData<bool() const>(25, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'backLabel'
        QtMocHelpers::SlotData<QString() const>(26, 2, QMC::AccessPublic, QMetaType::QString),
        // Slot 'backIcon'
        QtMocHelpers::SlotData<QString() const>(27, 2, QMC::AccessPublic, QMetaType::QString),
        // Slot 'backAndNextVisible'
        QtMocHelpers::SlotData<bool() const>(28, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'quit'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'quitEnabled'
        QtMocHelpers::SlotData<bool() const>(30, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'quitLabel'
        QtMocHelpers::SlotData<QString() const>(31, 2, QMC::AccessPublic, QMetaType::QString),
        // Slot 'quitIcon'
        QtMocHelpers::SlotData<QString() const>(32, 2, QMC::AccessPublic, QMetaType::QString),
        // Slot 'quitVisible'
        QtMocHelpers::SlotData<bool() const>(33, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'quitTooltip'
        QtMocHelpers::SlotData<QString() const>(34, 2, QMC::AccessPublic, QMetaType::QString),
        // Slot 'onInstallationFailed'
        QtMocHelpers::SlotData<void(const QString &, const QString &)>(35, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 36 }, { QMetaType::QString, 37 },
        }}),
        // Slot 'onInitFailed'
        QtMocHelpers::SlotData<void(const QStringList &)>(38, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QStringList, 39 },
        }}),
        // Slot 'onInitComplete'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateNextStatus'
        QtMocHelpers::SlotData<void(bool)>(41, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 7 },
        }}),
        // Slot 'isDebugMode'
        QtMocHelpers::SlotData<bool() const>(42, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'isChrootMode'
        QtMocHelpers::SlotData<bool() const>(43, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'isSetupMode'
        QtMocHelpers::SlotData<bool() const>(44, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'logFilePath'
        QtMocHelpers::SlotData<QString() const>(45, 2, QMC::AccessPublic, QMetaType::QString),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'currentStepIndex'
        QtMocHelpers::PropertyData<int>(46, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Final, 0),
        // property 'nextEnabled'
        QtMocHelpers::PropertyData<bool>(21, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 3),
        // property 'nextLabel'
        QtMocHelpers::PropertyData<QString>(22, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Final, 4),
        // property 'nextIcon'
        QtMocHelpers::PropertyData<QString>(23, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Final, 5),
        // property 'backEnabled'
        QtMocHelpers::PropertyData<bool>(25, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 6),
        // property 'backLabel'
        QtMocHelpers::PropertyData<QString>(26, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Final, 7),
        // property 'backIcon'
        QtMocHelpers::PropertyData<QString>(27, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Final, 8),
        // property 'quitEnabled'
        QtMocHelpers::PropertyData<bool>(30, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 10),
        // property 'quitLabel'
        QtMocHelpers::PropertyData<QString>(31, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Final, 11),
        // property 'quitIcon'
        QtMocHelpers::PropertyData<QString>(32, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Final, 12),
        // property 'quitTooltip'
        QtMocHelpers::PropertyData<QString>(34, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Final, 14),
        // property 'quitVisible'
        QtMocHelpers::PropertyData<bool>(33, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 13),
        // property 'backAndNextVisible'
        QtMocHelpers::PropertyData<bool>(28, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Final, 9),
        // property 'panelSides'
        QtMocHelpers::PropertyData<Qt::Orientations>(47, 0x80000000 | 48, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'isDebugMode'
        QtMocHelpers::PropertyData<bool>(42, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant | QMC::Final),
        // property 'isChrootMode'
        QtMocHelpers::PropertyData<bool>(43, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant | QMC::Final),
        // property 'isSetupMode'
        QtMocHelpers::PropertyData<bool>(44, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant | QMC::Final),
        // property 'logFilePath'
        QtMocHelpers::PropertyData<QString>(45, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant | QMC::Final),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ViewManager, qt_meta_tag_ZN9Calamares11ViewManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Calamares::ViewManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9Calamares11ViewManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9Calamares11ViewManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9Calamares11ViewManagerE_t>.metaTypes,
    nullptr
} };

void Calamares::ViewManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ViewManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->currentStepChanged(); break;
        case 1: _t->ensureSize((*reinterpret_cast<std::add_pointer_t<QSize>>(_a[1]))); break;
        case 2: _t->cancelEnabled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->nextEnabledChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->nextLabelChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->nextIconChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->backEnabledChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->backLabelChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->backIconChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->backAndNextVisibleChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->quitEnabledChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->quitLabelChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->quitIconChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->quitVisibleChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->quitTooltipChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 15: _t->next(); break;
        case 16: { bool _r = _t->nextEnabled();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 17: { QString _r = _t->nextLabel();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 18: { QString _r = _t->nextIcon();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 19: _t->back(); break;
        case 20: { bool _r = _t->backEnabled();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 21: { QString _r = _t->backLabel();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 22: { QString _r = _t->backIcon();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 23: { bool _r = _t->backAndNextVisible();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 24: _t->quit(); break;
        case 25: { bool _r = _t->quitEnabled();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 26: { QString _r = _t->quitLabel();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 27: { QString _r = _t->quitIcon();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 28: { bool _r = _t->quitVisible();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 29: { QString _r = _t->quitTooltip();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 30: _t->onInstallationFailed((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 31: _t->onInitFailed((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 32: _t->onInitComplete(); break;
        case 33: _t->updateNextStatus((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 34: { bool _r = _t->isDebugMode();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 35: { bool _r = _t->isChrootMode();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 36: { bool _r = _t->isSetupMode();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 37: { QString _r = _t->logFilePath();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ViewManager::*)()>(_a, &ViewManager::currentStepChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ViewManager::*)(QSize ) const>(_a, &ViewManager::ensureSize, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ViewManager::*)(bool ) const>(_a, &ViewManager::cancelEnabled, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ViewManager::*)(bool ) const>(_a, &ViewManager::nextEnabledChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (ViewManager::*)(QString ) const>(_a, &ViewManager::nextLabelChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (ViewManager::*)(QString ) const>(_a, &ViewManager::nextIconChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (ViewManager::*)(bool ) const>(_a, &ViewManager::backEnabledChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (ViewManager::*)(QString ) const>(_a, &ViewManager::backLabelChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (ViewManager::*)(QString ) const>(_a, &ViewManager::backIconChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (ViewManager::*)(bool ) const>(_a, &ViewManager::backAndNextVisibleChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (ViewManager::*)(bool ) const>(_a, &ViewManager::quitEnabledChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (ViewManager::*)(QString ) const>(_a, &ViewManager::quitLabelChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (ViewManager::*)(QString ) const>(_a, &ViewManager::quitIconChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (ViewManager::*)(bool ) const>(_a, &ViewManager::quitVisibleChanged, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (ViewManager::*)(QString ) const>(_a, &ViewManager::quitTooltipChanged, 14))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->currentStepIndex(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->nextEnabled(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->nextLabel(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->nextIcon(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->backEnabled(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->backLabel(); break;
        case 6: *reinterpret_cast<QString*>(_v) = _t->backIcon(); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->quitEnabled(); break;
        case 8: *reinterpret_cast<QString*>(_v) = _t->quitLabel(); break;
        case 9: *reinterpret_cast<QString*>(_v) = _t->quitIcon(); break;
        case 10: *reinterpret_cast<QString*>(_v) = _t->quitTooltip(); break;
        case 11: *reinterpret_cast<bool*>(_v) = _t->quitVisible(); break;
        case 12: *reinterpret_cast<bool*>(_v) = _t->backAndNextVisible(); break;
        case 13: *reinterpret_cast<Qt::Orientations*>(_v) = _t->panelSides(); break;
        case 14: *reinterpret_cast<bool*>(_v) = _t->isDebugMode(); break;
        case 15: *reinterpret_cast<bool*>(_v) = _t->isChrootMode(); break;
        case 16: *reinterpret_cast<bool*>(_v) = _t->isSetupMode(); break;
        case 17: *reinterpret_cast<QString*>(_v) = _t->logFilePath(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 13: _t->setPanelSides(*reinterpret_cast<Qt::Orientations*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Calamares::ViewManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Calamares::ViewManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9Calamares11ViewManagerE_t>.strings))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int Calamares::ViewManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 38)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 38;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void Calamares::ViewManager::currentStepChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Calamares::ViewManager::ensureSize(QSize _t1)const
{
    QMetaObject::activate<void>(const_cast< Calamares::ViewManager *>(this), &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void Calamares::ViewManager::cancelEnabled(bool _t1)const
{
    QMetaObject::activate<void>(const_cast< Calamares::ViewManager *>(this), &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void Calamares::ViewManager::nextEnabledChanged(bool _t1)const
{
    QMetaObject::activate<void>(const_cast< Calamares::ViewManager *>(this), &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void Calamares::ViewManager::nextLabelChanged(QString _t1)const
{
    QMetaObject::activate<void>(const_cast< Calamares::ViewManager *>(this), &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void Calamares::ViewManager::nextIconChanged(QString _t1)const
{
    QMetaObject::activate<void>(const_cast< Calamares::ViewManager *>(this), &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void Calamares::ViewManager::backEnabledChanged(bool _t1)const
{
    QMetaObject::activate<void>(const_cast< Calamares::ViewManager *>(this), &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void Calamares::ViewManager::backLabelChanged(QString _t1)const
{
    QMetaObject::activate<void>(const_cast< Calamares::ViewManager *>(this), &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void Calamares::ViewManager::backIconChanged(QString _t1)const
{
    QMetaObject::activate<void>(const_cast< Calamares::ViewManager *>(this), &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void Calamares::ViewManager::backAndNextVisibleChanged(bool _t1)const
{
    QMetaObject::activate<void>(const_cast< Calamares::ViewManager *>(this), &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void Calamares::ViewManager::quitEnabledChanged(bool _t1)const
{
    QMetaObject::activate<void>(const_cast< Calamares::ViewManager *>(this), &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void Calamares::ViewManager::quitLabelChanged(QString _t1)const
{
    QMetaObject::activate<void>(const_cast< Calamares::ViewManager *>(this), &staticMetaObject, 11, nullptr, _t1);
}

// SIGNAL 12
void Calamares::ViewManager::quitIconChanged(QString _t1)const
{
    QMetaObject::activate<void>(const_cast< Calamares::ViewManager *>(this), &staticMetaObject, 12, nullptr, _t1);
}

// SIGNAL 13
void Calamares::ViewManager::quitVisibleChanged(bool _t1)const
{
    QMetaObject::activate<void>(const_cast< Calamares::ViewManager *>(this), &staticMetaObject, 13, nullptr, _t1);
}

// SIGNAL 14
void Calamares::ViewManager::quitTooltipChanged(QString _t1)const
{
    QMetaObject::activate<void>(const_cast< Calamares::ViewManager *>(this), &staticMetaObject, 14, nullptr, _t1);
}
QT_WARNING_POP
