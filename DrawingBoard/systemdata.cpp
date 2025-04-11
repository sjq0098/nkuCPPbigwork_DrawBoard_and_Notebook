#include "systemdata.h"
SystemData SystemData::g_SystemData;
SystemData* SystemData ::GetSystemData(){
    return &g_SystemData;
}
SystemData::SystemData(){

}
SystemData::~SystemData(){
    qDeleteAll<QVector<ShapeData*>>(m_ShapeVec);
    m_ShapeVec.clear();
    m_ShapeVec.shrink_to_fit();
}
