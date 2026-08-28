calamares_add_plugin(distribution
    TYPE viewmodule
    EXPORT_MACRO PLUGINDLLEXPORT_PRO
    SOURCES
        DistributionViewStep.cpp
        DistributionPage.cpp
    RESOURCES
        distribution.qrc
    LINK_PRIVATE_LIBRARIES
        Calamares::calamaresui
)
