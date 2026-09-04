/********************************************************************************
** Form generated from reading UI file 'WelcomePage.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEPAGE_H
#define UI_WELCOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WelcomePage
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *aboveTextSpacer;
    QLabel *mainText;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *languageIcon;
    QComboBox *languageWidget;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *donateButton;
    QPushButton *supportButton;
    QPushButton *knownIssuesButton;
    QPushButton *releaseNotesButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *WelcomePage)
    {
        if (WelcomePage->objectName().isEmpty())
            WelcomePage->setObjectName("WelcomePage");
        WelcomePage->resize(593, 400);
        WelcomePage->setWindowTitle(QString::fromUtf8("Form"));
        horizontalLayout = new QHBoxLayout(WelcomePage);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        aboveTextSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(aboveTextSpacer);

        mainText = new QLabel(WelcomePage);
        mainText->setObjectName("mainText");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(3);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mainText->sizePolicy().hasHeightForWidth());
        mainText->setSizePolicy(sizePolicy);
        mainText->setText(QString::fromUtf8("<Calamares welcome text>"));
        mainText->setAlignment(Qt::AlignCenter);
        mainText->setWordWrap(true);

        verticalLayout->addWidget(mainText);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        languageIcon = new QLabel(WelcomePage);
        languageIcon->setObjectName("languageIcon");
        languageIcon->setPixmap(QPixmap(QString::fromUtf8(":/welcome/language-icon-48px.png")));

        horizontalLayout_3->addWidget(languageIcon);

        languageWidget = new QComboBox(WelcomePage);
        languageWidget->setObjectName("languageWidget");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(languageWidget->sizePolicy().hasHeightForWidth());
        languageWidget->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(languageWidget);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        horizontalLayout_3->setStretch(2, 2);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        donateButton = new QPushButton(WelcomePage);
        donateButton->setObjectName("donateButton");
        donateButton->setFlat(true);

        horizontalLayout_4->addWidget(donateButton);

        supportButton = new QPushButton(WelcomePage);
        supportButton->setObjectName("supportButton");
        supportButton->setFlat(true);

        horizontalLayout_4->addWidget(supportButton);

        knownIssuesButton = new QPushButton(WelcomePage);
        knownIssuesButton->setObjectName("knownIssuesButton");
        knownIssuesButton->setFlat(true);

        horizontalLayout_4->addWidget(knownIssuesButton);

        releaseNotesButton = new QPushButton(WelcomePage);
        releaseNotesButton->setObjectName("releaseNotesButton");
        releaseNotesButton->setFlat(true);

        horizontalLayout_4->addWidget(releaseNotesButton);


        horizontalLayout_2->addLayout(horizontalLayout_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(WelcomePage);

        QMetaObject::connectSlotsByName(WelcomePage);
    } // setupUi

    void retranslateUi(QWidget *WelcomePage)
    {
#if QT_CONFIG(tooltip)
        languageIcon->setToolTip(QCoreApplication::translate("WelcomePage", "Select application and system language", nullptr));
#endif // QT_CONFIG(tooltip)
        languageIcon->setText(QString());
#if QT_CONFIG(tooltip)
        languageWidget->setToolTip(QCoreApplication::translate("WelcomePage", "Select application and system language", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        donateButton->setToolTip(QCoreApplication::translate("WelcomePage", "Open donations website", nullptr));
#endif // QT_CONFIG(tooltip)
        donateButton->setText(QCoreApplication::translate("WelcomePage", "&Donate", nullptr));
#if QT_CONFIG(tooltip)
        supportButton->setToolTip(QCoreApplication::translate("WelcomePage", "Open help and support website", nullptr));
#endif // QT_CONFIG(tooltip)
        supportButton->setText(QCoreApplication::translate("WelcomePage", "&Support", nullptr));
#if QT_CONFIG(tooltip)
        knownIssuesButton->setToolTip(QCoreApplication::translate("WelcomePage", "Open issues and bug-tracking website", nullptr));
#endif // QT_CONFIG(tooltip)
        knownIssuesButton->setText(QCoreApplication::translate("WelcomePage", "&Known issues", nullptr));
#if QT_CONFIG(tooltip)
        releaseNotesButton->setToolTip(QCoreApplication::translate("WelcomePage", "Open release notes website", nullptr));
#endif // QT_CONFIG(tooltip)
        releaseNotesButton->setText(QCoreApplication::translate("WelcomePage", "&Release notes", nullptr));
        (void)WelcomePage;
    } // retranslateUi

};

namespace Ui {
    class WelcomePage: public Ui_WelcomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEPAGE_H
