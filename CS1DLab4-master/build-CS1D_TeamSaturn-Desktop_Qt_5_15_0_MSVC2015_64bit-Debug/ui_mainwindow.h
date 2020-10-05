/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *LoginPage;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *usernameLabel_2;
    QLineEdit *usernameLineEdit_2;
    QLabel *passwordLabel_2;
    QLineEdit *passwordLineEdit_2;
    QPushButton *loginPushButton;
    QPushButton *clearPushButton;
    QLabel *mainWindowLogo;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *countryInfo;
    QPushButton *displayFood;
    QWidget *CityViewPage;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QComboBox *startingCityComboBox_2;
    QTableView *CityTableView;
    QPushButton *backButton1;
    QWidget *FoodViewPage;
    QPushButton *backButton2;
    QTableView *FoodViewTable;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_9;
    QComboBox *foodItemComboBox;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1051, 603);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setAutoFillBackground(false);
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        LoginPage = new QWidget();
        LoginPage->setObjectName(QString::fromUtf8("LoginPage"));
        layoutWidget_2 = new QWidget(LoginPage);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(410, 100, 251, 171));
        gridLayout = new QGridLayout(layoutWidget_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 1, 1, 2);

        usernameLabel_2 = new QLabel(layoutWidget_2);
        usernameLabel_2->setObjectName(QString::fromUtf8("usernameLabel_2"));

        gridLayout->addWidget(usernameLabel_2, 1, 0, 1, 1);

        usernameLineEdit_2 = new QLineEdit(layoutWidget_2);
        usernameLineEdit_2->setObjectName(QString::fromUtf8("usernameLineEdit_2"));
        usernameLineEdit_2->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(usernameLineEdit_2, 1, 1, 1, 2);

        passwordLabel_2 = new QLabel(layoutWidget_2);
        passwordLabel_2->setObjectName(QString::fromUtf8("passwordLabel_2"));

        gridLayout->addWidget(passwordLabel_2, 2, 0, 1, 1);

        passwordLineEdit_2 = new QLineEdit(layoutWidget_2);
        passwordLineEdit_2->setObjectName(QString::fromUtf8("passwordLineEdit_2"));
        passwordLineEdit_2->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        passwordLineEdit_2->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(passwordLineEdit_2, 2, 1, 1, 2);

        loginPushButton = new QPushButton(layoutWidget_2);
        loginPushButton->setObjectName(QString::fromUtf8("loginPushButton"));

        gridLayout->addWidget(loginPushButton, 3, 0, 1, 2);

        clearPushButton = new QPushButton(layoutWidget_2);
        clearPushButton->setObjectName(QString::fromUtf8("clearPushButton"));

        gridLayout->addWidget(clearPushButton, 3, 2, 1, 1);

        mainWindowLogo = new QLabel(layoutWidget_2);
        mainWindowLogo->setObjectName(QString::fromUtf8("mainWindowLogo"));
        mainWindowLogo->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(mainWindowLogo, 0, 0, 1, 1);

        layoutWidget = new QWidget(LoginPage);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(410, 300, 212, 100));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        countryInfo = new QPushButton(layoutWidget);
        countryInfo->setObjectName(QString::fromUtf8("countryInfo"));

        verticalLayout_2->addWidget(countryInfo);

        displayFood = new QPushButton(layoutWidget);
        displayFood->setObjectName(QString::fromUtf8("displayFood"));

        verticalLayout_2->addWidget(displayFood);

        stackedWidget->addWidget(LoginPage);
        CityViewPage = new QWidget();
        CityViewPage->setObjectName(QString::fromUtf8("CityViewPage"));
        CityViewPage->setEnabled(true);
        groupBox = new QGroupBox(CityViewPage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(5, 76, 201, 501));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        startingCityComboBox_2 = new QComboBox(groupBox);
        startingCityComboBox_2->setObjectName(QString::fromUtf8("startingCityComboBox_2"));

        gridLayout_4->addWidget(startingCityComboBox_2, 0, 0, 1, 1);

        CityTableView = new QTableView(CityViewPage);
        CityTableView->setObjectName(QString::fromUtf8("CityTableView"));
        CityTableView->setGeometry(QRect(209, 20, 791, 557));
        CityTableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        CityTableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        backButton1 = new QPushButton(CityViewPage);
        backButton1->setObjectName(QString::fromUtf8("backButton1"));
        backButton1->setGeometry(QRect(10, 30, 80, 22));
        stackedWidget->addWidget(CityViewPage);
        FoodViewPage = new QWidget();
        FoodViewPage->setObjectName(QString::fromUtf8("FoodViewPage"));
        backButton2 = new QPushButton(FoodViewPage);
        backButton2->setObjectName(QString::fromUtf8("backButton2"));
        backButton2->setGeometry(QRect(10, 30, 80, 22));
        FoodViewTable = new QTableView(FoodViewPage);
        FoodViewTable->setObjectName(QString::fromUtf8("FoodViewTable"));
        FoodViewTable->setGeometry(QRect(259, 20, 741, 557));
        FoodViewTable->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        FoodViewTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        groupBox_2 = new QGroupBox(FoodViewPage);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(5, 76, 241, 501));
        gridLayout_9 = new QGridLayout(groupBox_2);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        foodItemComboBox = new QComboBox(groupBox_2);
        foodItemComboBox->setObjectName(QString::fromUtf8("foodItemComboBox"));

        gridLayout_9->addWidget(foodItemComboBox, 0, 0, 1, 1);

        stackedWidget->addWidget(FoodViewPage);

        gridLayout_2->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "LOGIN", nullptr));
        usernameLabel_2->setText(QCoreApplication::translate("MainWindow", "Username: ", nullptr));
        passwordLabel_2->setText(QCoreApplication::translate("MainWindow", "Password: ", nullptr));
        loginPushButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        clearPushButton->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        mainWindowLogo->setText(QString());
        countryInfo->setText(QCoreApplication::translate("MainWindow", "Country Information", nullptr));
        displayFood->setText(QCoreApplication::translate("MainWindow", "Traditional Food Items", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
        backButton1->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        backButton2->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
