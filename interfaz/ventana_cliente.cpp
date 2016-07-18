#include "Headers/ventana_cliente.h"
#include "ui_ventana_cliente.h"
#include <QSize>
#include <QDialog>

Ventana_cliente::Ventana_cliente(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Ventana_cliente)
{
    QSize size = this->sizeHint();
    int w = this->width();   // returns screen width
    int h = this->height();  // returns screen height
    int mw = size.width();
    int mh = size.height();
    int cw = (w/2) - (mw/2);
    int ch = (h/2) - (mh/2);
    this->move(cw,ch);
    this->children();
    ui->setupUi(this);

}

Ventana_cliente::~Ventana_cliente()
{
    delete ui;
}



void Ventana_cliente::on_btn_agregar_clicked()
{
    std::string cedula= ui->entry_cedula->text().toUtf8().constData();
    std::string nombres = ui->entry_nombres->text().toUtf8().constData();
    std::string apellidos = ui->entry_apellidos->text().toUtf8().constData();
    std::string direccion = ui->entry_direccion->text().toUtf8().constData();
    std::string telefono = ui->entry_telefono->text().toUtf8().constData();
    std::string email = ui->entry_email->text().toUtf8().constData();
    try{
        this->cliente_SRV->agregar_cliente(cedula, nombres, apellidos, direccion, telefono, email);
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
