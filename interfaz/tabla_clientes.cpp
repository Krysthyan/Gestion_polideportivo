#include "Headers/tabla_clientes.h"
#include "ui_tabla_clientes.h"

Tabla_clientes::Tabla_clientes(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tabla_clientes)
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
    llenar_tabla();
}

Tabla_clientes::~Tabla_clientes()
{
    delete ui;
}

inline void Tabla_clientes::llenar_tabla()
{

    std::vector<Cliente> *clientes = this->cliente_srv.obtener_lista_clientes();

    for(Cliente cliente: *clientes){
        int j = ui->tabla_clientes->rowCount();

        ui->tabla_clientes->insertRow(j);
        ui->tabla_clientes->setItem(j,0,new QTableWidgetItem(QString::fromStdString(cliente.obtener_cedula())));
        ui->tabla_clientes->setItem(j,1,new QTableWidgetItem(QString::fromStdString(cliente.obtener_nombres())));
        ui->tabla_clientes->setItem(j,2,new QTableWidgetItem(QString::fromStdString(cliente.obtener_apellidos())));
        ui->tabla_clientes->setItem(j,3,new QTableWidgetItem(QString::fromStdString(cliente.obtener_direccion())));
        ui->tabla_clientes->setItem(j,4,new QTableWidgetItem(QString::fromStdString(cliente.obtener_telefono())));
        ui->tabla_clientes->setItem(j,5,new QTableWidgetItem(QString::fromStdString(cliente.obtener_email())));
    }


}

void Tabla_clientes::on_pushButton_clicked()
{
    this->close();
}
