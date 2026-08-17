#include "DistributionViewStep.h"
#include "DistributionPage.h"

#include "GlobalStorage.h"
#include "JobQueue.h"
#include "utils/Logger.h"

CALAMARES_PLUGIN_FACTORY_DEFINITION( DistributionViewStepFactory,
                                     registerPlugin< DistributionViewStep >(); )

class DistributionViewStep::Private
{
public:
    DistributionPage* m_page = nullptr;
    QString m_selectedDistribution;
    QVariantMap m_configuration;
};

DistributionViewStep::DistributionViewStep( QObject* parent )
    : Calamares::ViewStep( parent )
    , d( new Private )
{
    d->m_page = new DistributionPage();

    connect( d->m_page, &DistributionPage::distributionSelected,
             this, &DistributionViewStep::setSelectedDistribution );

    const QString initial = d->m_page->selectedDistribution();
    if ( !initial.isEmpty() )
    {
        setSelectedDistribution( initial );
    }

    emit nextStatusChanged( true );
}

DistributionViewStep::~DistributionViewStep()
{
    if ( d && d->m_page )
    {
        d->m_page->deleteLater();
    }
    delete d;
}

QString DistributionViewStep::prettyName() const
{
    return tr( "Distribution" );
}

QWidget* DistributionViewStep::widget()
{
    return d->m_page;
}

bool DistributionViewStep::isNextEnabled() const
{
    return !d->m_selectedDistribution.isEmpty();
}

bool DistributionViewStep::isBackEnabled() const
{
    return true;
}

bool DistributionViewStep::isAtBeginning() const
{
    return true;
}

bool DistributionViewStep::isAtEnd() const
{
    return true;
}

Calamares::JobList DistributionViewStep::jobs() const
{
    return Calamares::JobList();
}

void DistributionViewStep::onActivate()
{
}

void DistributionViewStep::onLeave()
{
    if ( !d->m_selectedDistribution.isEmpty() )
    {
        Calamares::GlobalStorage* gs = Calamares::JobQueue::instance()->globalStorage();
        if ( gs )
        {
            gs->insert( "DISTRO", d->m_selectedDistribution );

            QString prettyName;
            if ( d->m_selectedDistribution == "arch" )
                prettyName = "Arch Linux";
            else if ( d->m_selectedDistribution == "debian" )
                prettyName = "Debian";
            else if ( d->m_selectedDistribution == "fedora" )
                prettyName = "Fedora";
            else
                prettyName = d->m_selectedDistribution;

            gs->insert( "DISTRO_PRETTY", prettyName );

            cDebug() << "Distribution selected:" << d->m_selectedDistribution;
        }
    }
}

void DistributionViewStep::setConfigurationMap( const QVariantMap& configurationMap )
{
    d->m_configuration = configurationMap;

    if ( d->m_page )
    {
        d->m_page->setConfiguration( configurationMap );
    }
}

void DistributionViewStep::setSelectedDistribution( const QString& distro )
{
    d->m_selectedDistribution = distro;
    emit nextStatusChanged( !distro.isEmpty() );
}

QString DistributionViewStep::selectedDistribution() const
{
    return d->m_selectedDistribution;
}
