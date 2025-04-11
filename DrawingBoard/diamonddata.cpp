#include "diamonddata.h"

DiamondData::DiamondData(){
    m_shapetype=ShapeType::Shape_Diamond;
    m_dDiamondh=0;
    m_dDiamondW=0;
    m_dStartPosX=0;
    m_dStartPosY=0;
}


DiamondData::DiamondData(const double &dStartPosX,const double &dStartPosY,const double &dDiamondW,const double &dDiamondh){
    m_shapetype=ShapeType::Shape_Diamond;
    m_dDiamondh=dDiamondh;
    m_dDiamondW=dDiamondW;
    m_dStartPosX= dStartPosX;
    m_dStartPosY=dStartPosY;
}


DiamondData::~DiamondData(){};
