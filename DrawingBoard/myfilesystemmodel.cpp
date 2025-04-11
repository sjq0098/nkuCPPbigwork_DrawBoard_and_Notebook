#include "myfilesystemmodel.h"

MyFileSystemModel::MyFileSystemModel(QObject*parent):QFileSystemModel(parent)
{

}

Qt::ItemFlags MyFileSystemModel::flags(const QModelIndex &index) const
{
    return Qt::ItemIsEnabled|Qt::ItemIsEditable|Qt::ItemIsSelectable;
}
