#ifndef TEXTCONTENTEDIT_H
#define TEXTCONTENTEDIT_H
#include "sizestandard.h"


#include"QLineEdit"
#include<QMouseEvent>

class TextcontentEdit:public QLineEdit
{
 Q_OBJECT
public:
    TextcontentEdit(QWidget*parent=nullptr);
    ~TextcontentEdit();

    void keyPressEvent(QKeyEvent *event) override;
    void focusOutEvent(QFocusEvent *event) override;


private:

signals:
    void Signal_GetContent(QString qstcontent);
};

#endif // TEXTCONTENTEDIT_H
