TEMPLATE = app

CONFIG += c++11

QT += widgets

INCLUDEPATH += ../qpdflib
LIBS += -L$$OUT_PWD/../qpdflib
LIBS += -lqpdf

HEADERS += corepdf.h\
    corepdf.h

SOURCES += \
    corepdf.cpp \
    main.cpp
