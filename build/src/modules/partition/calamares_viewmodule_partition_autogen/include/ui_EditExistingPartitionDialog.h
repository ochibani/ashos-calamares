/********************************************************************************
** Form generated from reading UI file 'EditExistingPartitionDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITEXISTINGPARTITIONDIALOG_H
#define UI_EDITEXISTINGPARTITIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <kpmcore/gui/partresizerwidget.h>
#include "gui/EncryptWidget.h"

QT_BEGIN_NAMESPACE

class Ui_EditExistingPartitionDialog
{
public:
    QVBoxLayout *verticalLayout;
    PartResizerWidget *partResizerWidget;
    QFormLayout *formLayout;
    QLabel *label_3;
    QRadioButton *keepRadioButton;
    QRadioButton *formatRadioButton;
    QLabel *label_2;
    QLabel *mountPointLabel;
    QComboBox *mountPointComboBox;
    QLabel *label;
    QSpinBox *sizeSpinBox;
    QLabel *fileSystemLabel;
    QComboBox *fileSystemComboBox;
    QLabel *label_4;
    QListWidget *m_listFlags;
    QLineEdit *fileSystemLabelEdit;
    QLabel *fileSystemLabelLabel;
    QLabel *mountPointExplanation;
    EncryptWidget *encryptWidget;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditExistingPartitionDialog)
    {
        if (EditExistingPartitionDialog->objectName().isEmpty())
            EditExistingPartitionDialog->setObjectName("EditExistingPartitionDialog");
        EditExistingPartitionDialog->resize(570, 689);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EditExistingPartitionDialog->sizePolicy().hasHeightForWidth());
        EditExistingPartitionDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(EditExistingPartitionDialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        partResizerWidget = new PartResizerWidget(EditExistingPartitionDialog);
        partResizerWidget->setObjectName("partResizerWidget");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(partResizerWidget->sizePolicy().hasHeightForWidth());
        partResizerWidget->setSizePolicy(sizePolicy1);
        partResizerWidget->setMinimumSize(QSize(0, 59));

        verticalLayout->addWidget(partResizerWidget);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        label_3 = new QLabel(EditExistingPartitionDialog);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_3);

        keepRadioButton = new QRadioButton(EditExistingPartitionDialog);
        keepRadioButton->setObjectName("keepRadioButton");
        keepRadioButton->setChecked(true);

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, keepRadioButton);

        formatRadioButton = new QRadioButton(EditExistingPartitionDialog);
        formatRadioButton->setObjectName("formatRadioButton");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, formatRadioButton);

        label_2 = new QLabel(EditExistingPartitionDialog);
        label_2->setObjectName("label_2");
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMinimumSize(QSize(300, 0));
        label_2->setWordWrap(true);

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, label_2);

        mountPointLabel = new QLabel(EditExistingPartitionDialog);
        mountPointLabel->setObjectName("mountPointLabel");

        formLayout->setWidget(8, QFormLayout::ItemRole::LabelRole, mountPointLabel);

        mountPointComboBox = new QComboBox(EditExistingPartitionDialog);
        mountPointComboBox->setObjectName("mountPointComboBox");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mountPointComboBox->sizePolicy().hasHeightForWidth());
        mountPointComboBox->setSizePolicy(sizePolicy2);
        mountPointComboBox->setEditable(true);

        formLayout->setWidget(8, QFormLayout::ItemRole::FieldRole, mountPointComboBox);

        label = new QLabel(EditExistingPartitionDialog);
        label->setObjectName("label");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label);

        sizeSpinBox = new QSpinBox(EditExistingPartitionDialog);
        sizeSpinBox->setObjectName("sizeSpinBox");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, sizeSpinBox);

        fileSystemLabel = new QLabel(EditExistingPartitionDialog);
        fileSystemLabel->setObjectName("fileSystemLabel");

        formLayout->setWidget(5, QFormLayout::ItemRole::LabelRole, fileSystemLabel);

        fileSystemComboBox = new QComboBox(EditExistingPartitionDialog);
        fileSystemComboBox->setObjectName("fileSystemComboBox");

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, fileSystemComboBox);

        label_4 = new QLabel(EditExistingPartitionDialog);
        label_4->setObjectName("label_4");

        formLayout->setWidget(15, QFormLayout::ItemRole::LabelRole, label_4);

        m_listFlags = new QListWidget(EditExistingPartitionDialog);
        m_listFlags->setObjectName("m_listFlags");
        m_listFlags->setAlternatingRowColors(true);
        m_listFlags->setSelectionMode(QAbstractItemView::NoSelection);
        m_listFlags->setSortingEnabled(true);

        formLayout->setWidget(15, QFormLayout::ItemRole::FieldRole, m_listFlags);

        fileSystemLabelEdit = new QLineEdit(EditExistingPartitionDialog);
        fileSystemLabelEdit->setObjectName("fileSystemLabelEdit");
        fileSystemLabelEdit->setMaxLength(16);

        formLayout->setWidget(13, QFormLayout::ItemRole::FieldRole, fileSystemLabelEdit);

        fileSystemLabelLabel = new QLabel(EditExistingPartitionDialog);
        fileSystemLabelLabel->setObjectName("fileSystemLabelLabel");

        formLayout->setWidget(13, QFormLayout::ItemRole::LabelRole, fileSystemLabelLabel);

        mountPointExplanation = new QLabel(EditExistingPartitionDialog);
        mountPointExplanation->setObjectName("mountPointExplanation");

        formLayout->setWidget(10, QFormLayout::ItemRole::FieldRole, mountPointExplanation);

        encryptWidget = new EncryptWidget(EditExistingPartitionDialog);
        encryptWidget->setObjectName("encryptWidget");

        formLayout->setWidget(11, QFormLayout::ItemRole::FieldRole, encryptWidget);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        formLayout->setItem(12, QFormLayout::ItemRole::FieldRole, verticalSpacer);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(EditExistingPartitionDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        label_3->setBuddy(keepRadioButton);
        mountPointLabel->setBuddy(mountPointComboBox);
        label->setBuddy(sizeSpinBox);
        fileSystemLabel->setBuddy(fileSystemComboBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(sizeSpinBox, keepRadioButton);
        QWidget::setTabOrder(keepRadioButton, formatRadioButton);
        QWidget::setTabOrder(formatRadioButton, mountPointComboBox);
        QWidget::setTabOrder(mountPointComboBox, buttonBox);

        retranslateUi(EditExistingPartitionDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, EditExistingPartitionDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, EditExistingPartitionDialog, qOverload<>(&QDialog::reject));

        mountPointComboBox->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(EditExistingPartitionDialog);
    } // setupUi

    void retranslateUi(QDialog *EditExistingPartitionDialog)
    {
        EditExistingPartitionDialog->setWindowTitle(QCoreApplication::translate("EditExistingPartitionDialog", "Edit Existing Partition", nullptr));
        label_3->setText(QCoreApplication::translate("EditExistingPartitionDialog", "Con&tent:", nullptr));
        keepRadioButton->setText(QCoreApplication::translate("EditExistingPartitionDialog", "&Keep", nullptr));
        formatRadioButton->setText(QCoreApplication::translate("EditExistingPartitionDialog", "Format", nullptr));
        label_2->setText(QCoreApplication::translate("EditExistingPartitionDialog", "Warning: Formatting the partition will erase all existing data.", nullptr));
        mountPointLabel->setText(QCoreApplication::translate("EditExistingPartitionDialog", "&Mount Point:", nullptr));
        label->setText(QCoreApplication::translate("EditExistingPartitionDialog", "Si&ze:", nullptr));
        sizeSpinBox->setSuffix(QCoreApplication::translate("EditExistingPartitionDialog", " MiB", nullptr));
        fileSystemLabel->setText(QCoreApplication::translate("EditExistingPartitionDialog", "Fi&le System:", nullptr));
        label_4->setText(QCoreApplication::translate("EditExistingPartitionDialog", "Flags:", nullptr));
#if QT_CONFIG(tooltip)
        fileSystemLabelEdit->setToolTip(QCoreApplication::translate("EditExistingPartitionDialog", "Label for the filesystem", nullptr));
#endif // QT_CONFIG(tooltip)
        fileSystemLabelLabel->setText(QCoreApplication::translate("EditExistingPartitionDialog", "FS Label:", nullptr));
        mountPointExplanation->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class EditExistingPartitionDialog: public Ui_EditExistingPartitionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITEXISTINGPARTITIONDIALOG_H
