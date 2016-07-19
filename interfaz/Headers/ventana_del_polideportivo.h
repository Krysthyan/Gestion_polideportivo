#ifndef VENTANA_DEL_POLIDEPORTIVO_H
#define VENTANA_DEL_POLIDEPORTIVO_H
#include "Servicio/Headers/polideportivo_srv.h"
#include <QMessageBox>
#include <QWidget>

namespace Ui {
class Ventana_del_polideportivo;
}

class Ventana_del_polideportivo : public QWidget
{
    Q_OBJECT

public:
    explicit Ventana_del_polideportivo(QWidget *parent = 0);
    ~Ventana_del_polideportivo();

private slots:
    void on_btn_eliminar_clicked();

private:
    Ui::Ventana_del_polideportivo *ui;
    Polideportivo_SRV pol;
};

#endif // VENTANA_DEL_POLIDEPORTIVO_H
