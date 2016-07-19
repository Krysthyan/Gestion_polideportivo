#ifndef VENTANA_ESPACIO_DEL_H
#define VENTANA_ESPACIO_DEL_H

#include "Objetos/Headers/polideportivo.h"
#include "Servicio/Headers/polideportivo_srv.h"
#include "Servicio/Headers/espacio_comun_srv.h"
#include "Servicio/Headers/estado_srv.h"
#include "Servicio/Headers/espacio_srv.h"
#include <QWidget>

namespace Ui {
class Ventana_espacio_del;
}

class Ventana_espacio_del : public QWidget
{
    Q_OBJECT

public:
    explicit Ventana_espacio_del(QWidget *parent = 0);
    ~Ventana_espacio_del();

private slots:
    void on_pushButton_clicked();

    void on_pushButtonEliminar_clicked();

    void on_pushButtonCancelar_clicked();

private:
    Ui::Ventana_espacio_del *ui;

    Polideportivo_SRV pol_srv;
    Espacio_comun_SRV espacio_comun_srv;

    Estado_SRV estados_srv;
    Espacio_SRV espacios_srv;
    Espacio_comun *espacio_comun;
};

#endif // VENTANA_ESPACIO_DEL_H
