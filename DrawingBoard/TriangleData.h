#ifndef TRIANGLE_H
#define TRIANGLE_H

#include"shapedata.h"
class TriangleData:public ShapeData
{
public:
    TriangleData();
    TriangleData(const double &dStartPosX,const double &dStartPosY,const double &dTriangleW,const double &dTriangleH);
    ~TriangleData();
    inline void SetStartPosX(const double &dStartPosX){m_dStartPosX=dStartPosX  ; };
    inline void SetStartPosY(const double &dStartPosY){m_dStartPosX=dStartPosY  ; };
    inline void SetTriangleW(const double &dTriangleW){m_dTriangleW=dTriangleW  ; };
    inline void SetTriangleH(const double &dTriangleH){m_dTriangleW=dTriangleH  ; };
    inline const double &GetStartPosX()const {return m_dStartPosX ; };
    inline const double &GetStartPosY()const{return m_dStartPosY ; };
    inline const double &GetTriangleW()const{return m_dTriangleW ; };
    inline const double &GetTriangleH()const{return m_dTriangleH ; };
private:
    double m_dStartPosX;//底点横坐标
    double m_dStartPosY;//底点纵坐标
    double m_dTriangleW;//三角形底长度
    double m_dTriangleH;//三角形高
};

#endif // TRIANGLE_H
