#include "Headers/ventana_espacio_del.h"
#include "ui_ventana_espacio_del.h"
#include<QMessageBox>

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

void Ventana_espacio_del::on_pushButtonEliminar_clicked()
{
    std::string nombre_polideportivo = ui->lineEditNombrePolideportivo->text().toStdString();
    std::string nombre_espacio = ui->lineEditNombreEspacio->text().toStdString();

    if(nombre_espacio.length()==0 || nombre_polideportivo.length()==0){
        QMessageBox::warning(this,"Warning","Campo(s) Vacio(s)");
        return;
    }
    //llamar a SRV y controlar excepcion
    try{
        this->espacio_comun_srv.eliminar_espacio_comun(nombre_polideportivo,nombre_espacio);
        QMessageBox::information(this,"Informacion","Eliminado....");
        this->close();
    }catch (sql::SQLException &e){
        QMessageBox::warning(this,"warning","Excepcion....");
    }
}
