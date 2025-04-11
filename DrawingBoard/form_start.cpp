#include "form_start.h"
#include "ui_form_start.h"

form_start::form_start(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::form_start)
{
    ui->setupUi(this);
    ui->pb1->setIcon(QIcon(QString(":/icon/recourse/icon/note1.png")));
    ui->pb1->setLayoutDirection(Qt::LeftToRight);
    ui->pb2->setIcon(QIcon(QString(":/icon/recourse/icon/note.png")));
    ui->pb2->setLayoutDirection(Qt::LeftToRight);
    this->notepage=new notepad;//实例化note窗口
    this->DrawBoard=new DrawingboardWidget;
    connect(this->notepage,&notepad::back,this,[=](){this->notepage->hide(); this->show();});
    connect(this->DrawBoard,&DrawingboardWidget::back,this,[=](){this->DrawBoard->hide(); this->show();});
        setWindowIcon(QIcon(QString(":/icon/recourse/icon/notebook.png")));
  }

form_start::~form_start()
{
    delete ui;
}

void form_start::on_pb1_clicked()
{
    this->hide();
    DrawBoard->show();
}

void form_start::on_pb2_clicked()
{
    this->hide();
    notepage->show();
}

void form_start::on_action_aboutinfo_triggered()
{
    QMessageBox::about(this,"基于Qt实现的集成笔记记录工具","可以使用DrawBoard进行绘画，仿制Notepad进行文本编辑，虽然比较简陋，欢迎批评指正");
}
