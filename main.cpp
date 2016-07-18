
#include <QApplication>
#include "interfaz/Headers/ventana_login.h"

int main(int argc, char *argv[]){

    QApplication a(argc, argv);
    Ventana_login ventana;
    ventana.show();

    return a.exec();
}
