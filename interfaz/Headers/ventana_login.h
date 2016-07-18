#ifndef VENTANA_LOGIN_H
#define VENTANA_LOGIN_H

#include <QWidget>
#include "Servicio/Headers/login_srv.h"
#include <exception>
#include <QMessageBox>
#include "interfaz/Headers/ventana_principal.h"

namespace Ui {
class Ventana_login;
}

class Ventana_login : public QWidget
{
    Q_OBJECT

public:
    explicit Ventana_login(QWidget *parent = 0);
    ~Ventana_login();

private slots:
    void on_btnSalir_clicked();

    void on_btnIngresar_clicked();

private:
    void validar_datos();
    Ui::Ventana_login *ui;
    Login_SRV *login_SRV = new Login_SRV();
protected:
    Ventana_principal *ventana_principal;


};

#endif // VENTANA_LOGIN_H
