#ifndef SYSTEMDATA_H
#define SYSTEMDATA_H
#include<sizestandard.h>
#include"shapedata.h"
#include"RectangleData.h"
#include"ellipsedata.h"
#include"TriangleData.h"
#include"linedata.h"
#include"textdata.h"
#include<QVector>
//使用了单例模式和数据容器
class DrawWidget;//声明对话窗口
class SystemData
{
    friend DrawWidget;//声明会话窗口类为友元类
public:
    static SystemData *GetSystemData();
private:
    SystemData();
    ~SystemData();
    static SystemData g_SystemData;
    QVector<ShapeData*> m_ShapeVec;//图形对象地址容器

};

#endif // SYSTEMDATA_H
