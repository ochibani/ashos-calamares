/********************************************************************************
** Form generated from reading UI file 'page_usersetup.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_USERSETUP_H
#define UI_PAGE_USERSETUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Page_UserSetup
{
public:
    QVBoxLayout *verticalLayout_12;
    QSpacerItem *verticalSpacer;
    QLabel *labelWhatIsYourName;
    QHBoxLayout *fullNameLayout;
    QLineEdit *textBoxFullName;
    QLabel *labelFullName;
    QLabel *labelFullNameError;
    QSpacerItem *verticalSpacer_2;
    QLabel *username_label_2;
    QHBoxLayout *usernameLayout;
    QLineEdit *textBoxLoginName;
    QLabel *labelUsername;
    QLabel *labelUsernameError;
    QSpacerItem *verticalSpacer_4;
    QLabel *hostnameLabel;
    QHBoxLayout *hostnameLayout;
    QLineEdit *textBoxHostname;
    QLabel *labelHostname;
    QLabel *labelHostnameError;
    QSpacerItem *hostnameVSpace;
    QLabel *password_label_2;
    QHBoxLayout *userPasswordLayout;
    QLineEdit *textBoxUserPassword;
    QLineEdit *textBoxUserVerifiedPassword;
    QLabel *labelUserPassword;
    QLabel *labelUserPasswordError;
    QSpacerItem *verticalSpacer_5;
    QCheckBox *checkBoxRequireStrongPassword;
    QCheckBox *checkBoxDoAutoLogin;
    QCheckBox *checkBoxReusePassword;
    QSpacerItem *verticalSpacer_6;
    QLabel *labelChooseRootPassword;
    QHBoxLayout *rootPasswordLayout;
    QLineEdit *textBoxRootPassword;
    QLineEdit *textBoxVerifiedRootPassword;
    QLabel *labelRootPassword;
    QLabel *labelRootPasswordError;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout;
    QCheckBox *useADCheckbox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *domainLabel;
    QLineEdit *domainField;
    QHBoxLayout *horizontalLayout;
    QLabel *domainAdminLabel;
    QLineEdit *domainAdminField;
    QLabel *domainPasswordLabel;
    QLineEdit *domainPasswordField;
    QHBoxLayout *horizontalLayout_3;
    QLabel *ipAddressLabel;
    QLineEdit *ipAddressField;
    QSpacerItem *verticalSpacer_7;

    void setupUi(QWidget *Page_UserSetup)
    {
        if (Page_UserSetup->objectName().isEmpty())
            Page_UserSetup->setObjectName("Page_UserSetup");
        Page_UserSetup->resize(862, 683);
        Page_UserSetup->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout_12 = new QVBoxLayout(Page_UserSetup);
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalSpacer = new QSpacerItem(20, 6, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_12->addItem(verticalSpacer);

        labelWhatIsYourName = new QLabel(Page_UserSetup);
        labelWhatIsYourName->setObjectName("labelWhatIsYourName");

        verticalLayout_12->addWidget(labelWhatIsYourName);

        fullNameLayout = new QHBoxLayout();
        fullNameLayout->setObjectName("fullNameLayout");
        textBoxFullName = new QLineEdit(Page_UserSetup);
        textBoxFullName->setObjectName("textBoxFullName");
        textBoxFullName->setMinimumSize(QSize(200, 0));

        fullNameLayout->addWidget(textBoxFullName);

        labelFullName = new QLabel(Page_UserSetup);
        labelFullName->setObjectName("labelFullName");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelFullName->sizePolicy().hasHeightForWidth());
        labelFullName->setSizePolicy(sizePolicy);
        labelFullName->setMinimumSize(QSize(24, 24));
        labelFullName->setMaximumSize(QSize(24, 24));
        labelFullName->setText(QString::fromUtf8(""));
        labelFullName->setScaledContents(true);

        fullNameLayout->addWidget(labelFullName);

        labelFullNameError = new QLabel(Page_UserSetup);
        labelFullNameError->setObjectName("labelFullNameError");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelFullNameError->sizePolicy().hasHeightForWidth());
        labelFullNameError->setSizePolicy(sizePolicy1);
        labelFullNameError->setWordWrap(true);

        fullNameLayout->addWidget(labelFullNameError);


        verticalLayout_12->addLayout(fullNameLayout);

        verticalSpacer_2 = new QSpacerItem(20, 6, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_12->addItem(verticalSpacer_2);

        username_label_2 = new QLabel(Page_UserSetup);
        username_label_2->setObjectName("username_label_2");
        username_label_2->setWordWrap(false);

        verticalLayout_12->addWidget(username_label_2);

        usernameLayout = new QHBoxLayout();
        usernameLayout->setObjectName("usernameLayout");
        textBoxLoginName = new QLineEdit(Page_UserSetup);
        textBoxLoginName->setObjectName("textBoxLoginName");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(textBoxLoginName->sizePolicy().hasHeightForWidth());
        textBoxLoginName->setSizePolicy(sizePolicy2);
        textBoxLoginName->setMinimumSize(QSize(200, 0));

        usernameLayout->addWidget(textBoxLoginName);

        labelUsername = new QLabel(Page_UserSetup);
        labelUsername->setObjectName("labelUsername");
        sizePolicy.setHeightForWidth(labelUsername->sizePolicy().hasHeightForWidth());
        labelUsername->setSizePolicy(sizePolicy);
        labelUsername->setMinimumSize(QSize(24, 24));
        labelUsername->setMaximumSize(QSize(24, 24));
        labelUsername->setScaledContents(true);

        usernameLayout->addWidget(labelUsername);

        labelUsernameError = new QLabel(Page_UserSetup);
        labelUsernameError->setObjectName("labelUsernameError");
        sizePolicy1.setHeightForWidth(labelUsernameError->sizePolicy().hasHeightForWidth());
        labelUsernameError->setSizePolicy(sizePolicy1);
        labelUsernameError->setMinimumSize(QSize(200, 0));
        labelUsernameError->setAlignment(Qt::AlignVCenter);
        labelUsernameError->setWordWrap(true);

        usernameLayout->addWidget(labelUsernameError);


        verticalLayout_12->addLayout(usernameLayout);

        verticalSpacer_4 = new QSpacerItem(20, 6, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_12->addItem(verticalSpacer_4);

        hostnameLabel = new QLabel(Page_UserSetup);
        hostnameLabel->setObjectName("hostnameLabel");
        hostnameLabel->setWordWrap(false);

        verticalLayout_12->addWidget(hostnameLabel);

        hostnameLayout = new QHBoxLayout();
        hostnameLayout->setObjectName("hostnameLayout");
        textBoxHostname = new QLineEdit(Page_UserSetup);
        textBoxHostname->setObjectName("textBoxHostname");
        sizePolicy2.setHeightForWidth(textBoxHostname->sizePolicy().hasHeightForWidth());
        textBoxHostname->setSizePolicy(sizePolicy2);
        textBoxHostname->setMinimumSize(QSize(200, 0));

        hostnameLayout->addWidget(textBoxHostname);

        labelHostname = new QLabel(Page_UserSetup);
        labelHostname->setObjectName("labelHostname");
        sizePolicy.setHeightForWidth(labelHostname->sizePolicy().hasHeightForWidth());
        labelHostname->setSizePolicy(sizePolicy);
        labelHostname->setMinimumSize(QSize(24, 24));
        labelHostname->setMaximumSize(QSize(24, 24));
        labelHostname->setScaledContents(true);

        hostnameLayout->addWidget(labelHostname);

        labelHostnameError = new QLabel(Page_UserSetup);
        labelHostnameError->setObjectName("labelHostnameError");
        sizePolicy1.setHeightForWidth(labelHostnameError->sizePolicy().hasHeightForWidth());
        labelHostnameError->setSizePolicy(sizePolicy1);
        labelHostnameError->setMinimumSize(QSize(200, 0));
        labelHostnameError->setAlignment(Qt::AlignVCenter);
        labelHostnameError->setWordWrap(true);

        hostnameLayout->addWidget(labelHostnameError);


        verticalLayout_12->addLayout(hostnameLayout);

        hostnameVSpace = new QSpacerItem(20, 6, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_12->addItem(hostnameVSpace);

        password_label_2 = new QLabel(Page_UserSetup);
        password_label_2->setObjectName("password_label_2");
        password_label_2->setWordWrap(false);

        verticalLayout_12->addWidget(password_label_2);

        userPasswordLayout = new QHBoxLayout();
        userPasswordLayout->setObjectName("userPasswordLayout");
        textBoxUserPassword = new QLineEdit(Page_UserSetup);
        textBoxUserPassword->setObjectName("textBoxUserPassword");
        sizePolicy2.setHeightForWidth(textBoxUserPassword->sizePolicy().hasHeightForWidth());
        textBoxUserPassword->setSizePolicy(sizePolicy2);
        textBoxUserPassword->setMinimumSize(QSize(200, 0));
        textBoxUserPassword->setEchoMode(QLineEdit::Password);

        userPasswordLayout->addWidget(textBoxUserPassword);

        textBoxUserVerifiedPassword = new QLineEdit(Page_UserSetup);
        textBoxUserVerifiedPassword->setObjectName("textBoxUserVerifiedPassword");
        sizePolicy2.setHeightForWidth(textBoxUserVerifiedPassword->sizePolicy().hasHeightForWidth());
        textBoxUserVerifiedPassword->setSizePolicy(sizePolicy2);
        textBoxUserVerifiedPassword->setMinimumSize(QSize(200, 0));
        textBoxUserVerifiedPassword->setEchoMode(QLineEdit::Password);

        userPasswordLayout->addWidget(textBoxUserVerifiedPassword);

        labelUserPassword = new QLabel(Page_UserSetup);
        labelUserPassword->setObjectName("labelUserPassword");
        sizePolicy.setHeightForWidth(labelUserPassword->sizePolicy().hasHeightForWidth());
        labelUserPassword->setSizePolicy(sizePolicy);
        labelUserPassword->setMinimumSize(QSize(24, 24));
        labelUserPassword->setMaximumSize(QSize(24, 24));
        labelUserPassword->setScaledContents(true);

        userPasswordLayout->addWidget(labelUserPassword);

        labelUserPasswordError = new QLabel(Page_UserSetup);
        labelUserPasswordError->setObjectName("labelUserPasswordError");
        sizePolicy1.setHeightForWidth(labelUserPasswordError->sizePolicy().hasHeightForWidth());
        labelUserPasswordError->setSizePolicy(sizePolicy1);
        labelUserPasswordError->setMinimumSize(QSize(100, 0));
        labelUserPasswordError->setAlignment(Qt::AlignVCenter);
        labelUserPasswordError->setWordWrap(true);

        userPasswordLayout->addWidget(labelUserPasswordError);


        verticalLayout_12->addLayout(userPasswordLayout);

        verticalSpacer_5 = new QSpacerItem(20, 6, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_12->addItem(verticalSpacer_5);

        checkBoxRequireStrongPassword = new QCheckBox(Page_UserSetup);
        checkBoxRequireStrongPassword->setObjectName("checkBoxRequireStrongPassword");

        verticalLayout_12->addWidget(checkBoxRequireStrongPassword);

        checkBoxDoAutoLogin = new QCheckBox(Page_UserSetup);
        checkBoxDoAutoLogin->setObjectName("checkBoxDoAutoLogin");

        verticalLayout_12->addWidget(checkBoxDoAutoLogin);

        checkBoxReusePassword = new QCheckBox(Page_UserSetup);
        checkBoxReusePassword->setObjectName("checkBoxReusePassword");

        verticalLayout_12->addWidget(checkBoxReusePassword);

        verticalSpacer_6 = new QSpacerItem(20, 6, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_12->addItem(verticalSpacer_6);

        labelChooseRootPassword = new QLabel(Page_UserSetup);
        labelChooseRootPassword->setObjectName("labelChooseRootPassword");
        labelChooseRootPassword->setWordWrap(false);

        verticalLayout_12->addWidget(labelChooseRootPassword);

        rootPasswordLayout = new QHBoxLayout();
        rootPasswordLayout->setObjectName("rootPasswordLayout");
        textBoxRootPassword = new QLineEdit(Page_UserSetup);
        textBoxRootPassword->setObjectName("textBoxRootPassword");
        sizePolicy2.setHeightForWidth(textBoxRootPassword->sizePolicy().hasHeightForWidth());
        textBoxRootPassword->setSizePolicy(sizePolicy2);
        textBoxRootPassword->setMinimumSize(QSize(200, 0));
        textBoxRootPassword->setEchoMode(QLineEdit::Password);

        rootPasswordLayout->addWidget(textBoxRootPassword);

        textBoxVerifiedRootPassword = new QLineEdit(Page_UserSetup);
        textBoxVerifiedRootPassword->setObjectName("textBoxVerifiedRootPassword");
        sizePolicy2.setHeightForWidth(textBoxVerifiedRootPassword->sizePolicy().hasHeightForWidth());
        textBoxVerifiedRootPassword->setSizePolicy(sizePolicy2);
        textBoxVerifiedRootPassword->setMinimumSize(QSize(200, 0));
        textBoxVerifiedRootPassword->setEchoMode(QLineEdit::Password);

        rootPasswordLayout->addWidget(textBoxVerifiedRootPassword);

        labelRootPassword = new QLabel(Page_UserSetup);
        labelRootPassword->setObjectName("labelRootPassword");
        sizePolicy.setHeightForWidth(labelRootPassword->sizePolicy().hasHeightForWidth());
        labelRootPassword->setSizePolicy(sizePolicy);
        labelRootPassword->setMinimumSize(QSize(24, 24));
        labelRootPassword->setMaximumSize(QSize(24, 24));
        labelRootPassword->setScaledContents(true);

        rootPasswordLayout->addWidget(labelRootPassword);

        labelRootPasswordError = new QLabel(Page_UserSetup);
        labelRootPasswordError->setObjectName("labelRootPasswordError");
        sizePolicy1.setHeightForWidth(labelRootPasswordError->sizePolicy().hasHeightForWidth());
        labelRootPasswordError->setSizePolicy(sizePolicy1);
        labelRootPasswordError->setMinimumSize(QSize(100, 0));
        labelRootPasswordError->setAlignment(Qt::AlignVCenter);
        labelRootPasswordError->setWordWrap(true);

        rootPasswordLayout->addWidget(labelRootPasswordError);


        verticalLayout_12->addLayout(rootPasswordLayout);

        verticalSpacer_3 = new QSpacerItem(20, 6, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_12->addItem(verticalSpacer_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        useADCheckbox = new QCheckBox(Page_UserSetup);
        useADCheckbox->setObjectName("useADCheckbox");

        verticalLayout->addWidget(useADCheckbox);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        domainLabel = new QLabel(Page_UserSetup);
        domainLabel->setObjectName("domainLabel");

        horizontalLayout_2->addWidget(domainLabel);

        domainField = new QLineEdit(Page_UserSetup);
        domainField->setObjectName("domainField");

        horizontalLayout_2->addWidget(domainField);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        domainAdminLabel = new QLabel(Page_UserSetup);
        domainAdminLabel->setObjectName("domainAdminLabel");

        horizontalLayout->addWidget(domainAdminLabel);

        domainAdminField = new QLineEdit(Page_UserSetup);
        domainAdminField->setObjectName("domainAdminField");

        horizontalLayout->addWidget(domainAdminField);

        domainPasswordLabel = new QLabel(Page_UserSetup);
        domainPasswordLabel->setObjectName("domainPasswordLabel");

        horizontalLayout->addWidget(domainPasswordLabel);

        domainPasswordField = new QLineEdit(Page_UserSetup);
        domainPasswordField->setObjectName("domainPasswordField");
        domainPasswordField->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(domainPasswordField);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        ipAddressLabel = new QLabel(Page_UserSetup);
        ipAddressLabel->setObjectName("ipAddressLabel");

        horizontalLayout_3->addWidget(ipAddressLabel);

        ipAddressField = new QLineEdit(Page_UserSetup);
        ipAddressField->setObjectName("ipAddressField");

        horizontalLayout_3->addWidget(ipAddressField);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(verticalLayout_3);


        verticalLayout_12->addLayout(verticalLayout);

        verticalSpacer_7 = new QSpacerItem(20, 1, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_7);


        retranslateUi(Page_UserSetup);

        QMetaObject::connectSlotsByName(Page_UserSetup);
    } // setupUi

    void retranslateUi(QWidget *Page_UserSetup)
    {
        labelWhatIsYourName->setText(QCoreApplication::translate("Page_UserSetup", "What is your name?", nullptr));
        textBoxFullName->setPlaceholderText(QCoreApplication::translate("Page_UserSetup", "Your Full Name", nullptr));
        labelFullNameError->setText(QString());
        username_label_2->setText(QCoreApplication::translate("Page_UserSetup", "What name do you want to use to log in?", nullptr));
        textBoxLoginName->setPlaceholderText(QCoreApplication::translate("Page_UserSetup", "login", nullptr));
        labelUsernameError->setText(QString());
        hostnameLabel->setText(QCoreApplication::translate("Page_UserSetup", "What is the name of this computer?", nullptr));
#if QT_CONFIG(tooltip)
        textBoxHostname->setToolTip(QCoreApplication::translate("Page_UserSetup", "<small>This name will be used if you make the computer visible to others on a network.</small>", nullptr));
#endif // QT_CONFIG(tooltip)
        textBoxHostname->setPlaceholderText(QCoreApplication::translate("Page_UserSetup", "Computer Name", nullptr));
        labelHostnameError->setText(QString());
        password_label_2->setText(QCoreApplication::translate("Page_UserSetup", "Choose a password to keep your account safe.", nullptr));
#if QT_CONFIG(tooltip)
        textBoxUserPassword->setToolTip(QCoreApplication::translate("Page_UserSetup", "<small>Enter the same password twice, so that it can be checked for typing errors. A good password will contain a mixture of letters, numbers and punctuation, should be at least eight characters long, and should be changed at regular intervals.</small>", nullptr));
#endif // QT_CONFIG(tooltip)
        textBoxUserPassword->setPlaceholderText(QCoreApplication::translate("Page_UserSetup", "Password", nullptr));
#if QT_CONFIG(tooltip)
        textBoxUserVerifiedPassword->setToolTip(QCoreApplication::translate("Page_UserSetup", "<small>Enter the same password twice, so that it can be checked for typing errors. A good password will contain a mixture of letters, numbers and punctuation, should be at least eight characters long, and should be changed at regular intervals.</small>", nullptr));
#endif // QT_CONFIG(tooltip)
        textBoxUserVerifiedPassword->setPlaceholderText(QCoreApplication::translate("Page_UserSetup", "Repeat Password", nullptr));
        labelUserPasswordError->setText(QString());
#if QT_CONFIG(tooltip)
        checkBoxRequireStrongPassword->setToolTip(QCoreApplication::translate("Page_UserSetup", "When this box is checked, password-strength checking is done and you will not be able to use a weak password.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxRequireStrongPassword->setText(QCoreApplication::translate("Page_UserSetup", "Require strong passwords.", nullptr));
        checkBoxDoAutoLogin->setText(QCoreApplication::translate("Page_UserSetup", "Log in automatically without asking for the password.", nullptr));
        checkBoxReusePassword->setText(QCoreApplication::translate("Page_UserSetup", "Use the same password for the administrator account.", nullptr));
        labelChooseRootPassword->setText(QCoreApplication::translate("Page_UserSetup", "Choose a password for the administrator account.", nullptr));
#if QT_CONFIG(tooltip)
        textBoxRootPassword->setToolTip(QCoreApplication::translate("Page_UserSetup", "<small>Enter the same password twice, so that it can be checked for typing errors.</small>", nullptr));
#endif // QT_CONFIG(tooltip)
        textBoxRootPassword->setPlaceholderText(QCoreApplication::translate("Page_UserSetup", "Password", nullptr));
#if QT_CONFIG(tooltip)
        textBoxVerifiedRootPassword->setToolTip(QCoreApplication::translate("Page_UserSetup", "<small>Enter the same password twice, so that it can be checked for typing errors.</small>", nullptr));
#endif // QT_CONFIG(tooltip)
        textBoxVerifiedRootPassword->setPlaceholderText(QCoreApplication::translate("Page_UserSetup", "Repeat Password", nullptr));
        labelRootPasswordError->setText(QString());
        useADCheckbox->setText(QCoreApplication::translate("Page_UserSetup", "Use Active Directory", nullptr));
        domainLabel->setText(QCoreApplication::translate("Page_UserSetup", "Domain:", nullptr));
        domainAdminLabel->setText(QCoreApplication::translate("Page_UserSetup", "Domain Administrator:", nullptr));
        domainPasswordLabel->setText(QCoreApplication::translate("Page_UserSetup", "Password:", nullptr));
        ipAddressLabel->setText(QCoreApplication::translate("Page_UserSetup", "IP Address (optional):", nullptr));
        (void)Page_UserSetup;
    } // retranslateUi

};

namespace Ui {
    class Page_UserSetup: public Ui_Page_UserSetup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_USERSETUP_H
