#include "DrawingBoard.h"
#include"sizestandard.h"


DrawingboardWidget::DrawingboardWidget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle(QStringLiteral("qtnote8.0-DrawBoard"));
    setWindowIcon(QIcon(QString(":/icon/recourse/icon/note1.png")));
    this->setGeometry(0,0,1920,1080);
    m_RectangleButton.setParent(this);
    m_EllipseButton.setParent(this);
    m_trangleButton.setParent(this);
    m_lineButton.setParent(this);
    m_TextButton.setParent(this);

    m_rotateLeftButton.setParent(this);
    m_rotateRightButton.setParent(this);//设置父类
    m_DrawWidget.setParent(this);

    m_RectangleButton.setText(QString("矩形"));
    m_EllipseButton.setText(QString("椭圆"));
    m_trangleButton.setText(QString("三角形"));
    m_lineButton.setText(QString("直线"));
    m_TextButton.setText(QString("文本"));

    m_rotateLeftButton.setText(QString("左旋转"));
    m_rotateRightButton.setText(QString("右旋转"));//设置文字


    m_RectangleButton.setIcon(QIcon(QString(":/icon/recourse/icon/rectangle.png")));
    m_RectangleButton.setIconSize(QSize(ICON_SIZE,ICON_SIZE));
    m_RectangleButton.setToolButtonStyle(Qt::ToolButtonTextUnderIcon);


    m_EllipseButton.setIcon(QIcon(QString(":/icon/recourse/icon/Ellipse.png")));
    m_EllipseButton.setIconSize(QSize(ICON_SIZE,ICON_SIZE));
    m_EllipseButton.setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

    m_trangleButton.setIcon(QIcon(QString(":/icon/recourse/icon/triangle.png")));
    m_trangleButton.setIconSize(QSize(ICON_SIZE/2,ICON_SIZE/2));
    m_trangleButton.setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

    m_lineButton.setIcon(QIcon(QString(":/icon/recourse/icon/Line.png")));
    m_lineButton.setIconSize(QSize(ICON_SIZE,ICON_SIZE));
    m_lineButton.setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

    m_TextButton.setIcon(QIcon(QString(":/icon/recourse/icon/text.png")));
    m_TextButton.setIconSize(QSize(ICON_SIZE,ICON_SIZE));
    m_TextButton.setToolButtonStyle(Qt::ToolButtonTextUnderIcon);



    m_rotateLeftButton.setIcon(QIcon(QString(":/icon/recourse/icon/LeftRotate.png")));
    m_rotateLeftButton.setIconSize(QSize(ICON_SIZE,ICON_SIZE));
    m_rotateLeftButton.setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

    m_rotateRightButton.setIcon(QIcon(QString(":/icon/recourse/icon/RightRotate.png")));
    m_rotateRightButton.setIconSize(QSize(ICON_SIZE,ICON_SIZE));
    m_rotateRightButton.setToolButtonStyle(Qt::ToolButtonTextUnderIcon);


    m_Pencil.setParent(this);
    m_Pencil.setText(QString("铅笔"));
    m_Pencil.setIcon(QIcon(QString(":/icon/recourse/icon/pencil.png")));
    m_Pencil.setIconSize(QSize(ICON_SIZE,ICON_SIZE));
    m_Pencil.setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

    m_Eraser.setParent(this);
    m_Eraser.setText(QString("橡皮擦"));
    m_Eraser.setIcon(QIcon(QString(":/icon/recourse/icon/eraser.png")));
    m_Eraser.setIconSize(QSize(ICON_SIZE,ICON_SIZE));
    m_Eraser.setToolButtonStyle(Qt::ToolButtonTextUnderIcon);


    m_ArcButton.setParent(this);
    m_ArcButton.setText(QString("弧线"));
    m_ArcButton.setIcon(QIcon(QString(":/icon/recourse/icon/Arc.png")));
    m_ArcButton.setIconSize(QSize(ICON_SIZE,ICON_SIZE));
    m_ArcButton.setToolButtonStyle(Qt::ToolButtonTextUnderIcon);



    m_DiamondButton.setParent(this);
    m_DiamondButton.setText(QString("菱形"));
    m_DiamondButton.setIcon(QIcon(QString(":/icon/recourse/icon/Diamond.png")));
    m_DiamondButton.setIconSize(QSize(ICON_SIZE,ICON_SIZE));
    m_DiamondButton.setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

    m_exitButton.setParent(this);
    m_exitButton.setText(QString("退出"));
    m_exitButton.setIcon(QIcon(QString(":/icon/recourse/icon/exit.png")));
    m_exitButton.setIconSize(QSize(ICON_SIZE,ICON_SIZE));
    m_exitButton.setToolButtonStyle(Qt::ToolButtonTextUnderIcon);


    QObject::connect(&m_RectangleButton, &QToolButton::clicked, this, &DrawingboardWidget::fn_Recv_RectangleButton_Clicked, Qt::DirectConnection);
    QObject::connect(&m_EllipseButton, &QToolButton::clicked, this, &DrawingboardWidget::fn_Recv_EllipseButton_Clicked, Qt::DirectConnection);
    QObject::connect(&m_trangleButton, &QToolButton::clicked, this, &DrawingboardWidget::fn_Recv_trangleButton_Clicked, Qt::DirectConnection);
    QObject::connect(&m_lineButton, &QToolButton::clicked, this, &DrawingboardWidget::fn_Recv_lineButton_Clicked, Qt::DirectConnection);
    QObject::connect(&m_TextButton, &QToolButton::clicked, this, &DrawingboardWidget::fn_Recv_TextButton_Clicked, Qt::DirectConnection);
    QObject::connect(&m_rotateLeftButton, &QToolButton::clicked, this, &DrawingboardWidget::fn_Recv_rotateLeftButton_Clicked, Qt::DirectConnection);
    QObject::connect(&m_rotateRightButton, &QToolButton::clicked, this, &DrawingboardWidget::fn_Recv_rotateRightButton_Clicked, Qt::DirectConnection);
    QObject::connect(&m_Pencil, &QToolButton::clicked, this, &DrawingboardWidget::fn_Recv_Pencil_Clicked, Qt::DirectConnection);
    QObject::connect(&m_ArcButton, &QToolButton::clicked, this, &DrawingboardWidget::fn_Recv_ArcButton_Clicked, Qt::DirectConnection);
    QObject::connect(&m_Eraser, &QToolButton::clicked, this, &DrawingboardWidget::fn_Recv_Eraser_Clicked, Qt::DirectConnection);
    QObject::connect(&m_exitButton, &QToolButton::clicked, this, &DrawingboardWidget::fn_Recv_SwitchToNoteButton_Clicked, Qt::DirectConnection);
    QObject::connect(&m_DiamondButton, &QToolButton::clicked, this, &DrawingboardWidget::fn_Recv_DiamondButton_Clicked, Qt::DirectConnection);

}


