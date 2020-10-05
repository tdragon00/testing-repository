/********************************************************************************
** Form generated from reading UI file 'CustomVacation.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMVACATION_H
#define UI_CUSTOMVACATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomVacation
{
public:
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButtonFirst;
    QPushButton *pushButtonSecond;
    QListWidget *listWidgetFirst;
    QListWidget *listWidgetSecond;
    QLabel *label_4;
    QLabel *label_5;
    QListWidget *foodsAvailable;
    QLabel *label_6;
    QListWidget *foodsSelected;
    QPushButton *pushButtonFood1;
    QPushButton *pushButtonFood2;
    QLabel *label_7;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_3;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *thirteenCityPlan;
    QPushButton *bookYourTrip;
    QLabel *hiddenLabel;
    QLabel *result_lbl;

    void setupUi(QWidget *CustomVacation)
    {
        if (CustomVacation->objectName().isEmpty())
            CustomVacation->setObjectName(QString::fromUtf8("CustomVacation"));
        CustomVacation->resize(677, 658);
        label_2 = new QLabel(CustomVacation);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(267, 30, 101, 20));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label = new QLabel(CustomVacation);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 30, 111, 21));
        QFont font1;
        font1.setPointSize(12);
        label->setFont(font1);
        pushButtonFirst = new QPushButton(CustomVacation);
        pushButtonFirst->setObjectName(QString::fromUtf8("pushButtonFirst"));
        pushButtonFirst->setGeometry(QRect(290, 120, 61, 32));
        pushButtonSecond = new QPushButton(CustomVacation);
        pushButtonSecond->setObjectName(QString::fromUtf8("pushButtonSecond"));
        pushButtonSecond->setGeometry(QRect(290, 150, 61, 32));
        listWidgetFirst = new QListWidget(CustomVacation);
        listWidgetFirst->setObjectName(QString::fromUtf8("listWidgetFirst"));
        listWidgetFirst->setGeometry(QRect(20, 90, 256, 111));
        listWidgetSecond = new QListWidget(CustomVacation);
        listWidgetSecond->setObjectName(QString::fromUtf8("listWidgetSecond"));
        listWidgetSecond->setGeometry(QRect(370, 90, 256, 111));
        label_4 = new QLabel(CustomVacation);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 70, 141, 16));
        label_5 = new QLabel(CustomVacation);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(370, 70, 281, 16));
        foodsAvailable = new QListWidget(CustomVacation);
        foodsAvailable->setObjectName(QString::fromUtf8("foodsAvailable"));
        foodsAvailable->setGeometry(QRect(20, 230, 256, 111));
        label_6 = new QLabel(CustomVacation);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 210, 141, 16));
        foodsSelected = new QListWidget(CustomVacation);
        foodsSelected->setObjectName(QString::fromUtf8("foodsSelected"));
        foodsSelected->setGeometry(QRect(370, 230, 256, 111));
        pushButtonFood1 = new QPushButton(CustomVacation);
        pushButtonFood1->setObjectName(QString::fromUtf8("pushButtonFood1"));
        pushButtonFood1->setGeometry(QRect(290, 250, 61, 32));
        pushButtonFood2 = new QPushButton(CustomVacation);
        pushButtonFood2->setObjectName(QString::fromUtf8("pushButtonFood2"));
        pushButtonFood2->setGeometry(QRect(290, 280, 61, 32));
        label_7 = new QLabel(CustomVacation);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(370, 210, 161, 16));
        scrollArea_2 = new QScrollArea(CustomVacation);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(330, 380, 311, 201));
        scrollArea_2->setFrameShape(QFrame::NoFrame);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 311, 201));
        verticalLayoutWidget_2 = new QWidget(scrollAreaWidgetContents_3);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 10, 281, 181));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        scrollArea_2->setWidget(scrollAreaWidgetContents_3);
        scrollArea = new QScrollArea(CustomVacation);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(30, 380, 281, 201));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 281, 201));
        scrollArea->setWidget(scrollAreaWidgetContents);
        thirteenCityPlan = new QPushButton(CustomVacation);
        thirteenCityPlan->setObjectName(QString::fromUtf8("thirteenCityPlan"));
        thirteenCityPlan->setGeometry(QRect(60, 340, 161, 28));
        bookYourTrip = new QPushButton(CustomVacation);
        bookYourTrip->setObjectName(QString::fromUtf8("bookYourTrip"));
        bookYourTrip->setGeometry(QRect(410, 590, 181, 41));
        hiddenLabel = new QLabel(CustomVacation);
        hiddenLabel->setObjectName(QString::fromUtf8("hiddenLabel"));
        hiddenLabel->setEnabled(true);
        hiddenLabel->setGeometry(QRect(530, 630, 58, 16));
        result_lbl = new QLabel(CustomVacation);
        result_lbl->setObjectName(QString::fromUtf8("result_lbl"));
        result_lbl->setGeometry(QRect(40, 600, 311, 31));

        retranslateUi(CustomVacation);

        QMetaObject::connectSlotsByName(CustomVacation);
    } // setupUi

    void retranslateUi(QWidget *CustomVacation)
    {
        CustomVacation->setWindowTitle(QCoreApplication::translate("CustomVacation", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("CustomVacation", "Plan Your Trip!", nullptr));
        label->setText(QCoreApplication::translate("CustomVacation", "Welcome, guest", nullptr));
        pushButtonFirst->setText(QCoreApplication::translate("CustomVacation", ">>", nullptr));
        pushButtonSecond->setText(QCoreApplication::translate("CustomVacation", "<<", nullptr));
        label_4->setText(QCoreApplication::translate("CustomVacation", "Cities Available", nullptr));
        label_5->setText(QCoreApplication::translate("CustomVacation", "Destination Cities (check preferred start city)", nullptr));
        label_6->setText(QCoreApplication::translate("CustomVacation", "Foods Available", nullptr));
        pushButtonFood1->setText(QCoreApplication::translate("CustomVacation", ">>", nullptr));
        pushButtonFood2->setText(QCoreApplication::translate("CustomVacation", "<<", nullptr));
        label_7->setText(QCoreApplication::translate("CustomVacation", "Foods added to your cart", nullptr));
        thirteenCityPlan->setText(QCoreApplication::translate("CustomVacation", "13 Cities Trip", nullptr));
        bookYourTrip->setText(QCoreApplication::translate("CustomVacation", "Book your Trip", nullptr));
        hiddenLabel->setText(QString());
        result_lbl->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CustomVacation: public Ui_CustomVacation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMVACATION_H
