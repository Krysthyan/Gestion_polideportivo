#ifndef VENTANA_MOD_POLIDEPORTIVO_H
#define VENTANA_MOD_POLIDEPORTIVO_H
#include "Objetos/Headers/polideportivo.h"
#include "Servicio/Headers/polideportivo_srv.h"
#include <QMessageBox>
#include <QWidget>
#include <QSize>

namespace Ui {
class Ventana_mod_polideportivo;
}

class Ventana_mod_polideportivo : public QWidget
{
    Q_OBJECT

public:
    explicit Ventana_mod_polideportivo(QWidget *parent = 0);
    ~Ventana_mod_polideportivo();

private slots:
    void on_entry_nombre_editingFinished();

    void on_btn_agregar_clicked();

private:
    Ui::Ventana_mod_polideportivo *ui;
    Polideportivo_SRV pol;
};

#endif // VENTANA_MOD_POLIDEPORTIVO_H
