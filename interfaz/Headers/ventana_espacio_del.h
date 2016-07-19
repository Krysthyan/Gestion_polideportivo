#ifndef VENTANA_ESPACIO_DEL_H
#define VENTANA_ESPACIO_DEL_H

#include <QWidget>

namespace Ui {
class Ventana_espacio_del;
}

class Ventana_espacio_del : public QWidget
{
    Q_OBJECT

public:
    explicit Ventana_espacio_del(QWidget *parent = 0);
    ~Ventana_espacio_del();

private:
    Ui::Ventana_espacio_del *ui;
};

#endif // VENTANA_ESPACIO_DEL_H
