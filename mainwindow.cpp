#include "mainwindow.h"
#include "ui_mainwindow.h"

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
    ui->renderArea->SetBackgroundColor(new QColor(Qt::red));
    ui->renderArea->repaint();
}


void MainWindow::on_btnCycloid_clicked()
{
    ui->renderArea->SetBackgroundColor(new QColor(Qt::green));
    ui->renderArea->repaint();
}


void MainWindow::on_btnHuygens_clicked()
{
    ui->renderArea->SetBackgroundColor(new QColor(Qt::blue));
    ui->renderArea->repaint();
}


void MainWindow::on_btnHypoCycloid_clicked()
{
    ui->renderArea->SetBackgroundColor(new QColor(Qt::yellow));
    ui->renderArea->repaint();
}

