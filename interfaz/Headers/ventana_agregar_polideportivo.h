#ifndef VENTANA_AGREGAR_POLIDEPORTIVO_H
#define VENTANA_AGREGAR_POLIDEPORTIVO_H
#include "ventana_espacio_deportivo.h"
#include "Objetos/Headers/polideportivo.h"
#include "Servicio/Headers/polideportivo_srv.h"
#include <QWidget>
#include <QMessageBox>
#include <QSize>

namespace Ui {
class Ventana_agregar_polideportivo;
}

class Ventana_agregar_polideportivo : public QWidget
{
    Q_OBJECT

public:
    explicit Ventana_agregar_polideportivo(QWidget *parent = 0);
    ~Ventana_agregar_polideportivo();

private slots:

    void on_btn_agregar_clicked();

private:
    Ui::Ventana_agregar_polideportivo *ui;

private:
    Polideportivo_SRV pol_srv;

};

#endif // VENTANA_AGREGAR_POLIDEPORTIVO_H
