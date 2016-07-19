#include "Headers/ventana_reserva.h"
#include "ui_ventana_reserva.h"

Ventana_reserva::Ventana_reserva(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Ventana_reserva)
{
    ui->setupUi(this);
}

Ventana_reserva::~Ventana_reserva()
{
    delete ui;
}


void Ventana_reserva::on_entry_cedula_cliente_returnPressed()
{
    std::string cedula_cliente= ui->entry_cedula_cliente->text().toUtf8().constData();


    std::string cedula =  ui->entry_cedula_cliente->text().toUtf8().constData();
    try{
        Cliente *cliente;

        cliente = this->cliente_srv.obtener_cliente(cedula);
        std::string nombre_apellido = cliente->obtener_nombres()+" " +cliente->obtener_apellidos();
        ui->entry_cedula_cliente->setEnabled(false);
        ui->entry_nombre_cliente->setText(nombre_apellido.c_str());


        std::vector<Polideportivo> *polideportivos = this->polideportivo_srv.obtener_lista_polideportivos();

        for(Polideportivo pol: *polideportivos){
            ui->comboBox_pol->addItem(pol.nombre.c_str());
        }

        std::string nombre_polideportivo = ui->comboBox_pol->currentText().toUtf8().constData();
        std::vector<Espacio_comun> *espacios = this->espacio_comun_srv.obtener_lista_espacios_comun(nombre_polideportivo);
        for(Espacio_comun espacio: *espacios){
            ui->comboBox_espacios->addItem(espacio.obtener_nombre().c_str());
        }


        ui->dateTime_inicio->setDateTime(QDateTime::currentDateTime());
        ui->dateTime_fin->setDateTime(QDateTime::currentDateTime());

        std::string munn= "3,4";

        float num = std::stof(munn);

        std::cout<<"numero flotante"<<std::to_string(num).c_str()<<std::endl;


    } catch(...){
        if (QMessageBox::Yes == QMessageBox(QMessageBox::Information,
                                            "Cliente No registrado", "Desea Registrar al cliente?",
                                            QMessageBox::Yes|QMessageBox::No).exec())
        {
            this->ventana_cliente = new Ventana_cliente();
            this->ventana_cliente->show();
        }

    }
}

void Ventana_reserva::on_comboBox_pol_activated(int index)
{
    std::string nombre_polideportivo = ui->comboBox_pol->currentText().toUtf8().constData();
    this->espacios = this->espacio_comun_srv.obtener_lista_espacios_comun(nombre_polideportivo);

    for (int i = ui->comboBox_espacios->count(); i >= 0; --i)
        {
            if (i != ui->comboBox_espacios->currentIndex()) {
                ui->comboBox_espacios->removeItem(i);
            }
        }
    ui->comboBox_espacios->removeItem(0);

    for(Espacio_comun espacio: *espacios){
        ui->comboBox_espacios->addItem(espacio.obtener_nombre().c_str());
    }
    ui->label_estado->setText(nullptr);
    ui->label_horario->setText(nullptr);
    ui->label_precio->setText(nullptr);
    ui->label_tipo_espacio->setText(nullptr);

}

void Ventana_reserva::on_comboBox_espacios_activated(int index)
{
    std::string espacio_seleccionado = ui->comboBox_espacios->currentText().toUtf8().constData();
    for(Espacio_comun espacio: *espacios){
        if(espacio_seleccionado == espacio.obtener_nombre().c_str()){
            ui->label_tipo_espacio->setText(espacio.obtener_tipo_espacio().c_str());
            ui->label_estado->setText(espacio.obtener_estado().c_str());

            std::string horario = espacio.obtener_hora_apertura()+" - "+espacio.obtener_hora_cierre();
            ui->label_horario->setText(horario.c_str());
            ui->label_precio->setText(espacio.obtener_precio_por_hora().c_str());




            if (espacio.obtener_estado() == "Libre")
                ui->btn_reservar->setEnabled(true);
            else
                ui->btn_reservar->setEnabled(false);
        }

    }
}

void Ventana_reserva::on_btn_reservar_clicked()
{
    std::string cedula_cliente= ui->entry_cedula_cliente->text().toUtf8().constData();
    std::string nombre_polideportivo = ui->comboBox_pol->currentText().toUtf8().constData();
    std::string espacio_seleccionado = ui->comboBox_espacios->currentText().toUtf8().constData();

    std::string fecha_inicio = ui->dateTime_inicio->text().toUtf8().constData();
    std::string fecha_final = ui->dateTime_fin->text().toUtf8().constData();

    std::string pago = ui->label_precio->text().toUtf8().constData();

    std::string tipo_pago = ui->comboBox_tipo_pago->currentText().toUtf8().constData();




    this->reserva_srv.agregar_reserva(cedula_cliente,espacio_seleccionado,
                                      fecha_inicio,fecha_final,pago,tipo_pago,"vacio");


    QMessageBox mgBox;
    mgBox.setText("Su reserva ha sido registrada con éxito");
    mgBox.exec();
    this->close();
}
