#ifndef ERASERDATA_H
#define ERASERDATA_H


#include"shapedata.h"
#include<QPainter>
class EraserData:public ShapeData
{
public:
    EraserData();
    EraserData(const QPainterPath &drawpath);
    inline void Setdrawpath(const QPainterPath &drawpath){m_drawpath=drawpath ; };
     inline const QPainterPath &Getdrawpath()const {return m_drawpath ; };
     ~EraserData();
private:
    QPainterPath m_drawpath;
};
#endif // ERASERDATA_H
