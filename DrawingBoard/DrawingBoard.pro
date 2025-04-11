QT       += core gui
QT       +=    core gui opengl
qtHaveModule(printsupport):QT+=printsupport
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += c++11
# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    DrawWidget.cpp \
    DrawingBoard.cpp \
    RectangleData.cpp \
    ShapeData.cpp \
    TriangleData.cpp \
    arcdata.cpp \
    diamonddata.cpp \
    ellipsedata.cpp \
    eraserdata.cpp \
    form_start.cpp \
    linedata.cpp \
    main.cpp \
    myfilesystemmodel.cpp \
    notepad.cpp \
    pencildata.cpp \
    systemdata.cpp \
    textcontentedit.cpp \
    textdata.cpp

HEADERS += \
    DrawWidget.h \
    DrawingBoard.h \
    RectangleData.h \
    TriangleData.h \
    arcdata.h \
    diamonddata.h \
    ellipsedata.h \
    eraserdata.h \
    form_start.h \
    linedata.h \
    myfilesystemmodel.h \
    notepad.h \
    pencildata.h \
    shapedata.h \
    sizestandard.h \
    systemdata.h \
    textcontentedit.h \
    textdata.h

FORMS += \
    form_start.ui \
    notepad.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc

