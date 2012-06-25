#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
  ui->setupUi(this);

  label = new QLabel("<h2><i>Hello</i><font color=red> Qt!</font></h2>", ui->centralWidget, Qt::Widget);
}

MainWindow::~MainWindow()
{
  delete ui;
}