DrawingboardWidget::~DrawingboardWidget()
{

}
void DrawingboardWidget::resizeEvent(QResizeEvent *event)
{
    m_Pencil.setGeometry(0,0,BUTTON_SIZE,BUTTON_SIZE);
     m_Eraser.setGeometry(0,BUTTON_SIZE,BUTTON_SIZE,BUTTON_SIZE);
    m_RectangleButton.setGeometry(0,2*BUTTON_SIZE,BUTTON_SIZE,BUTTON_SIZE);
    m_EllipseButton.setGeometry(0,3*BUTTON_SIZE,BUTTON_SIZE,BUTTON_SIZE);
    m_trangleButton.setGeometry(0,4*BUTTON_SIZE,BUTTON_SIZE,BUTTON_SIZE);
    m_lineButton.setGeometry(0,5*BUTTON_SIZE,BUTTON_SIZE,BUTTON_SIZE);
    m_TextButton.setGeometry(0,6*BUTTON_SIZE,BUTTON_SIZE,BUTTON_SIZE);
    m_ArcButton .setGeometry(0,7*BUTTON_SIZE,BUTTON_SIZE,BUTTON_SIZE);
    m_DiamondButton.setGeometry(0,8*BUTTON_SIZE,BUTTON_SIZE,BUTTON_SIZE);
    m_rotateLeftButton.setGeometry(0,9*BUTTON_SIZE,BUTTON_SIZE,BUTTON_SIZE);
    m_rotateRightButton.setGeometry(0,10*BUTTON_SIZE,BUTTON_SIZE,BUTTON_SIZE);
    m_exitButton.setGeometry(0,11*BUTTON_SIZE,BUTTON_SIZE,BUTTON_SIZE);

    m_DrawWidget.setGeometry(BUTTON_SIZE,5,width()-BUTTON_SIZE-5,height()-5);
    QWidget::resizeEvent(event);
}


