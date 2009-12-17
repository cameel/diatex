#ifndef DIAGRAMVIEW_H
#define DIAGRAMVIEW_H


#include <QtGui/QGraphicsView>




class TDiagramView : public QGraphicsView
{
    Q_OBJECT;

public:
    TDiagramView(QWidget * pParent);
    ~TDiagramView() {}
};




#endif // DIAGRAMVIEW_H
