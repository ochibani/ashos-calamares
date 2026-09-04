/****************************************************************************
** Meta object code from reading C++ file 'Branding.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/libcalamaresui/Branding.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Branding.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN9Calamares8BrandingE_t {};
} // unnamed namespace

template <> constexpr inline auto Calamares::Branding::qt_create_metaobjectdata<qt_meta_tag_ZN9Calamares8BrandingE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Calamares::Branding",
        "string",
        "",
        "StringEntry",
        "stringEntry",
        "versionedName",
        "productName",
        "shortProductName",
        "shortVersionedName",
        "styleString",
        "StyleEntry",
        "styleEntry",
        "imagePath",
        "ImageEntry",
        "imageEntry",
        "sidebarSide",
        "PanelSide",
        "navigationSide",
        "ProductName",
        "Version",
        "ShortVersion",
        "VersionedName",
        "ShortVersionedName",
        "ShortProductName",
        "BootloaderEntryName",
        "ProductUrl",
        "SupportUrl",
        "KnownIssuesUrl",
        "ReleaseNotesUrl",
        "DonateUrl",
        "ProductBanner",
        "ProductIcon",
        "ProductLogo",
        "ProductWallpaper",
        "ProductWelcome",
        "SidebarBackground",
        "SidebarText",
        "SidebarTextCurrent",
        "SidebarBackgroundCurrent",
        "UploadServerType",
        "None",
        "Fiche",
        "WindowExpansion",
        "Normal",
        "Fullscreen",
        "Fixed",
        "WindowDimensionUnit",
        "Pixies",
        "Fonties",
        "WindowPlacement",
        "Center",
        "Free",
        "PanelFlavor",
        "Widget",
        "Qml",
        "Left",
        "Right",
        "Top",
        "Bottom"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'string'
        QtMocHelpers::SlotData<QString(enum StringEntry) const>(1, 2, QMC::AccessPublic, QMetaType::QString, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'versionedName'
        QtMocHelpers::SlotData<QString() const>(5, 2, QMC::AccessPublic, QMetaType::QString),
        // Slot 'productName'
        QtMocHelpers::SlotData<QString() const>(6, 2, QMC::AccessPublic, QMetaType::QString),
        // Slot 'shortProductName'
        QtMocHelpers::SlotData<QString() const>(7, 2, QMC::AccessPublic, QMetaType::QString),
        // Slot 'shortVersionedName'
        QtMocHelpers::SlotData<QString() const>(8, 2, QMC::AccessPublic, QMetaType::QString),
        // Slot 'styleString'
        QtMocHelpers::SlotData<QString(enum StyleEntry) const>(9, 2, QMC::AccessPublic, QMetaType::QString, {{
            { 0x80000000 | 10, 11 },
        }}),
        // Slot 'imagePath'
        QtMocHelpers::SlotData<QString(enum ImageEntry) const>(12, 2, QMC::AccessPublic, QMetaType::QString, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Slot 'sidebarSide'
        QtMocHelpers::SlotData<enum PanelSide() const>(15, 2, QMC::AccessPublic, 0x80000000 | 16),
        // Slot 'navigationSide'
        QtMocHelpers::SlotData<enum PanelSide() const>(17, 2, QMC::AccessPublic, 0x80000000 | 16),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'StringEntry'
        QtMocHelpers::EnumData<enum StringEntry>(3, 3, QMC::EnumFlags{}).add({
            {   18, StringEntry::ProductName },
            {   19, StringEntry::Version },
            {   20, StringEntry::ShortVersion },
            {   21, StringEntry::VersionedName },
            {   22, StringEntry::ShortVersionedName },
            {   23, StringEntry::ShortProductName },
            {   24, StringEntry::BootloaderEntryName },
            {   25, StringEntry::ProductUrl },
            {   26, StringEntry::SupportUrl },
            {   27, StringEntry::KnownIssuesUrl },
            {   28, StringEntry::ReleaseNotesUrl },
            {   29, StringEntry::DonateUrl },
        }),
        // enum 'ImageEntry'
        QtMocHelpers::EnumData<enum ImageEntry>(13, 13, QMC::EnumFlags{}).add({
            {   30, ImageEntry::ProductBanner },
            {   31, ImageEntry::ProductIcon },
            {   32, ImageEntry::ProductLogo },
            {   33, ImageEntry::ProductWallpaper },
            {   34, ImageEntry::ProductWelcome },
        }),
        // enum 'StyleEntry'
        QtMocHelpers::EnumData<enum StyleEntry>(10, 10, QMC::EnumFlags{}).add({
            {   35, StyleEntry::SidebarBackground },
            {   36, StyleEntry::SidebarText },
            {   37, StyleEntry::SidebarTextCurrent },
            {   38, StyleEntry::SidebarBackgroundCurrent },
        }),
        // enum 'UploadServerType'
        QtMocHelpers::EnumData<enum UploadServerType>(39, 39, QMC::EnumFlags{}).add({
            {   40, UploadServerType::None },
            {   41, UploadServerType::Fiche },
        }),
        // enum 'WindowExpansion'
        QtMocHelpers::EnumData<enum WindowExpansion>(42, 42, QMC::EnumIsScoped).add({
            {   43, WindowExpansion::Normal },
            {   44, WindowExpansion::Fullscreen },
            {   45, WindowExpansion::Fixed },
        }),
        // enum 'WindowDimensionUnit'
        QtMocHelpers::EnumData<enum WindowDimensionUnit>(46, 46, QMC::EnumIsScoped).add({
            {   40, WindowDimensionUnit::None },
            {   47, WindowDimensionUnit::Pixies },
            {   48, WindowDimensionUnit::Fonties },
        }),
        // enum 'WindowPlacement'
        QtMocHelpers::EnumData<enum WindowPlacement>(49, 49, QMC::EnumIsScoped).add({
            {   50, WindowPlacement::Center },
            {   51, WindowPlacement::Free },
        }),
        // enum 'PanelFlavor'
        QtMocHelpers::EnumData<enum PanelFlavor>(52, 52, QMC::EnumIsScoped).add({
            {   40, PanelFlavor::None },
            {   53, PanelFlavor::Widget },
            {   54, PanelFlavor::Qml },
        }),
        // enum 'PanelSide'
        QtMocHelpers::EnumData<enum PanelSide>(16, 16, QMC::EnumIsScoped).add({
            {   40, PanelSide::None },
            {   55, PanelSide::Left },
            {   56, PanelSide::Right },
            {   57, PanelSide::Top },
            {   58, PanelSide::Bottom },
        }),
    };
    return QtMocHelpers::metaObjectData<Branding, qt_meta_tag_ZN9Calamares8BrandingE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Calamares::Branding::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9Calamares8BrandingE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9Calamares8BrandingE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9Calamares8BrandingE_t>.metaTypes,
    nullptr
} };

void Calamares::Branding::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Branding *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { QString _r = _t->string((*reinterpret_cast<std::add_pointer_t<enum StringEntry>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 1: { QString _r = _t->versionedName();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 2: { QString _r = _t->productName();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 3: { QString _r = _t->shortProductName();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 4: { QString _r = _t->shortVersionedName();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { QString _r = _t->styleString((*reinterpret_cast<std::add_pointer_t<enum StyleEntry>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 6: { QString _r = _t->imagePath((*reinterpret_cast<std::add_pointer_t<enum ImageEntry>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 7: { enum PanelSide _r = _t->sidebarSide();
            if (_a[0]) *reinterpret_cast<enum PanelSide*>(_a[0]) = std::move(_r); }  break;
        case 8: { enum PanelSide _r = _t->navigationSide();
            if (_a[0]) *reinterpret_cast<enum PanelSide*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *Calamares::Branding::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Calamares::Branding::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9Calamares8BrandingE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Calamares::Branding::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
