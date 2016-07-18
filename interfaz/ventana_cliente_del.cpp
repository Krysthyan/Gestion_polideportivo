#include "Headers/ventana_cliente_del.h"
#include "ui_ventana_cliente_del.h"
#include <QSize>


Ventana_cliente_del::Ventana_cliente_del(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Ventana_cliente_del)
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

Ventana_cliente_del::~Ventana_cliente_del()
{
    delete ui;
}

void Ventana_cliente_del::on_pushButton_clicked()
{
    std::string cedula = ui->entry_cedula->text().toUtf8().constData();
    this->cliente_SRV->eliminar_cliente(cedula);
    QMessageBox mgBox;
    mgBox.setText("Cliente eliminado");
    mgBox.exec();
}
