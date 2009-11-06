#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QtGui/QMainWindow>




namespace Ui
{
    class MainWindow;
}




class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget * parent = NULL);
    ~MainWindow();
};




#endif // MAINWINDOW_H
