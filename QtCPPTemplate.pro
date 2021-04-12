QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

#TARGET = QtCPPTemplate
#TEMPLATE = app

CONFIG += c++11
# enable console log
#CONFIG += console

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
#DEFINES += QT_DEPRECATED_WARNINGS

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    About/aboutdialog.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    About/aboutdialog.h \
    mainwindow.h

FORMS += \
    About/aboutdialog.ui \
    mainwindow.ui

TRANSLATIONS += \
    QtCPPTemplate_zh_CN.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    .gitignore \
    LICENSE \
    README.md

RESOURCES += \
    app.qrc
