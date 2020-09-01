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
    //Set the render area's shape
    this -> ui -> renderArea -> setShape(RenderArea::Astroid);
    this -> ui -> renderArea -> repaint();
}

void MainWindow::on_btnCicloid_clicked()
{
    this -> ui -> renderArea -> setShape(RenderArea::Cycloid);
    this -> ui -> renderArea -> repaint();
}

void MainWindow::on_btHyugensCicloid_clicked()
{
    this -> ui -> renderArea -> setShape(RenderArea::HyugensCycloid);
    this -> ui -> renderArea -> repaint();
}

void MainWindow::on_btnHypoCicloid_clicked()
{
    this -> ui -> renderArea -> setShape(RenderArea::HypoCycloid);
    this -> ui -> renderArea -> repaint();
}
