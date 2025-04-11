#include<RectangleData.h>

RectangleData::RectangleData(){
    m_shapetype=ShapeType::Shape_Rectangle;
    m_dStartPosX=0;
    m_dStartPosY=0;
    m_dWidth=0;
    m_dHeight=0;
}

RectangleData::RectangleData(const double& dPosX,const double&dPosY,const double &dWidth,const double &dHeight){
    m_shapetype=ShapeType::Shape_Rectangle;
    m_dStartPosX=dPosX;
    m_dStartPosY=dPosY;
    m_dWidth=dWidth;
    m_dHeight=dHeight;
}
