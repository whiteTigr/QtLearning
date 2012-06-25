#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QLocale>

#include <QMainWindow>
#include <QLabel>
#include <QPushButton>


namespace Ui {
  class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT
    
  public:
    QLabel *lHello;
    QPushButton *bTest;

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
  private:
    Ui::MainWindow *ui;

  private slots:
    void bTest_click();
};

#endif // MAINWINDOW_H
