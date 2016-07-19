#include "Headers/ventana_espacio_mod.h"
#include "ui_ventana_espacio_mod.h"
#include<QMessageBox>

Ventana_espacio_mod::Ventana_espacio_mod(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Ventana_espacio_mod)
{
    ui->setupUi(this);

    agregar_estados();
    agregar_espacios();

}

Ventana_espacio_mod::~Ventana_espacio_mod()
{
    delete ui;
}


inline void Ventana_espacio_mod::agregar_estados()
{
    std::vector<std::string> *estados = this->estados_srv.obtener_estados();
    for(int a = 0; a<estados->size(); a++){
        std::string estado = estados->at(a);
        ui->comboBox_estados->addItem(estado.c_str());
    }
}

inline void Ventana_espacio_mod::agregar_espacios()
{
    std::vector<std::string> *espacios = this->espacios_srv.obtener_espacios();
    for(int a = 0; a<espacios->size(); a++){
        std::string espacio = espacios->at(a);
        ui->comboBox_espacios->addItem(espacio.c_str());
    }
}

void Ventana_espacio_mod::on_pushButton_clicked()
{

}


void Ventana_espacio_mod::on_pushButtonConsultar_clicked()
{
    std::string nombre_polideportivo = ui->lineEditNombrePolideportivo->text().toStdString();
    std::string nombre_espacio = ui->lineEditNombreEspacio->text().toStdString();

    if(nombre_espacio.length()==0 || nombre_polideportivo.length()==0){
        QMessageBox::warning(this,"Warning","Campo(s) Vacio(s)");
        return;
    }
    try{
        this->pol_srv.obtener_polideportivo(nombre_polideportivo);
        ///
        ui->comboBox_espacios->setEnabled(true);
        ui->comboBox_estados->setEnabled(true);
        ui->time_hora_apertura->setEnabled(true);
        ui->time_hora_cerrada->setEnabled(true);
        ui->pushButtonModificar->setEnabled(true);
        ui->spin_precio_por_hora->setEnabled(true);


    }catch (...){
        QMessageBox mgBox;
        mgBox.setText("El polideportivo no se encuentra registrado\n"
                      );
        mgBox.exec();
    }

}

void Ventana_espacio_mod::on_pushButtonModificar_clicked()
{

    //recojer parametros
    std::string segundos = ":00";
    std::string nombre_esp_com = ui->lineEditNombreEspacio->text().toStdString();
    std::string tipo_espacio = ui->comboBox_espacios->currentText().toStdString();
    std::string estado = ui->comboBox_estados->currentText().toStdString();
    std::string hora_entrada = ui->time_hora_apertura->text().toStdString()+segundos;
    std::string hora_salida = ui->time_hora_cerrada->text().toStdString()+segundos;
    std::string precio = ui->spin_precio_por_hora->text().toStdString();
    std::string nombre_polidep = ui->lineEditNombrePolideportivo->text().toStdString();

    //llamar a SRV y controlar excepcion
    try{
        this->espacio_comun_srv.actualizar_espacio_comun(nombre_esp_com,tipo_espacio,estado,hora_entrada,hora_salida,precio,nombre_polidep);
        QMessageBox::information(this,"Informacion","Modificado....");
        this->close();
    }catch (sql::SQLException &e){
        QMessageBox::warning(this,"warning","Excepcion....");
    }

}

void Ventana_espacio_mod::on_pushButtonCancelar_clicked()
{
    this->close();
}
