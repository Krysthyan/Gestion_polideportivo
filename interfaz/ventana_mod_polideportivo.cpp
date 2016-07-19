#include "Headers/ventana_mod_polideportivo.h"
#include "ui_ventana_mod_polideportivo.h"

Ventana_mod_polideportivo::Ventana_mod_polideportivo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Ventana_mod_polideportivo)
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

Ventana_mod_polideportivo::~Ventana_mod_polideportivo()
{
    delete ui;
}

void Ventana_mod_polideportivo::on_entry_nombre_editingFinished()
{
    std::string nombre = ui->entry_nombre->text().toUtf8().constData();
    Polideportivo *polideportivo;
    try{
        polideportivo = this->pol.obtener_polideportivo(nombre);
        ui->entry_nombre->setEnabled(false);

        ui->entry_descripcion->setEnabled(true);
        ui->entry_descripcion->setText(polideportivo->descripcion.c_str());

        ui->entry_direccion->setEnabled(true);
        ui->entry_direccion->setText(polideportivo->direccion.c_str());

        ui->btn_agregar->setEnabled(true);
    }catch(...){
        QMessageBox mgBox;
        mgBox.setText("Polideportivo no registrado");
        mgBox.exec();
    }
}

void Ventana_mod_polideportivo::on_btn_agregar_clicked()
{
    std::string nombre = ui->entry_nombre->text().toUtf8().constData();
    std::string descripcion = ui->entry_descripcion->text().toUtf8().constData();
    std::string direccion = ui->entry_direccion->text().toUtf8().constData();

    try{
        this->pol.actualizar_polideportivo(nombre, descripcion, direccion);
        QMessageBox mgBox;
        mgBox.setText("Polideportivo actualizado");
        mgBox.exec();
        this->close();
    }catch(...){
        QMessageBox mgBox;
        mgBox.setText("Problemas al momento de modificar polideportivo");
        mgBox.exec();
    }
}
