#ifndef VENTANA_POLIDEPORTIVO_H
#define VENTANA_POLIDEPORTIVO_H

#include <QWidget>
#include "ventana_espacio_deportivo.h"

namespace Ui {
class Ventana_polideportivo;
}

class Ventana_polideportivo : public QWidget
{
    Q_OBJECT

public:
    explicit Ventana_polideportivo(QWidget *parent = 0);
    ~Ventana_polideportivo();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::Ventana_polideportivo *ui;
    Ventana_espacio_deportivo *v_espacio_deportivo;
};

#endif // VENTANA_POLIDEPORTIVO_H
