#ifndef TABLA_ADMIN_H
#define TABLA_ADMIN_H

#include <QWidget>
#include <QSize>
#include "Servicio/Headers/admin_srv.h"

namespace Ui {
class Tabla_admin;
}

class Tabla_admin : public QWidget
{
    Q_OBJECT

public:
    explicit Tabla_admin(QWidget *parent = 0);
    ~Tabla_admin();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Tabla_admin *ui;
    void llenar_admin();
    Admin_SRV admin_srv;
};

#endif // TABLA_ADMIN_H
