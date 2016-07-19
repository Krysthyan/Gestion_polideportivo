#include "Headers/ventana_del_polideportivo.h"
#include "ui_ventana_del_polideportivo.h"

Ventana_del_polideportivo::Ventana_del_polideportivo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Ventana_del_polideportivo)
{
    ui->setupUi(this);
}

Ventana_del_polideportivo::~Ventana_del_polideportivo()
{
    delete ui;
}

void Ventana_del_polideportivo::on_btn_eliminar_clicked()
{
    std::string nombre = ui->entry_nombre->text().toUtf8().constData();
    this->pol.eliminar_cpolideportivo(nombre);
    QMessageBox mgBox;
    mgBox.setText("Polideportivo eliminado");
    mgBox.exec();
    this->close();
}
