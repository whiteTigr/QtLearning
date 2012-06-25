#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <QTextCodec>

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
  ui->setupUi(this);

  QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));

  lHello = new QLabel("<h2><i>Hello</i><font color=red> Qt!</font></h2>", ui->centralWidget, Qt::Widget);

  bTest = new QPushButton("Test", ui->centralWidget);
  bTest->setGeometry(lHello->x(), lHello->y() + lHello->height(), bTest->width(), bTest->height());
  connect(bTest, SIGNAL(clicked()), this, SLOT(bTest_click()));

  QLabel *lTestCodepage = new QLabel("Russian: Русский текст", ui->centralWidget, Qt::Widget);
  lTestCodepage->setGeometry(bTest->x(), bTest->y() + bTest->height(), lTestCodepage->width(), lTestCodepage->height());
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::bTest_click()
{
  QMessageBox *msg = new QMessageBox();
  msg->setText("Приложение будет закрыто.");
  msg->setInformativeText("Но позже.");
  msg->exec();  
  delete msg;

  window()->close();
}
