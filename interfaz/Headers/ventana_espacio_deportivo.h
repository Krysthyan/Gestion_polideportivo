#ifndef VENTANA_ESPACIO_DEPORTIVO_H
#define VENTANA_ESPACIO_DEPORTIVO_H
#include "Servicio/Headers/estado_srv.h"
#include "Servicio/Headers/espacio_srv.h"
#include <QWidget>
#include <QMessageBox>
#include "Objetos/Headers/polideportivo.h"
#include "Servicio/Headers/polideportivo_srv.h"
#include "Servicio/Headers/espacio_comun_srv.h"


namespace Ui {
class Ventana_espacio_deportivo;
}

class Ventana_espacio_deportivo : public QWidget
{
    Q_OBJECT

public:
    explicit Ventana_espacio_deportivo(QWidget *parent = 0);
    ~Ventana_espacio_deportivo();

private slots:


    void on_btn_agregar_clicked();

    void on_pushButton_clicked();

private:
    Ui::Ventana_espacio_deportivo *ui;
    void agregar_estados();
    void agregar_espacios();
    Estado_SRV estados_srv;
    Espacio_SRV espacios_srv;
    Espacio_comun *espacio_comun;
    Polideportivo_SRV pol_srv;
    Espacio_comun_SRV espacio_comun_srv;

    //Ventana_agregar_polideportivo *ventana_polideportivo;


};

#endif // VENTANA_ESPACIO_DEPORTIVO_H
