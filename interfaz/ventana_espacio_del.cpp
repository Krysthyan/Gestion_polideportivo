#include "Headers/ventana_espacio_del.h"
#include "ui_ventana_espacio_del.h"

Ventana_espacio_del::Ventana_espacio_del(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Ventana_espacio_del)
{
    ui->setupUi(this);
}

Ventana_espacio_del::~Ventana_espacio_del()
{
    delete ui;
}
