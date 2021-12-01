#-------------------------------------------------
#
# Project created by QtCreator 2021-11-29T22:35:26
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Start
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        imageload.cpp

HEADERS += \
        imageload.h

FORMS += \
        imageload.ui

INCLUDEPATH += C:\OpenCV4.5.4\opencv\Qt_Lib\install\include

LIBS += \
    C:\OpenCV4.5.4\opencv\Qt_Lib\bin\libopencv_core454d.dll \
    C:\OpenCV4.5.4\opencv\Qt_Lib\bin\libopencv_highgui454d.dll \
    C:\OpenCV4.5.4\opencv\Qt_Lib\bin\libopencv_imgproc454d.dll \
    C:\OpenCV4.5.4\opencv\Qt_Lib\bin\libopencv_imgcodecs454d.dll \



