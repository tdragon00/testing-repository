/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin
{
public:
    QTabWidget *tabWidget;
    QWidget *tab1;
    QStackedWidget *stackedWidget;
    QWidget *AdminMenu;
    QTableView *CampusTable;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *revertButton;
    QPushButton *AddButton;
    QLabel *label_2;
    QWidget *tab2;
    QTableView *deleteSouvenirTableView;
    QLabel *addSouvenirLabel_2;
    QComboBox *foodbox;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_2;
    QPushButton *deleteChosenSouvenir;
    QPushButton *updatebutton;
    QPushButton *backBtn_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName(QString::fromUtf8("admin"));
        admin->resize(867, 465);
        tabWidget = new QTabWidget(admin);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(20, 20, 861, 461));
        tab1 = new QWidget();
        tab1->setObjectName(QString::fromUtf8("tab1"));
        tab1->setEnabled(true);
        tab1->setAutoFillBackground(false);
        tab1->setStyleSheet(QString::fromUtf8(""));
        stackedWidget = new QStackedWidget(tab1);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 681, 281));
        AdminMenu = new QWidget();
        AdminMenu->setObjectName(QString::fromUtf8("AdminMenu"));
        CampusTable = new QTableView(AdminMenu);
        CampusTable->setObjectName(QString::fromUtf8("CampusTable"));
        CampusTable->setGeometry(QRect(10, 10, 461, 281));
        layoutWidget = new QWidget(AdminMenu);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(490, 120, 170, 108));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(AdminMenu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(490, 117, 168, 21));
        revertButton = new QPushButton(AdminMenu);
        revertButton->setObjectName(QString::fromUtf8("revertButton"));
        revertButton->setGeometry(QRect(490, 200, 168, 23));
        AddButton = new QPushButton(AdminMenu);
        AddButton->setObjectName(QString::fromUtf8("AddButton"));
        AddButton->setGeometry(QRect(490, 144, 168, 23));
        label_2 = new QLabel(AdminMenu);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(490, 173, 168, 21));
        stackedWidget->addWidget(AdminMenu);
        tabWidget->addTab(tab1, QString());
        tab2 = new QWidget();
        tab2->setObjectName(QString::fromUtf8("tab2"));
        deleteSouvenirTableView = new QTableView(tab2);
        deleteSouvenirTableView->setObjectName(QString::fromUtf8("deleteSouvenirTableView"));
        deleteSouvenirTableView->setGeometry(QRect(360, 30, 371, 351));
        addSouvenirLabel_2 = new QLabel(tab2);
        addSouvenirLabel_2->setObjectName(QString::fromUtf8("addSouvenirLabel_2"));
        addSouvenirLabel_2->setGeometry(QRect(50, 0, 201, 41));
        foodbox = new QComboBox(tab2);
        foodbox->setObjectName(QString::fromUtf8("foodbox"));
        foodbox->setGeometry(QRect(180, 70, 69, 22));
        lineEdit = new QLineEdit(tab2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(140, 120, 113, 20));
        lineEdit_3 = new QLineEdit(tab2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(140, 160, 113, 20));
        lineEdit_2 = new QLineEdit(tab2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(140, 210, 113, 20));
        deleteChosenSouvenir = new QPushButton(tab2);
        deleteChosenSouvenir->setObjectName(QString::fromUtf8("deleteChosenSouvenir"));
        deleteChosenSouvenir->setGeometry(QRect(150, 250, 75, 20));
        updatebutton = new QPushButton(tab2);
        updatebutton->setObjectName(QString::fromUtf8("updatebutton"));
        updatebutton->setGeometry(QRect(50, 250, 75, 23));
        backBtn_2 = new QPushButton(tab2);
        backBtn_2->setObjectName(QString::fromUtf8("backBtn_2"));
        backBtn_2->setGeometry(QRect(50, 30, 75, 23));
        label_3 = new QLabel(tab2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 120, 47, 13));
        label_4 = new QLabel(tab2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 160, 47, 13));
        label_5 = new QLabel(tab2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 210, 47, 13));
        tabWidget->addTab(tab2, QString());

        retranslateUi(admin);

        tabWidget->setCurrentIndex(1);
        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QDialog *admin)
    {
        admin->setWindowTitle(QCoreApplication::translate("admin", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("admin", "Add New Pending Countries", nullptr));
        revertButton->setText(QCoreApplication::translate("admin", "Revert", nullptr));
        AddButton->setText(QCoreApplication::translate("admin", "Add", nullptr));
        label_2->setText(QCoreApplication::translate("admin", "Revert to Original State", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab1), QCoreApplication::translate("admin", "Tab 1", nullptr));
#if QT_CONFIG(accessibility)
        tab2->setAccessibleName(QCoreApplication::translate("admin", "tab2", nullptr));
#endif // QT_CONFIG(accessibility)
        addSouvenirLabel_2->setText(QCoreApplication::translate("admin", "<html><head/><body><p><span style=\" font-size:16pt;\">Delete Food Item(s)</span><br/></p></body></html>", nullptr));
        deleteChosenSouvenir->setText(QCoreApplication::translate("admin", "Delete", nullptr));
        updatebutton->setText(QCoreApplication::translate("admin", "Update", nullptr));
        backBtn_2->setText(QCoreApplication::translate("admin", "Back", nullptr));
        label_3->setText(QCoreApplication::translate("admin", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("admin", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("admin", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab2), QCoreApplication::translate("admin", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