int DrawingboardWidget::fn_Recv_RectangleButton_Clicked(){
    m_DrawWidget.SetShapeType(ShapeType::Shape_Rectangle);
    m_DrawWidget.m_isdraw=0;
m_DrawWidget.m_iseraser=0;
    return NORMAL_RETURN;
}
int DrawingboardWidget::fn_Recv_EllipseButton_Clicked(){
    m_DrawWidget.SetShapeType(ShapeType::Shape_Ellipse);
    m_DrawWidget.m_isdraw=0;
m_DrawWidget.m_iseraser=0;
    return NORMAL_RETURN;
}
int DrawingboardWidget::fn_Recv_trangleButton_Clicked(){
    m_DrawWidget.SetShapeType(ShapeType::Shape_Triangle);
    m_DrawWidget.m_isdraw=0;
m_DrawWidget.m_iseraser=0;
    return NORMAL_RETURN;
}
int DrawingboardWidget::fn_Recv_lineButton_Clicked(){
    m_DrawWidget.SetShapeType(ShapeType::Shape_Line);
    m_DrawWidget.m_isdraw=0;
    m_DrawWidget.m_iseraser=0;
    return NORMAL_RETURN;
}
int DrawingboardWidget::fn_Recv_TextButton_Clicked(){
    m_DrawWidget.SetShapeType(ShapeType::Shape_Text);
    m_DrawWidget.m_isdraw=0;
    m_DrawWidget.m_iseraser=0;
    return NORMAL_RETURN;

}
int DrawingboardWidget::fn_Recv_rotateLeftButton_Clicked(){
    m_DrawWidget.RotateLeft();
    m_DrawWidget.m_isdraw=0;
    m_DrawWidget.m_iseraser=0;
    return NORMAL_RETURN;

}
int DrawingboardWidget::fn_Recv_rotateRightButton_Clicked(){
    m_DrawWidget.RotateRight();
    m_DrawWidget.m_isdraw=0;
    m_DrawWidget.m_iseraser=0;
    return NORMAL_RETURN;
}
int DrawingboardWidget::fn_Recv_Pencil_Clicked(){
  m_DrawWidget.SetShapeType(ShapeType::Shape_Pencil);
  m_DrawWidget.m_isdraw=1;
m_DrawWidget.m_iseraser=0;
  return NORMAL_RETURN;
}

int DrawingboardWidget::fn_Recv_Eraser_Clicked()
{
    m_DrawWidget.SetShapeType(ShapeType::Shape_Eraser);
    m_DrawWidget.m_isdraw=0;
    m_DrawWidget.m_iseraser=1;
    return NORMAL_RETURN;

}

int DrawingboardWidget::fn_Recv_ArcButton_Clicked()
{
    m_DrawWidget.SetShapeType(ShapeType::Shape_Arc);
    m_DrawWidget.m_isdraw=0;
    m_DrawWidget.m_iseraser=0;
    return NORMAL_RETURN;
}

int DrawingboardWidget::fn_Recv_DiamondButton_Clicked()
{
    m_DrawWidget.SetShapeType(ShapeType::Shape_Diamond);
    m_DrawWidget.m_isdraw=0;
    m_DrawWidget.m_iseraser=0;
    return NORMAL_RETURN;
}

int DrawingboardWidget::fn_Recv_SwitchToNoteButton_Clicked(){
    emit this->back();
    return NORMAL_RETURN;
}
