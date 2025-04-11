#ifndef FORM_START_H
#define FORM_START_H

#include <QMainWindow>
#include "DrawingBoard.h"
#include"notepad.h"
#include<QMessageBox>
namespace Ui {
class form_start;
}

class form_start : public QMainWindow
{
    Q_OBJECT

public:
    explicit form_start(QWidget *parent = nullptr);
    ~form_start();
     notepad *notepage=NULL;//用来保存notepad页面的实例化对象的地址
     DrawingboardWidget *DrawBoard=NULL;//用来保存DrawingboardWidget页面的实例化对象的地址


private:
    Ui::form_start *ui;

private slots:
    void on_pb1_clicked();
    void on_pb2_clicked();
    void on_action_aboutinfo_triggered();
};

#endif // FORM_START_H
