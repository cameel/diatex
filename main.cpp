#include <QtGui/QApplication>
#include "mainwindow.h"




int main(int argc, char * argv[])
{
    QApplication application(argc, argv);
    TMainWindow mainWindow;
    mainWindow.show();
    return application.exec();
}
