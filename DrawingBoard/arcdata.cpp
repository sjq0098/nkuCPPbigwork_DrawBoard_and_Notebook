#include "arcdata.h"

ArcData::ArcData(){
    m_shapetype=ShapeType::Shape_Arc;
    m_dRadiusH=0;
    m_dRadiusW=0;
    m_dStartPosX=0;
    m_dStartPosY=0;
}


ArcData::ArcData(const double &dStartPosX,const double &dStartPosY,const double &dRadiusW,const double &dRadiusH){
    m_shapetype=ShapeType::Shape_Arc;
    m_dRadiusH=dRadiusH;
    m_dRadiusW=dRadiusW;
    m_dStartPosX= dStartPosX;
    m_dStartPosY=dStartPosY;
}


ArcData::~ArcData(){};
