#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnAstroid_clicked()
{
    //Change background color for render area
    //Add a function to change the background

    this -> ui -> renderArea -> setBackgroundColor(Qt::red);
    this -> ui -> renderArea -> repaint();
}

void MainWindow::on_btnCicloid_clicked()
{
    this -> ui -> renderArea -> setBackgroundColor(Qt::green);
    this -> ui -> renderArea -> repaint();
}

void MainWindow::on_btHyugensCicloid_clicked()
{
    this -> ui -> renderArea -> setBackgroundColor(Qt::blue);
    this -> ui -> renderArea -> repaint();
}

void MainWindow::on_btnHypoCicloid_clicked()
{
    this -> ui -> renderArea -> setBackgroundColor(Qt::yellow);
    this -> ui -> renderArea -> repaint();
}
