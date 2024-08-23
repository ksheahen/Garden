#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);

    QListWidgetItem *tomatoItem = new QListWidgetItem;
    tomatoItem->setText("Tomato");
    ui->listVegetables->addItem(tomatoItem);
    // ui->listVegetables->addItem("Item 2");
    // ui->listVegetables->addItem("Item 3");

}

MainWindow::~MainWindow()
{
    delete ui;
}

//When the vegetables button is clicked on the home page (index 0),
//it switches the UI on the stacked widget to the vegetables page (index 1).
void MainWindow::on_btnMainVegetables_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


//When the fruits button is clicked on the home page (index 0),
//it switches the UI on the stacked widget to the fruits page (index 2).
void MainWindow::on_btnMainFruit_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

//Return to the Home Page (index 0) from the Fruits Page (index 2)
void MainWindow::on_btnReturn_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


//Return to the Home Page (index 0) from the Vegetables Page (index 1).
void MainWindow::on_btnReturn_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


//When Item 1 is clicked, the swVegetables index will be set to 0.


