HEADERS += $$PWD/lum_sdk.h

INCLUDEPATH += $$PWD/

win32 {
    LIBS += $$PWD/lum_sdk32.lib
}
