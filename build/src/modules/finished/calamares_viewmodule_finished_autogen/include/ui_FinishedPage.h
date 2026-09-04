/********************************************************************************
** Form generated from reading UI file 'FinishedPage.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINISHEDPAGE_H
#define UI_FINISHEDPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FinishedPage
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;
    QLabel *mainText;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCheckBox *restartCheckBox;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *FinishedPage)
    {
        if (FinishedPage->objectName().isEmpty())
            FinishedPage->setObjectName("FinishedPage");
        FinishedPage->resize(593, 400);
        FinishedPage->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(FinishedPage);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        verticalSpacer = new QSpacerItem(20, 50, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        mainText = new QLabel(FinishedPage);
        mainText->setObjectName("mainText");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(3);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mainText->sizePolicy().hasHeightForWidth());
        mainText->setSizePolicy(sizePolicy);
        mainText->setText(QString::fromUtf8("<Calamares finished text>"));

        verticalLayout->addWidget(mainText);

        verticalSpacer_2 = new QSpacerItem(20, 49, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        restartCheckBox = new QCheckBox(FinishedPage);
        restartCheckBox->setObjectName("restartCheckBox");
#if QT_CONFIG(tooltip)
        restartCheckBox->setToolTip(QString::fromUtf8("<Restart checkbox tooltip>"));
#endif // QT_CONFIG(tooltip)
        restartCheckBox->setChecked(false);

        horizontalLayout->addWidget(restartCheckBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addLayout(verticalLayout_2);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);


        retranslateUi(FinishedPage);

        QMetaObject::connectSlotsByName(FinishedPage);
    } // setupUi

    void retranslateUi(QWidget *FinishedPage)
    {
        restartCheckBox->setText(QCoreApplication::translate("FinishedPage", "&Restart now", nullptr));
        (void)FinishedPage;
    } // retranslateUi

};

namespace Ui {
    class FinishedPage: public Ui_FinishedPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINISHEDPAGE_H
