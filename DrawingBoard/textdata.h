#ifndef TEXTDATA_H
#define TEXTDATA_H
#include"shapedata.h"
#include"QString"

class Textdata:public ShapeData
{
public:
    Textdata();
    Textdata(const double &dStartPosX,const double &dStartPosY,const QString &dQstr_content);
    ~Textdata();
    inline void SetStartPosX(const double &dStartPosX){m_dStartPosX=dStartPosX  ; };
    inline void SetStartPosY(const double &dStartPosY){m_dStartPosX=dStartPosY  ; };
    inline void SetQstr_content(const QString &dQstr_content){ m_Qstr_content=dQstr_content;};

    inline const double &GetStartPosX()const {return m_dStartPosX ; };
    inline const double &GetStartPosY()const{return m_dStartPosY ; };
    inline const QString &GetQstr_content()const {return m_Qstr_content ; };

private:
    double m_dStartPosX;//起点横坐标
    double m_dStartPosY;//起点纵坐标
    QString m_Qstr_content;//文本内容
};

#endif // TEXTDATA_H
