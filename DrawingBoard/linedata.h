#ifndef LINEDATA_H
#define LINEDATA_H

#include"shapedata.h"
class LineData:public ShapeData
{
public:
    LineData();
    LineData(const double &dStartPosX,const double &dStartPosY,const double &dEndPosX,const double &dEndPosY);


    ~LineData();
    inline void SetStartPosX(const double &dStartPosX){m_dStartPosX=dStartPosX  ; };
    inline void SetStartPosY(const double &dStartPosY){m_dStartPosX=dStartPosY  ; };
    inline void SetEndPosX(const double &dStartPosX){m_dEndPosX=dStartPosX  ; };
    inline void SetEndPosY(const double &dStartPosY){m_dEndPosY=dStartPosY  ; };

    inline const double &GetStartPosX()const {return m_dStartPosX ; };
    inline const double &GetStartPosY()const{return m_dStartPosY ; };
    inline const double &GetEndPosX()const {return m_dEndPosX ; };
    inline const double &GetEndPosY()const{return m_dEndPosY ; };
private:
    double m_dStartPosX;//起点横坐标
    double m_dStartPosY;//起点纵坐标
    double m_dEndPosX;//终点横坐标
    double m_dEndPosY;//终点纵坐标

};
#endif // LINEDATA_H
