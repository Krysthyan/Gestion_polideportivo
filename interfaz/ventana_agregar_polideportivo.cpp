#include "Headers/ventana_agregar_polideportivo.h"
#include "ui_ventana_agregar_polideportivo.h"

Ventana_agregar_polideportivo::Ventana_agregar_polideportivo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Ventana_agregar_polideportivo)
{
    ui->setupUi(this);
}

Ventana_agregar_polideportivo::~Ventana_agregar_polideportivo()
{
    delete ui;
}

void Ventana_agregar_polideportivo::on_btn_agregar_clicked()
{
    try{
        std::string nombre = ui->entry_nombre->text().toUtf8().constData();
        std::string descripcion = ui->entry_descripcion->text().toUtf8().constData();
        std::string direccion = ui->entry_direccion->text().toUtf8().constData();

        this->pol_srv.agregar_polideportivo(nombre, descripcion, direccion);
        QMessageBox mgBox;
        mgBox.setText("Polideportivo registrado");
        mgBox.exec();
        this->close();
    }catch (sql::SQLException &e){
        QMessageBox mgBox;
        mgBox.setText(e.what());
        mgBox.exec();
    }
}
