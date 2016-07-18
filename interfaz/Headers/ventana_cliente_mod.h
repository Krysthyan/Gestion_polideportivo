#ifndef VENTANA_CLIENTE_MOD_H
#define VENTANA_CLIENTE_MOD_H

#include <QWidget>
#include <QMessageBox>
#include "Servicio/Headers/cliente_srv.h"
#include "Objetos/Headers/cliente.h"

namespace Ui {
class Ventana_cliente_mod;
}

class Ventana_cliente_mod : public QWidget
{
    Q_OBJECT

public:
    explicit Ventana_cliente_mod(QWidget *parent = 0);
    ~Ventana_cliente_mod();

private slots:
    void on_entry_cedula_editingFinished();

    void on_btn_agregar_clicked();

private:
    Ui::Ventana_cliente_mod *ui;
    Cliente_SRV *cliente_SRV = new Cliente_SRV();
};

#endif // VENTANA_CLIENTE_MOD_H
