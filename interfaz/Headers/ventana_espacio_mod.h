#ifndef VENTANA_ESPACIO_MOD_H
#define VENTANA_ESPACIO_MOD_H

#include <QWidget>

namespace Ui {
class Ventana_espacio_mod;
}

class Ventana_espacio_mod : public QWidget
{
    Q_OBJECT

public:
    explicit Ventana_espacio_mod(QWidget *parent = 0);
    ~Ventana_espacio_mod();

private:
    Ui::Ventana_espacio_mod *ui;
};

#endif // VENTANA_ESPACIO_MOD_H
