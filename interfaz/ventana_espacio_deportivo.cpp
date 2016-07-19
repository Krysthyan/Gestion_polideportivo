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
    std::string nombre_polideportivo= ui->entry_nombre_pol->text().toUtf8().constData();
    std::string segundos = ":00";


    std::string nombre = ui->entry_nombre->text().toUtf8().constData();
    std::string tipo_espacio = ui->comboBox_espacios->currentText().toUtf8().constData();
    std::string estado = ui->comboBox_estados->currentText().toUtf8().constData();

    std::string hora_apertura = ui->time_hora_apertura->text().toUtf8().constData()+segundos;

    std::string hora_cerrada = ui->time_hora_cerrada->text().toUtf8().constData()+segundos;
    std::string  precio_por_hora = ui->spin_precio_por_hora->text().toUtf8().constData();

    try{
        this->espacio_comun_srv.agregar_espacio_comun(nombre, tipo_espacio, estado,hora_apertura,
                                                      hora_cerrada,precio_por_hora,nombre_polideportivo);

        this->close();
    }catch (sql::SQLException &e){
        QMessageBox mgBox;
        mgBox.setText(e.what());
        mgBox.exec();
    }


}

void Ventana_espacio_deportivo::on_pushButton_clicked()
{
    std::string nombre_polideportivo= ui->entry_nombre_pol->text().toUtf8().constData();
    try{
        this->pol_srv.obtener_polideportivo(nombre_polideportivo);
        ui->btn_agregar->setEnabled(true);
        ui->comboBox_espacios->setEnabled(true);

        ui->comboBox_estados->setEnabled(true);
        ui->entry_nombre->setEnabled(true);
        ui->entry_nombre_pol->setEnabled(false);
        ui->spin_precio_por_hora->setEnabled(true);
        ui->time_hora_apertura->setEnabled(true);
        ui->time_hora_cerrada->setEnabled(true);

    }catch (...){
        QMessageBox mgBox;
        mgBox.setText("El polideportivo no se encuentra registrado\n"
                      "Regrese a ventana principal y resgistre polideportivo");
        mgBox.exec();
    }
}
