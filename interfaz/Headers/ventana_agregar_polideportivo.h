#ifndef VENTANA_AGREGAR_POLIDEPORTIVO_H
#define VENTANA_AGREGAR_POLIDEPORTIVO_H
#include "ventana_espacio_deportivo.h"
#include "Objetos/Headers/polideportivo.h"
#include <QWidget>

namespace Ui {
class Ventana_agregar_polideportivo;
}

class Ventana_agregar_polideportivo : public QWidget
{
    Q_OBJECT

public:
    explicit Ventana_agregar_polideportivo(QWidget *parent = 0);
    ~Ventana_agregar_polideportivo();

private slots:
    void on_btn_agregar_espacio_clicked();

private:
    Ui::Ventana_agregar_polideportivo *ui;

private:
    void  agregar_espacios();
    Ventana_espacio_deportivo *ventana_e_d;
    Polideportivo *polideportivo = Polideportivo::instance();
};

#endif // VENTANA_AGREGAR_POLIDEPORTIVO_H
