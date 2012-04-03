#ifdef QTOPIA

#include "qmplayer.h"
#include <qtopiaapplication.h>
QTOPIA_ADD_APPLICATION(QTOPIA_TARGET,QMplayerMainWindow)
QTOPIA_MAIN

#else

#include <QtGui/QApplication>
#include "qmplayer.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QMplayerMainWindow w;
    w.show();
    return a.exec();
}


#endif
