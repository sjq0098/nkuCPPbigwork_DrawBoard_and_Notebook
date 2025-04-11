#include "linedata.h"

LineData::LineData(){
    m_shapetype=ShapeType::Shape_Line;
    m_dEndPosX=0;
    m_dEndPosY=0;
    m_dStartPosX=0;
    m_dStartPosY=0;
}


LineData::LineData(const double &dStartPosX,const double &dStartPosY,const double &dEndPosX,const double &dEndPosY){
    m_shapetype=ShapeType::Shape_Line;
    m_dEndPosX=dEndPosX;
    m_dEndPosY=dEndPosY;
    m_dStartPosX= dStartPosX;
    m_dStartPosY=dStartPosY;
}


LineData::~LineData(){};
