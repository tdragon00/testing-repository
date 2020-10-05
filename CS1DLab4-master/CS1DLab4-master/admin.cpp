#include "admin.h"
#include "ui_admin.h"
#include "database.h"
#include "mainwindow.h"

admin::admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::admin)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentWidget(ui->AdminMenu);
    this->setWindowTitle("Maintenance");
    ui->tabWidget->setTabText(0, "Countries");
    ui->tabWidget->setTabText(1, "Traditional Food Items");
    ui->tabWidget_2->setTabText(0, "Add/Delete");
    ui->tabWidget_2->setTabText(1, "Edit");
    populate_food_table("");


}
//populated the food table with values
void admin::  populate_food_table(const QString &countryFood)
{


    QSqlQueryModel* model = new QSqlQueryModel;
    QSqlQuery query;
    if(countryFood == "" || countryFood == "Select City")
    {
        query.prepare("select (select cities.CityName from cities where cities_foods.IdCity= _id) as CityName, FoodName,Cost from cities_foods");
        query.exec();
    }
    else
    {
        query.prepare("select (select cities.CityName from cities where cities_foods.IdCity= _id and CityName= '"+countryFood+"' ) as CityName,  FoodName,Cost from cities_foods WHERE CityName IS NOT NULL");
        query.exec();
    }
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("City Name"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Traditional Food Item"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Cost"));

    ui->deleteSouvenirTableView->setModel(model);
    ui->deleteSouvenirTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->deleteSouvenirTableView->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    /*
    QSqlQuery query;


    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT FoodName, Cost FROM cities_food");
    model->setHeaderData(0, Qt::Horizontal, tr("Name"));
    model->setHeaderData(1, Qt::Horizontal, tr("Price"));
    query.exec();

   ui->deleteSouvenirTableView->setModel(model);
    ui->deleteSouvenirTableView->show();
    */

}

void admin:: update_food_box()
{
        QSqlQuery query;

    ui->foodbox->clear();
    ui->foodbox->addItem("Select Foodname");

    query.prepare("SELECT Foodname FROM cities_food ");
    query.exec();

while(query.next())
{
    ui->foodbox->addItem(query.value(0).toString());
}
}







admin::~admin()
{
    delete ui;
}

void admin::on_backBtn_2_clicked()
{


}

void admin::on_deleteSouvenirTableView_activated(const QModelIndex &index)
{

}

void admin::on_comboBox_activated(const QString &arg1)
{

}
