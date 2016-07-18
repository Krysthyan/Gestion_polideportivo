#include "Headers/ventana_cliente_mod.h"
#include "ui_ventana_cliente_mod.h"
#include <QSize>


Ventana_cliente_mod::Ventana_cliente_mod(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Ventana_cliente_mod)
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

Ventana_cliente_mod::~Ventana_cliente_mod()
{
    delete ui;
}

void Ventana_cliente_mod::on_entry_cedula_editingFinished(){
    std::string cedula =  ui->entry_cedula->text().toUtf8().constData();
    try{
        Cliente *cliente;
        cliente = this->cliente_SRV->obtener_cliente(cedula);
        ui->entry_cedula->setEnabled(false);

        ui->entry_nombres->setEnabled(true);
        ui->entry_nombres->setText(cliente->obtener_nombres().c_str());

        ui->entry_apellidos->setEnabled(true);
        ui->entry_apellidos->setText(cliente->obtener_apellidos().c_str());

        ui->entry_direccion->setEnabled(true);
        ui->entry_direccion->setText(cliente->obtener_direccion().c_str());

        ui->entry_telefono->setEnabled(true);
        ui->entry_telefono->setText(cliente->obtener_telefono().c_str());

        ui->entry_email->setEnabled(true);
        ui->entry_email->setText(cliente->obtener_email().c_str());

    } catch(...){
        QMessageBox mgBox;
        mgBox.setText("Cedula no registrada");
        mgBox.exec();
    }
}

void Ventana_cliente_mod::on_btn_agregar_clicked()
{
    std::string cedula= ui->entry_cedula->text().toUtf8().constData();
    std::string nombres = ui->entry_nombres->text().toUtf8().constData();
    std::string apellidos = ui->entry_apellidos->text().toUtf8().constData();
    std::string direccion = ui->entry_direccion->text().toUtf8().constData();
    std::string telefono = ui->entry_telefono->text().toUtf8().constData();
    std::string email = ui->entry_email->text().toUtf8().constData();
    try{
        this->cliente_SRV->actualizar_cliente(cedula, nombres, apellidos, direccion, telefono, email);
        this->close();
        QMessageBox mgBox;
        mgBox.setText("Cliente registrado..");
        mgBox.exec();

    } catch (sql::SQLException &e){
        QMessageBox mgBox;
        mgBox.setText(e.what());
        mgBox.exec();
    }
}
