#include "pencildata.h"

PencilData::PencilData(){
    m_shapetype=ShapeType::Shape_Pencil;
    m_drawpath.clear();
}
PencilData::PencilData(const QPainterPath &drawpath){
    m_shapetype=ShapeType::Shape_Pencil;
    m_drawpath=drawpath;

}
PencilData::~PencilData(){};
