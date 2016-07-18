#ifndef VENTANA_CLIENTE_DEL_H
#define VENTANA_CLIENTE_DEL_H

#include <QWidget>
#include <QMessageBox>
#include "Servicio/Headers/cliente_srv.h"


namespace Ui {
class Ventana_cliente_del;
}

class Ventana_cliente_del : public QWidget
{
    Q_OBJECT

public:
    explicit Ventana_cliente_del(QWidget *parent = 0);
    ~Ventana_cliente_del();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Ventana_cliente_del *ui;
    Cliente_SRV *cliente_SRV = new Cliente_SRV();
};

#endif // VENTANA_CLIENTE_DEL_H
