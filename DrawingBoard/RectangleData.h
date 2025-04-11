#ifndef RECTANGLEDATA_H
#define RECTANGLEDATA_H

#include<shapedata.h>
class RectangleData:public ShapeData{
public:

    RectangleData();
    RectangleData(const double& dPosX,const double&dPosY,const double &dWidth,const double &dHeight);
    ~RectangleData();
    //设置矩形参数
    inline void SetStartPosX(const double &dPosX){m_dStartPosX=dPosX;};
    inline void SetStartPosY(const double &dPosY){m_dStartPosY=dPosY;};
    inline void SetWidth(const double &dWigth){m_dWidth=dWigth;};
    inline void SetHeight(const double &dHeight){m_dHeight=dHeight;};


    //获取矩形参数
    inline const double &GetStartPosX()const {return m_dStartPosX;};
    inline const double &GetStartPosY()const {return m_dStartPosY;};
    inline const double &GetWidth()const {return m_dWidth;};
    inline const double &GetHeight()const {return m_dHeight;};

private:
    double m_dStartPosX;
    double m_dStartPosY;
    double m_dWidth;
    double m_dHeight;

};

#endif // RECTANGLEDATA_H
