#include "mainwindow.h"




TMainWindow::TMainWindow(QWidget * parent):
    QMainWindow(parent),
    m_DiagramView(this),
    m_Button(tr("Random rectangle"), this)
{
}




TMainWindow::~TMainWindow()
{
}
