#ifndef SHAPEDATA_H
#define SHAPEDATA_H

enum class ShapeType
{

    Shape_Unknow=0,//未知图形
    Shape_Rectangle=1,//矩形
    Shape_Ellipse=2,//椭圆
    Shape_Triangle=3,//三角形
    Shape_Line=4,//直线
    Shape_Text=5,//文本
    Shape_Pencil=6,//铅笔
    Shape_Eraser=7,//橡皮擦
    Shape_Arc=8,//弧
    Shape_Diamond=9,//菱形
};



class ShapeData{
public:
    /*
     * 接口说明：公共接口，无参构造函数
     * 参数说明：无
     * 返回值说明：无
     */
    ShapeData();
    /*
     * 接口说明：公共接口，析构函数
     * 参数说明：无
     * 返回值说明：无
     *
     *
     */
    ~ShapeData();
    /*
     * 接口说明：公共接口，形状类型设置函数
     * 参数说明：[in]shapeType 形状类型
     * 返回值说明：无
     */
    inline void SetShapeType(ShapeType&shapetype){
        m_shapetype=shapetype;
    }
    /*
     * 接口说明：公共接口，获取形状类型函数
     * 参数说明：无
     * 返回值说明：无
     */
    inline const ShapeType&GetShapeType() const{return m_shapetype;};

protected:

    ShapeType m_shapetype;

};


#endif // SHAPEDATA_H
