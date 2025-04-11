#include "eraserdata.h"


EraserData::EraserData(){
    m_shapetype=ShapeType::Shape_Eraser;
    m_drawpath.clear();
}
EraserData::EraserData(const QPainterPath &drawpath){
    m_shapetype=ShapeType::Shape_Eraser;
    m_drawpath=drawpath;

}
EraserData::~EraserData(){};
