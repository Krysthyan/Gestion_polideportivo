#include "Headers/ventana_espacio_mod.h"
#include "ui_ventana_espacio_mod.h"

Ventana_espacio_mod::Ventana_espacio_mod(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Ventana_espacio_mod)
{
    ui->setupUi(this);
}

Ventana_espacio_mod::~Ventana_espacio_mod()
{
    delete ui;
}
