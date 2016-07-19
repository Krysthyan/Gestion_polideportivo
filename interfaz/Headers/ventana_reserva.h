#ifndef VENTANA_RESERVA_H
#define VENTANA_RESERVA_H

#include "Servicio/Headers/cliente_srv.h"
#include "ventana_cliente.h"
#include "Objetos/Headers/cliente.h"

#include "Servicio/Headers/polideportivo_srv.h"
#include "Objetos/Headers/polideportivo.h"

#include "Servicio/Headers/espacio_comun_srv.h"
#include "Objetos/Headers/espacio_comun.h"

#include "Servicio/Headers/reserva_srv.h"


#include <QWidget>
#include <QMessageBox>
#include <vector>
#include <QDateTime>

namespace Ui {
class Ventana_reserva;
}

class Ventana_reserva : public QWidget
{
    Q_OBJECT

public:
    explicit Ventana_reserva(QWidget *parent = 0);
    ~Ventana_reserva();

private slots:


    void on_entry_cedula_cliente_returnPressed();

    void on_comboBox_pol_activated(int index);

    void on_comboBox_espacios_activated(int index);

    void on_btn_reservar_clicked();

private:
    Ui::Ventana_reserva *ui;
    Cliente_SRV cliente_srv;
    Ventana_cliente *ventana_cliente;

    Polideportivo_SRV polideportivo_srv;
    Espacio_comun_SRV espacio_comun_srv;

    std::vector<Espacio_comun> *espacios;

    Reserva_SRV reserva_srv;

};

#endif // VENTANA_RESERVA_H
