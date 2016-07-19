#ifndef TABLA_CLIENTES_H
#define TABLA_CLIENTES_H

#include <QWidget>
#include <QSize>
#include <vector>
#include "Servicio/Headers/cliente_srv.h"

namespace Ui {
class Tabla_clientes;
}

class Tabla_clientes : public QWidget
{
    Q_OBJECT

public:
    explicit Tabla_clientes(QWidget *parent = 0);
    ~Tabla_clientes();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Tabla_clientes *ui;
    void llenar_tabla();
    Cliente_SRV cliente_srv;
};

#endif // TABLA_CLIENTES_H
