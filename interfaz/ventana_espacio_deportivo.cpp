#include "Headers/ventana_espacio_deportivo.h"
#include "ui_ventana_espacio_deportivo.h"
#include <QSize>


Ventana_espacio_deportivo::Ventana_espacio_deportivo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Ventana_espacio_deportivo)
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
    agregar_estados();
    agregar_espacios();



}

Ventana_espacio_deportivo::~Ventana_espacio_deportivo()
{
    delete ui;
}

inline void Ventana_espacio_deportivo::agregar_estados()
{
    std::vector<std::string> *estados = this->estados_srv.obtener_estados();
    for(int a = 0; a<estados->size(); a++){
        std::string estado = estados->at(a);
        ui->comboBox_estados->addItem(estado.c_str());
    }
}

inline void Ventana_espacio_deportivo::agregar_espacios()
{
    std::vector<std::string> *espacios = this->espacios_srv.obtener_espacios();
    for(int a = 0; a<espacios->size(); a++){
        std::string espacio = espacios->at(a);
        ui->comboBox_espacios->addItem(espacio.c_str());
    }
}