QT       += core gui
QT       += printsupport  #曲线绘制
QMAKE_CXXFLAGS += -Wa,-mbig-obj

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    canseting.cpp \
    canthread.cpp \
    main.cpp \
    mainwindow.cpp \
    motor.cpp \
    qcustomplot.cpp

HEADERS += \
    ControlCAN.h \
    canseting.h \
    canthread.h \
    mainwindow.h \
    motor.h \
    qcustomplot.h

FORMS += \
    canseting.ui \
    mainwindow.ui \
    motor.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=

win32: LIBS += -L$$PWD/./ -lControlCAN

INCLUDEPATH += $$PWD/.
DEPENDPATH += $$PWD/.
