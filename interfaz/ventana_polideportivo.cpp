#include "Headers/ventana_polideportivo.h"
#include "ui_ventana_polideportivo.h"
#include <QSize>


Ventana_polideportivo::Ventana_polideportivo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Ventana_polideportivo)
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

Ventana_polideportivo::~Ventana_polideportivo()
{
    delete ui;
}

void Ventana_polideportivo::on_pushButton_2_clicked()
{
    this->v_espacio_deportivo = new Ventana_espacio_deportivo();
    this->v_espacio_deportivo->show();
}
