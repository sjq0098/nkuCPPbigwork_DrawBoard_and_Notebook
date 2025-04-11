#ifndef DIAMONDDATA_H
#define DIAMONDDATA_H
#include"shapedata.h"
class DiamondData:public ShapeData
{
public:
    DiamondData();
    DiamondData(const double &dStartPosX,const double &dStartPosY,const double &dDiamondW,const double &dDiamondh);
    ~DiamondData();
    inline void SetStartPosX(const double &dStartPosX){m_dStartPosX=dStartPosX  ; };
    inline void SetStartPosY(const double &dStartPosY){m_dStartPosX=dStartPosY  ; };
    inline void SetTriangleW(const double &dDiamondW){m_dDiamondW=dDiamondW  ; };
    inline void SetTriangleH(const double &dDiamondh){m_dDiamondh=dDiamondh  ; };
    inline const double &GetStartPosX()const {return m_dStartPosX ; };
    inline const double &GetStartPosY()const{return m_dStartPosY ; };
    inline const double &GetDiamondW()const{return m_dDiamondW ; };
    inline const double &GetDiamondh()const{return m_dDiamondh ; };
private:
    double m_dStartPosX;//底点横坐标
    double m_dStartPosY;//底点纵坐标
    double m_dDiamondW;//菱形横对角线长度
    double m_dDiamondh;//菱形一半纵对角线长度
};
#endif // DIAMONDDATA_H
