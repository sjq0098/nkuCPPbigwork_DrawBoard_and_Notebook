#ifndef ELLIPSEDATA_H
#define ELLIPSEDATA_H
#include"shapedata.h"


class EllipseData:public ShapeData
{
public:
    EllipseData();
    EllipseData(const double &dStartPosX,const double &dStartPosY,const double &dRadiusW,const double &dRadiusH);


    ~EllipseData();
    inline void SetStartPosX(const double &dStartPosX){m_dStartPosX=dStartPosX  ; };
    inline void SetStartPosY(const double &dStartPosY){m_dStartPosX=dStartPosY  ; };
    inline void SetRadiusW(const double &dRadiusW){m_dRadiusW=dRadiusW  ; };
    inline void SetRadiusH(const double &dRadiusH){m_dRadiusW=dRadiusH  ; };
    inline const double &GetStartPosX()const {return m_dStartPosX ; };
    inline const double &GetStartPosY()const{return m_dStartPosY ; };
    inline const double &GetRadiusW()const{return m_dRadiusW ; };
    inline const double &GetRadiusH()const{return m_dRadiusH ; };
private:
    double m_dStartPosX;//起点横坐标
    double m_dStartPosY;//起点纵坐标
    double m_dRadiusW;//椭圆宽度
    double m_dRadiusH;//椭圆高度
};

#endif // ELLIPSEDATA_H
