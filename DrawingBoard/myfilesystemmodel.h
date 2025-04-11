#ifndef MYFILESYSTEMMODEL_H
#define MYFILESYSTEMMODEL_H

#include <QObject>
#include<QFileSystemModel>
class MyFileSystemModel : public QFileSystemModel
{
    Q_OBJECT
public:
    explicit MyFileSystemModel(QObject*parent=NULL);
protected:
    Qt::ItemFlags flags(const QModelIndex &index) const override;
};


#endif // MYFILESYSTEMMODEL_H
