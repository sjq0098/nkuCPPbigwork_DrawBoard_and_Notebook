#ifndef DRAWWIDGET_H
#define DRAWWIDGET_H
#include<systemdata.h>
#include<sizestandard.h>
#include"textcontentedit.h"


#include<shapedata.h>
#include"RectangleData.h"
#include"ellipsedata.h"
#include"TriangleData.h"
#include"linedata.h"
#include"textdata.h"
#include"pencildata.h"
#include"eraserdata.h"
#include"arcdata.h"
#include"diamonddata.h"

#include"QPainter"
#include"QMenu"
#include<QMouseEvent>
#include<QPixmap>
#include<QToolButton>
#include <QFileDialog>
#include"QVector"

enum  class Rotatetype//旋转类型（角度）
{
    Rotate_0=0,
    Rotate_90=1,
    Rotate_180=2,
    Rotate_270=3,

};

class DrawWidget: public QWidget{
    Q_OBJECT
public:
    DrawWidget(QWidget*parent=NULL);

    ~DrawWidget();


    void paintEvent(QPaintEvent*event) override;
    void resizeEvent(QResizeEvent*event) override;
    void  mousePressEvent(QMouseEvent*event) override;
    void  mouseMoveEvent(QMouseEvent*event)override;
    void  mouseReleaseEvent(QMouseEvent*event)override;

    inline void SetShapeType(const ShapeType &shapeType){m_Shapetype=shapeType;};

    int RotateLeft();
    int RotateRight();

     QToolButton m_openButton;
     QToolButton m_keepButton;

    bool m_isdraw;
    bool m_iseraser;
protected:
    int fn_Recv_ContentEdit_GetContent(const QString &qstrContent);
    int SavePic();//保存图片
    int OpenPic();//打开图片

private:
    SystemData*m_pSystemData;
    ShapeType m_Shapetype;//当前绘画的图形的类型
    Rotatetype m_RotateType;//观测旋转类型

    bool m_bLBtnClicked;//鼠标左键是否按下



    QPoint m_ClickedPoint;//鼠标点击的坐标
    QPoint m_MovePoint;//鼠标移动的坐标
    QPoint m_TextPoint;//文字坐标

    QBrush m_NullBrush;//空画刷
    QBrush m_WhiteBrush;//白画刷
    QPen m_BlackPen;//黑画笔
    QPen m_WhitePen;//白画笔
    QFont m_TextFont;//文字字体
    TextcontentEdit m_ContentEdit;//文本编辑

    int _openflag;//打开图片
    QPixmap _pixmap;//画布图片
    QPainterPath drawingPath1;
    QPainterPath drawingPath2;

};

#endif // DRAWWIDGET_H
