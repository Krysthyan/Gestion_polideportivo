#ifndef VENTANA_PRINCIPAL_H
#define VENTANA_PRINCIPAL_H

#include <QMainWindow>
#include "ventana_cliente.h"
#include "ventana_cliente_mod.h"
#include "ventana_cliente_del.h"
#include "ventana_admin.h"
#include "ventana_agregar_polideportivo.h"

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

private:
    Ui::Ventana_principal *ui;
    Ventana_cliente *ventana_cliente;
    Ventana_cliente_mod *ventana_cliente_mod;
    Ventana_cliente_del *ventana_cliente_del;

    Ventana_admin *ventana_admin;

    Ventana_agregar_polideportivo *ventana_polideportivo;
};

#endif // VENTANA_PRINCIPAL_H
