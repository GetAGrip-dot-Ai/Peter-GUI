#include "petergui.h"

#include <QApplication>

// ========== includes for widget types ==============

#include <QTabWidget>
#include <QWidget>

// ========== includes for widget types ==============


int main(int argc, char *argv[])
{
    QApplication a(argc, argv); // create the app
    PeterGui w; // create the window that will show the app

    w.show();
    return a.exec();
}
