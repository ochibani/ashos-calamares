/********************************************************************************
** Form generated from reading UI file 'KeyboardPage.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYBOARDPAGE_H
#define UI_KEYBOARDPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Page_Keyboard
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *KBPreviewLayout;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *physicalModelSelector;
    QPushButton *buttonRestore;
    QHBoxLayout *horizontalLayout_3;
    QListView *layoutSelector;
    QListView *variantSelector;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *LE_TestKeyboard;
    QLabel *label_2;
    QComboBox *groupSelector;

    void setupUi(QWidget *Page_Keyboard)
    {
        if (Page_Keyboard->objectName().isEmpty())
            Page_Keyboard->setObjectName("Page_Keyboard");
        Page_Keyboard->resize(830, 573);
        Page_Keyboard->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(Page_Keyboard);
        verticalLayout->setSpacing(9);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, 12, -1, 12);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        KBPreviewLayout = new QVBoxLayout();
        KBPreviewLayout->setObjectName("KBPreviewLayout");

        horizontalLayout->addLayout(KBPreviewLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        label = new QLabel(Page_Keyboard);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        physicalModelSelector = new QComboBox(Page_Keyboard);
        physicalModelSelector->setObjectName("physicalModelSelector");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(physicalModelSelector->sizePolicy().hasHeightForWidth());
        physicalModelSelector->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(physicalModelSelector);

        buttonRestore = new QPushButton(Page_Keyboard);
        buttonRestore->setObjectName("buttonRestore");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/restore.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        buttonRestore->setIcon(icon);
        buttonRestore->setIconSize(QSize(18, 18));

        horizontalLayout_2->addWidget(buttonRestore);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(9);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        layoutSelector = new QListView(Page_Keyboard);
        layoutSelector->setObjectName("layoutSelector");

        horizontalLayout_3->addWidget(layoutSelector);

        variantSelector = new QListView(Page_Keyboard);
        variantSelector->setObjectName("variantSelector");

        horizontalLayout_3->addWidget(variantSelector);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(-1, 0, -1, -1);
        LE_TestKeyboard = new QLineEdit(Page_Keyboard);
        LE_TestKeyboard->setObjectName("LE_TestKeyboard");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(LE_TestKeyboard->sizePolicy().hasHeightForWidth());
        LE_TestKeyboard->setSizePolicy(sizePolicy1);
        QFont font;
        font.setBold(false);
        LE_TestKeyboard->setFont(font);

        horizontalLayout_4->addWidget(LE_TestKeyboard);

        label_2 = new QLabel(Page_Keyboard);
        label_2->setObjectName("label_2");

        horizontalLayout_4->addWidget(label_2);

        groupSelector = new QComboBox(Page_Keyboard);
        groupSelector->setObjectName("groupSelector");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupSelector->sizePolicy().hasHeightForWidth());
        groupSelector->setSizePolicy(sizePolicy2);
        groupSelector->setMinimumSize(QSize(0, 0));

        horizontalLayout_4->addWidget(groupSelector);


        verticalLayout->addLayout(horizontalLayout_4);

        QWidget::setTabOrder(physicalModelSelector, layoutSelector);
        QWidget::setTabOrder(layoutSelector, variantSelector);
        QWidget::setTabOrder(variantSelector, groupSelector);
        QWidget::setTabOrder(groupSelector, LE_TestKeyboard);
        QWidget::setTabOrder(LE_TestKeyboard, buttonRestore);

        retranslateUi(Page_Keyboard);

        QMetaObject::connectSlotsByName(Page_Keyboard);
    } // setupUi

    void retranslateUi(QWidget *Page_Keyboard)
    {
        label->setText(QCoreApplication::translate("Page_Keyboard", "Keyboard model:", nullptr));
        buttonRestore->setText(QString());
        LE_TestKeyboard->setInputMask(QString());
        LE_TestKeyboard->setText(QString());
        LE_TestKeyboard->setPlaceholderText(QCoreApplication::translate("Page_Keyboard", "Type here to test your keyboard", nullptr));
        label_2->setText(QCoreApplication::translate("Page_Keyboard", "Switch Keyboard:", nullptr));
        (void)Page_Keyboard;
    } // retranslateUi

};

namespace Ui {
    class Page_Keyboard: public Ui_Page_Keyboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEYBOARDPAGE_H
