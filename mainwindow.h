#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QtGui/QMainWindow>
#include "diagramview.h"




namespace Ui
{
    class TMainWindow;
}




class TMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    TMainWindow(QWidget * parent = NULL);
    ~TMainWindow();

private:
    TDiagramView m_DiagramView;
};




#endif // MAINWINDOW_H
