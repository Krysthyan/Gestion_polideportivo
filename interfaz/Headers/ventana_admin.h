#ifndef VENTANA_ADMIN_H
#define VENTANA_ADMIN_H
#include "Servicio/Headers/admin_srv.h"
#include <QWidget>
#include <QMessageBox>


namespace Ui {
class Ventana_admin;
}

class Ventana_admin : public QWidget
{
    Q_OBJECT

public:
    explicit Ventana_admin(QWidget *parent = 0);
    ~Ventana_admin();

private slots:
    void on_btn_agregar_clicked();

private:
    Ui::Ventana_admin *ui;
   Admin_SRV *admin_SRV = new Admin_SRV();
};

#endif // VENTANA_ADMIN_H
