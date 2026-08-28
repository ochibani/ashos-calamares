#ifndef DISTRIBUTIONPAGE_H
#define DISTRIBUTIONPAGE_H

#include <QWidget>
#include <QVariantMap>
#include <QButtonGroup>
#include <QRadioButton>
#include <QLabel>

class DistributionPage : public QWidget
{
    Q_OBJECT

public:
    explicit DistributionPage( QWidget* parent = nullptr );

    QString selectedDistribution() const;
    void setConfiguration( const QVariantMap& configuration );

signals:
    void distributionSelected( const QString& distro );

private:
    struct DistroEntry
    {
        QString id;
        QString displayName;
        QString packageManager;
        QString iconPath;
        QRadioButton* radioButton = nullptr;
        QLabel* iconLabel = nullptr;
        QLabel* nameLabel = nullptr;
    };

    void setupUi();
    void detectPackageManagers();
    void autoSelectFirstAvailable();
    void retranslate();

    QButtonGroup* m_buttonGroup;
    QList<DistroEntry> m_entries;
    QVariantMap m_configuration;
    QLabel* m_titleLabel = nullptr;
};

#endif
