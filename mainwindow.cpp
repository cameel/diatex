#include "mainwindow.h"




TMainWindow::TMainWindow(QWidget * parent):
    QMainWindow(parent),
    m_DiagramView(this),
    m_Button("Random rectangle", this)
{
}




TMainWindow::~TMainWindow()
{
}
