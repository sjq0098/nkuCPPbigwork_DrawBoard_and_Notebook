#include "TriangleData.h"

TriangleData::TriangleData(){
    m_shapetype=ShapeType::Shape_Triangle;
    m_dTriangleH=0;
    m_dTriangleW=0;
    m_dStartPosX=0;
    m_dStartPosY=0;
}


TriangleData::TriangleData(const double &dStartPosX,const double &dStartPosY,const double &dTriangleW,const double &dTriangleH){
    m_shapetype=ShapeType::Shape_Triangle;
    m_dTriangleH=dTriangleH;
    m_dTriangleW=dTriangleW;
    m_dStartPosX= dStartPosX;
    m_dStartPosY=dStartPosY;
}


TriangleData::~TriangleData(){};
