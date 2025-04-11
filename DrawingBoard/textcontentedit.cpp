#include "textcontentedit.h"

TextcontentEdit::TextcontentEdit(QWidget *parent):QLineEdit(parent)
{

}
TextcontentEdit::~TextcontentEdit(){};


void TextcontentEdit::keyPressEvent(QKeyEvent*event) {
    if(event->key()==Qt::Key::Key_Return
            ||event->key()==Qt::Key::Key_Enter){
        hide();
        emit Signal_GetContent(text());
    }
    QLineEdit::keyPressEvent(event);
}
void TextcontentEdit::focusOutEvent(QFocusEvent*event) {
    hide();
    emit Signal_GetContent(text());
    QLineEdit::focusOutEvent(event);
};


