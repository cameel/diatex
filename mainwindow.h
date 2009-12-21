#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include "diagramview.h"




class TMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    TMainWindow(QWidget * parent = NULL);
    ~TMainWindow();

    void ChangeButtonText(char * pNewText);

private:
    TDiagramView m_DiagramView;
    QPushButton  m_Button;
};




#endif // MAINWINDOW_H
