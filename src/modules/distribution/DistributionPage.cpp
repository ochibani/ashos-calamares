#include "DistributionPage.h"

#include "utils/Retranslator.h"

#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QFile>
#include <QApplication>
#include <QStyle>
#include <QDir>

static constexpr int ICON_SIZE = 48;

DistributionPage::DistributionPage( QWidget* parent )
    : QWidget( parent )
    , m_buttonGroup( new QButtonGroup( this ) )
{
    m_entries = {
        { "arch",   "Arch Linux",   "pacman", ":/icons/arch.svg",   nullptr, nullptr, nullptr },
        { "debian", "Debian",       "apt",    ":/icons/debian.svg", nullptr, nullptr, nullptr },
        { "fedora", "Fedora",       "dnf",    ":/icons/fedora.svg", nullptr, nullptr, nullptr }
    };

    setupUi();
    detectPackageManagers();
    autoSelectFirstAvailable();

    CALAMARES_RETRANSLATE_SLOT( &DistributionPage::retranslate );
}

void DistributionPage::setupUi()
{
    QVBoxLayout* mainLayout = new QVBoxLayout( this );
    mainLayout->setContentsMargins(
        QApplication::style()->pixelMetric( QStyle::PM_LayoutLeftMargin ),
        QApplication::style()->pixelMetric( QStyle::PM_LayoutTopMargin ),
        QApplication::style()->pixelMetric( QStyle::PM_LayoutRightMargin ),
        QApplication::style()->pixelMetric( QStyle::PM_LayoutBottomMargin ) );

    QLabel* titleLabel = new QLabel( this );
    QFont titleFont = titleLabel->font();
    titleFont.setPointSize( 12 );
    titleFont.setBold( true );
    titleLabel->setFont( titleFont );
    mainLayout->addWidget( titleLabel );

    m_titleLabel = titleLabel;
    m_titleLabel->setText( tr( "Please select your distribution:" ) );

    for ( int i = 0; i < m_entries.size(); ++i )
    {
        auto& entry = m_entries[i];

        QHBoxLayout* rowLayout = new QHBoxLayout;
        rowLayout->setSpacing( 12 );

        entry.iconLabel = new QLabel( this );
        QPixmap pixmap( entry.iconPath );
        if ( !pixmap.isNull() )
        {
            entry.iconLabel->setPixmap(
                pixmap.scaled( ICON_SIZE, ICON_SIZE, Qt::KeepAspectRatio, Qt::SmoothTransformation ) );
        }
        entry.iconLabel->setFixedSize( ICON_SIZE, ICON_SIZE );
        rowLayout->addWidget( entry.iconLabel );

        entry.radioButton = new QRadioButton( this );
        entry.radioButton->setText( QString() );
        QFont radioFont = entry.radioButton->font();
        radioFont.setPointSize( 11 );
        entry.radioButton->setFont( radioFont );
        m_buttonGroup->addButton( entry.radioButton, i );
        rowLayout->addWidget( entry.radioButton );

        entry.nameLabel = new QLabel( this );
        QFont nameFont = entry.nameLabel->font();
        nameFont.setPointSize( 11 );
        entry.nameLabel->setFont( nameFont );
        rowLayout->addWidget( entry.nameLabel );

        rowLayout->addStretch();
        mainLayout->addLayout( rowLayout );

        connect( entry.radioButton, &QRadioButton::clicked, this, [this, i]() {
            emit distributionSelected( m_entries[i].id );
        } );
    }

    mainLayout->addStretch();
    setLayout( mainLayout );
}

void DistributionPage::detectPackageManagers()
{
    for ( auto& entry : m_entries )
    {
        bool found = QFile::exists( QStringLiteral( "/usr/bin/%1" ).arg( entry.packageManager ) );
        if ( entry.radioButton )
        {
            entry.radioButton->setEnabled( found );
            entry.iconLabel->setEnabled( found );
        }
    }
}

void DistributionPage::autoSelectFirstAvailable()
{
    for ( auto& entry : m_entries )
    {
        if ( entry.radioButton && entry.radioButton->isEnabled() )
        {
            entry.radioButton->setChecked( true );
            emit distributionSelected( entry.id );
            break;
        }
    }
}

QString DistributionPage::selectedDistribution() const
{
    int id = m_buttonGroup->checkedId();
    if ( id >= 0 && id < m_entries.size() )
        return m_entries[id].id;
    return QString();
}

void DistributionPage::retranslate()
{
    m_titleLabel->setText( tr( "Please select your distribution:" ) );

    for ( auto& entry : m_entries )
    {
        QString translatedName;
        if ( entry.id == QLatin1String( "arch" ) )
            translatedName = tr( "Arch Linux" );
        else if ( entry.id == QLatin1String( "debian" ) )
            translatedName = tr( "Debian" );
        else if ( entry.id == QLatin1String( "fedora" ) )
            translatedName = tr( "Fedora" );
        else
            translatedName = entry.displayName;

        if ( entry.nameLabel )
        {
            entry.nameLabel->setText( translatedName );
        }
    }
}

void DistributionPage::setConfiguration( const QVariantMap& configuration )
{
    m_configuration = configuration;

    if ( configuration.contains( "iconPath" ) )
    {
        QString iconPath = configuration.value( "iconPath" ).toString();
        for ( auto& entry : m_entries )
        {
            QString filePath = iconPath + "/" + entry.id + ".svg";
            QPixmap pixmap( filePath );
            if ( !pixmap.isNull() && entry.iconLabel )
            {
                entry.iconLabel->setPixmap(
                    pixmap.scaled( ICON_SIZE, ICON_SIZE, Qt::KeepAspectRatio, Qt::SmoothTransformation ) );
            }
        }
    }
}
