#include "Headers/tabla_admin.h"
#include "ui_tabla_admin.h"

Tabla_admin::Tabla_admin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tabla_admin)
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
    llenar_admin();


}

Tabla_admin::~Tabla_admin()
{
    delete ui;
}

inline void Tabla_admin::llenar_admin()
{
    std::cout<<"eentro"<<std::endl;
    std::vector<Admin> *admins = this->admin_srv.obtener_lista_admin();


    for(Admin admin: *admins){
        int j = ui->tabla_admin->rowCount();

        ui->tabla_admin->insertRow(j);
        ui->tabla_admin->setItem(j,0,new QTableWidgetItem(QString::fromStdString(admin.obtener_cedula())));
        ui->tabla_admin->setItem(j,1,new QTableWidgetItem(QString::fromStdString(admin.obtener_nombres())));
        ui->tabla_admin->setItem(j,2,new QTableWidgetItem(QString::fromStdString(admin.obtener_apellidos())));
        ui->tabla_admin->setItem(j,3,new QTableWidgetItem(QString::fromStdString(admin.obtener_direccion())));
        ui->tabla_admin->setItem(j,4,new QTableWidgetItem(QString::fromStdString(admin.obtener_telefono())));
        ui->tabla_admin->setItem(j,5,new QTableWidgetItem(QString::fromStdString(admin.obtener_email())));
        ui->tabla_admin->setItem(j,6,new QTableWidgetItem(QString::fromStdString(admin.obtener_password())));
    }
}

void Tabla_admin::on_pushButton_clicked()
{
    this->close();
}
