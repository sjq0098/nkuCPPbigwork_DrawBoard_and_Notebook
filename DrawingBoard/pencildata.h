#ifndef PENCILDATA_H
#define PENCILDATA_H
#include"shapedata.h"
#include<QPainter>
class PencilData:public ShapeData
{
public:
    PencilData();
    PencilData(const QPainterPath &drawpath);
    inline void Setdrawpath(const QPainterPath &drawpath){m_drawpath=drawpath ; };
     inline const QPainterPath &Getdrawpath()const {return m_drawpath ; };
     ~PencilData();
private:
    QPainterPath m_drawpath;
};

#endif // PENCILDATA_H
