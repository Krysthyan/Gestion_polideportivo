#include "Headers/ventana_agregar_polideportivo.h"
#include "ui_ventana_agregar_polideportivo.h"

Ventana_agregar_polideportivo::Ventana_agregar_polideportivo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Ventana_agregar_polideportivo)
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
