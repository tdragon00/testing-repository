#ifndef ADMIN_H
#define ADMIN_H
#include "database.h"
#include <QDialog>

namespace Ui {
class admin;
}

class admin : public QDialog
{
    Q_OBJECT

public:
    explicit admin(QWidget *parent = nullptr);
    ~admin();

private:
    Ui::admin *ui;
//    QMainWindow MainObject;
//    DBManager databaseObj;

private slots:

    void admin::  populate_food_table(const QString &countryFood);
    void admin:: update_food_box();

//    void on_AddButton_clicked();

//    void on_revertButton_clicked();

//    void on_ChangePricesButton_clicked();

//    void on_loadSouvenirsAdminBtn_clicked();

//    void on_collegeListComboBox_currentIndexChanged(const QString &arg1);

//    void on_changePriceBtn_clicked();



//    void on_backBtn_clicked();

//    void on_backBtn_2_clicked();

//    void on_addSouvenirs_clicked();

//    void on_deleteSouvenirs_clicked();

//    void on_addButton_clicked();

//    void on_chooseCampusList_currentIndexChanged(const QString &arg1);

//    void on_deleteChosenSouvenir_clicked();
    void on_backBtn_2_clicked();
    void on_deleteSouvenirTableView_activated(const QModelIndex &index);
    void on_comboBox_activated(const QString &arg1);
};

#endif // ADMIN_H
