#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
  ui->setupUi(this);

  label = new QLabel("Hello qt", ui->centralWidget, Qt::Widget);
}

MainWindow::~MainWindow()
{
  delete ui;
}
