#include "interfaz/Headers/ventana_login.h"
#include "ui_ventana_login.h"

#include <QSize>


Ventana_login::Ventana_login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Ventana_login)
{
    QSize size = this->sizeHint();
    int w = this->width();   // returns screen width
    int h = this->height();  // returns screen height
    int mw = size.width();
    int mh = size.height();
    int cw = (w/2) - (mw/2);
    int ch = (h/2) - (mh/2);
    this->move(cw,ch);
    ui->setupUi(this);

}

Ventana_login::~Ventana_login()
{
    delete ui;
}

void Ventana_login::on_btnSalir_clicked()
{
    exit(0);
}
inline void Ventana_login::validar_datos(){
    std::string usuario = ui->entryUsuario->text().toUtf8().constData();
    std::string password = ui->entryPassword->text().toUtf8().constData();


    try{
        bool validar = this->login_SRV->validar_datos(usuario,password);

        if( validar){
            this->ventana_principal = new Ventana_principal();
            this->ventana_principal->show();
            this->close();
        } else {
            QMessageBox mgBox;
            mgBox.setText("La contraseña ingresada es invalida");
            mgBox.exec();
        }

    } catch (...){
        QMessageBox mgBox;
        mgBox.setText("El usuario ingresado no es valido");
        mgBox.exec();
    }
}

void Ventana_login::on_btnIngresar_clicked(){
    this->validar_datos();

}

