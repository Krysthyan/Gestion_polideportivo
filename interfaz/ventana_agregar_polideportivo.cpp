#include "Headers/ventana_agregar_polideportivo.h"
#include "ui_ventana_agregar_polideportivo.h"

Ventana_agregar_polideportivo::Ventana_agregar_polideportivo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Ventana_agregar_polideportivo)
{
    ui->setupUi(this);
}

Ventana_agregar_polideportivo::~Ventana_agregar_polideportivo()
{
    delete ui;
}

void Ventana_agregar_polideportivo::on_btn_agregar_espacio_clicked()
{
    this->ventana_e_d = new Ventana_espacio_deportivo();
    this->ventana_e_d->show();
    this->destroy(true);
}

void Ventana_agregar_polideportivo::agregar_espacios()
{

}
