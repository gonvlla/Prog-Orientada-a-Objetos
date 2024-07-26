QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Contenedora.cpp \
    aldeano.cpp \
    dialog.cpp \
    diplomatico.cpp \
    juego.cpp \
    main.cpp \
    mainwindow.cpp \
    nivel.cpp \
    persona.cpp \
    refugiadopolitico.cpp \
    reglas.cpp \
    revolucionario.cpp

HEADERS += \
    Contenedora.h \
    aldeano.h \
    dialog.h \
    diplomatico.h \
    juego.h \
    mainwindow.h \
    nivel.h \
    persona.h \
    refugiadopolitico.h \
    reglas.h \
    revolucionario.h

FORMS += \
    dialog.ui \
    mainwindow.ui \
    reglas.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc

