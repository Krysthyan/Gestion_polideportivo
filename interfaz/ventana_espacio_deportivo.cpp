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


void Ventana_espacio_deportivo::on_btn_agregar_clicked()
{
    std::string segundos = ":00";
    //this->ventana_polideportivo = new Ventana_agregar_polideportivo;

    std::string nombre = ui->entry_nombre->text().toUtf8().constData();
    std::string tipo_espacio = ui->comboBox_espacios->currentText().toUtf8().constData();
    std::string estado = ui->comboBox_estados->currentText().toUtf8().constData();

    std::string hora_apertura = ui->time_hora_apertura->text().toUtf8().constData()+segundos;

    std::string hora_cerrada = ui->time_hora_cerrada->text().toUtf8().constData()+segundos;
    double precio_por_hora = std::stod(ui->spin_precio_por_hora->text().toUtf8().constData());

    this->espacio_comun = new Espacio_comun(nombre, tipo_espacio, estado, hora_apertura,
                                            hora_cerrada, precio_por_hora);
    this->polideportivo->agregar_espacio(*espacio_comun);


    this->close();
    //ventana_polideportivo->show();
}
