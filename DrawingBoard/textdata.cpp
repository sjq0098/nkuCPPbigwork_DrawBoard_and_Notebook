#include "textdata.h"

Textdata::Textdata()
{
    m_shapetype=ShapeType::Shape_Text;
    m_dStartPosX=0;
    m_dStartPosY=0;
}
Textdata::Textdata(const double &dStartPosX,const double &dStartPosY,const QString &dQstr_content){
    m_shapetype=ShapeType::Shape_Text;

    m_dStartPosX= dStartPosX;
    m_dStartPosY=dStartPosY;
    m_Qstr_content=dQstr_content;
}


Textdata::~Textdata(){};
