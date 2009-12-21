#include "mainwindow.h"




TMainWindow::TMainWindow(QWidget * parent):
    QMainWindow(parent),
    m_DiagramView(this),
    m_Button("Old text", this)
{
    ChangeButtonText("New text");
}




TMainWindow::~TMainWindow()
{
}




void TMainWindow::ChangeButtonText(const char * pNewText)
{
    m_Button.setText(pNewText);
}
