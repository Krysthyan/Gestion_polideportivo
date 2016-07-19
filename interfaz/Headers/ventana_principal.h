#ifndef VENTANA_PRINCIPAL_H
#define VENTANA_PRINCIPAL_H

#include <QMainWindow>
#include "ventana_cliente.h"
#include "ventana_cliente_mod.h"
#include "ventana_cliente_del.h"
#include "ventana_admin.h"
#include "ventana_agregar_polideportivo.h"
#include "ventana_espacio_deportivo.h"
#include "ventana_espacio_mod.h"
#include "ventana_espacio_del.h"
#include "ventana_del_polideportivo.h"
#include "ventana_mod_polideportivo.h"
#include "ventana_reserva.h"

namespace Ui {
class Ventana_principal;
}

class Ventana_principal : public QMainWindow
{
    Q_OBJECT

public:
    explicit Ventana_principal(QWidget *parent = 0);
    ~Ventana_principal();

private slots:
    void on_btn_agregar_cliente_clicked();

    void on_btn_modificar_cliente_clicked();

    void on_btn_eliminar_cliente_clicked();

    void on_btn_agregar_admin_clicked();

    void on_btn_modificar_admin_clicked();

    void on_btn_eliminar_admin_clicked();

    void on_btn_agregar_pol_clicked();

    void on_btn_add_espacio_clicked();

    void on_btn_mod_espacio_clicked();

    void on_btn_del_espacio_clicked();

    void on_btn_eliminar_pol_clicked();

    void on_btn_modificar_pol_clicked();

    void on_btn_reservar_clicked();

private:
    Ui::Ventana_principal *ui;
    Ventana_cliente *ventana_cliente;
    Ventana_cliente_mod *ventana_cliente_mod;
    Ventana_cliente_del *ventana_cliente_del;

    Ventana_admin *ventana_admin;

    Ventana_agregar_polideportivo *ventana_polideportivo;
    Ventana_del_polideportivo *ven_del_pol;
    Ventana_mod_polideportivo *ven_mod_pol;


    Ventana_espacio_deportivo *ventana_add_espacio;
    Ventana_espacio_mod *ventana_mod_espacio;
    Ventana_espacio_del *ventanap_del_espacio;

    Ventana_reserva *ventana_reserva;
};

#endif // VENTANA_PRINCIPAL_H
