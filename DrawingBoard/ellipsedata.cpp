#include "ellipsedata.h"


EllipseData::EllipseData(){
    m_shapetype=ShapeType::Shape_Ellipse;
    m_dRadiusH=0;
    m_dRadiusW=0;
    m_dStartPosX=0;
    m_dStartPosY=0;
}


EllipseData::EllipseData(const double &dStartPosX,const double &dStartPosY,const double &dRadiusW,const double &dRadiusH){
    m_shapetype=ShapeType::Shape_Ellipse;
    m_dRadiusH=dRadiusH;
    m_dRadiusW=dRadiusW;
    m_dStartPosX= dStartPosX;
    m_dStartPosY=dStartPosY;
}


EllipseData::~EllipseData(){};
