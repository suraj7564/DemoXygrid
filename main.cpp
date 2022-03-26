#include "mainwindow.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QFile>
#include <QTextStream>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "Xygrib_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }


    MainWindow w ;

    //Write in text file
//    QFile file("C:\\Users\\91834\\Desktop\\in.txt");
//    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
//        return 0;

//    QTextStream out(&file);
//    out << "The magic number is: " << 67 << "\n";
//    out <<"hello , How are You ?" << "\n";
//    out <<"I am fine ." << "\n";

    w.show();
    return a.exec();
}
