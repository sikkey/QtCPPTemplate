#include "mainwindow.h"

#include <QApplication>
#include <QFontDatabase>

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    // config ini
    w.LoadConfig();
    w.SaveConfig();

    // set fonts
    // load otf font failed, todo: try ttf.
    int loadedFontID = QFontDatabase::addApplicationFont(":/fonts/NotoSerif-Light.ttf");
    QStringList loadedFontFamilies = QFontDatabase::applicationFontFamilies(loadedFontID);

    if(!loadedFontFamilies.empty())
    {
        //QString sansCNFamily = loadedFontFamilies.at(0);
        //QFont defaultFont = a.font();
        //defaultFont.setFamily(sansCNFamily);
        //defaultFont.setPixelSize(15);
        static QFont defaultFont(loadedFontFamilies.at(0));
        //defaultFont.setPointSize(9);
        a.setFont(defaultFont);
        w.setFont(defaultFont);
        cout<<"load font success"<<endl;
        //w.OnFlushFonts();
    }else{
        cout<<"load font failed"<<endl;
    }

    w.show();
    return a.exec();
}
