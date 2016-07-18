#include "interfaz/Headers/ventana_principal.h"
#include "ui_ventana_principal.h"
#include <QSize>


Ventana_principal::Ventana_principal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Ventana_principal)
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

Ventana_principal::~Ventana_principal()
{
    delete ui;
}

void Ventana_principal::on_btn_agregar_cliente_clicked(){

    this->ventana_cliente = new Ventana_cliente();
    this->ventana_cliente->show();

}

void Ventana_principal::on_btn_modificar_cliente_clicked()
{
    this->ventana_cliente_mod = new Ventana_cliente_mod();
    this->ventana_cliente_mod->show();
}

void Ventana_principal::on_btn_eliminar_cliente_clicked()
{
    this->ventana_cliente_del = new Ventana_cliente_del();
    this->ventana_cliente_del->show();
}

void Ventana_principal::on_btn_agregar_admin_clicked()
{
    this->ventana_admin = new Ventana_admin();
    this->ventana_admin->show();
}

void Ventana_principal::on_btn_modificar_admin_clicked()
{
    this->ventana_cliente_mod = new Ventana_cliente_mod();
    this->ventana_cliente_mod->show();
}

void Ventana_principal::on_btn_eliminar_admin_clicked()
{
    this->ventana_cliente_del = new Ventana_cliente_del();
    this->ventana_cliente_del->show();
}

void Ventana_principal::on_btn_agregar_pol_clicked()
{
    this->ventana_polideportivo = new Ventana_polideportivo();
    this->ventana_polideportivo->show();
}