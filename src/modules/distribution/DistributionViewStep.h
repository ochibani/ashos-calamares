#ifndef DISTRIBUTIONVIEWSTEP_H
#define DISTRIBUTIONVIEWSTEP_H

#include <QObject>
#include <QVariantMap>

#include "utils/PluginFactory.h"
#include "viewpages/ViewStep.h"

#include "DllMacro.h"

class DistributionPage;

class PLUGINDLLEXPORT DistributionViewStep : public Calamares::ViewStep
{
    Q_OBJECT

public:
    explicit DistributionViewStep( QObject* parent = nullptr );
    ~DistributionViewStep() override;

    QString prettyName() const override;
    QWidget* widget() override;

    bool isNextEnabled() const override;
    bool isBackEnabled() const override;
    bool isAtBeginning() const override;
    bool isAtEnd() const override;

    Calamares::JobList jobs() const override;

    void onActivate() override;
    void onLeave() override;

    void setConfigurationMap( const QVariantMap& configurationMap ) override;

    void setSelectedDistribution( const QString& distro );
    QString selectedDistribution() const;

private:
    class Private;
    Private* d;
};

CALAMARES_PLUGIN_FACTORY_DECLARATION( DistributionViewStepFactory )

#endif
