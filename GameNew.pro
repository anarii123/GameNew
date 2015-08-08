#-------------------------------------------------
#
# Project created by QtCreator 2015-05-16T12:51:37
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GameNew
TEMPLATE = app
CONFIG += c++11


SOURCES += main.cpp\
        mainwindow.cpp \
    Debet.cpp \
    FirmStructure.cpp \
    Kredit.cpp \
    Money.cpp \
    ProductionLine.cpp \
    Warehouse.cpp \
    WarehouseMaterials.cpp \
    GameProcess.cpp \
    Account.cpp \
    AccountWithTime.cpp \
    AccountWithoutTime.cpp \
    WarehouseProduction.cpp

HEADERS  += mainwindow.h \
    Debet.h \
    FirmStructure.h \
    Kredit.h \
    Money.h \
    ProductionLine.h \
    Warehouse.h \
    WarehouseMaterials.h \
    GameProcess.h \
    Account.h \
    AccountWithTime.h \
    AccountWithoutTime.h \
    WarehouseProduction.h

FORMS    += mainwindow.ui
