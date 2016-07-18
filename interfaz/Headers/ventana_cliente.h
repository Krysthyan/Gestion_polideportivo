#ifndef VENTANA_CLIENTE_H
#define VENTANA_CLIENTE_H

#include <QWidget>
#include <QMessageBox>
#include "Servicio/Headers/cliente_srv.h"
#include <cppconn/exception.h>


namespace Ui {
class Ventana_cliente;
}

class Ventana_cliente : public QWidget
{
    Q_OBJECT

public:
    explicit Ventana_cliente(QWidget *parent = 0);
    ~Ventana_cliente();

private slots:

    void on_btn_agregar_clicked();

private:
    Ui::Ventana_cliente *ui;

    Cliente_SRV *cliente_SRV = new Cliente_SRV();

};

#endif // VENTANA_CLIENTE_H
