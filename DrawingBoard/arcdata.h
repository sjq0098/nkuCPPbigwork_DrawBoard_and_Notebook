#ifndef ARRDATA_H
#define ARRDATA_H

#include"shapedata.h"

class ArcData:public ShapeData
{
public:
    ArcData();
    ArcData(const double &dStartPosX,const double &dStartPosY,const double &dRadiusW,const double &dRadiusH);
    ~ArcData();
    inline void SetStartPosX(const double &dStartPosX){m_dStartPosX=dStartPosX  ; };
    inline void SetStartPosY(const double &dStartPosY){m_dStartPosX=dStartPosY  ; };
    inline void SetRadiusW(const double &dRadiusW){m_dRadiusW=dRadiusW  ; };
    inline void SetRadiusH(const double &dRadiusH){m_dRadiusW=dRadiusH  ; };
    inline const double &GetStartPosX()const {return m_dStartPosX ; };
    inline const double &GetStartPosY()const{return m_dStartPosY ; };
    inline const double &GetRadiusW()const{return m_dRadiusW ; };
    inline const double &GetRadiusH()const{return m_dRadiusH ; };
    inline const int &GetStartAngle()const{return m_StartAngle ; };
    inline const int &GetSpanAngle()const{return m_SpanAngle ; };
private:
    double m_dStartPosX;//起点横坐标
    double m_dStartPosY;//起点纵坐标
    double m_dRadiusW;//圆弧宽度
    double m_dRadiusH;//圆弧高度
    int m_StartAngle=90*16;//起始角度
    int m_SpanAngle=90*16;//终止角度

};

#endif // ARRDATA_H
