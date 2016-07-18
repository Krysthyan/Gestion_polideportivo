#ifndef ESPACIO_DEPORTIVO_H
#define ESPACIO_DEPORTIVO_H
#include <iostream>

class Espacio_deportivo
{
public:
    Espacio_deportivo(std::string nombre,
                      std::string tipo_espacio,
                      std::string estado,
                      std::string hora_apertura,
                      std::string hora_cierre,
                      double precio_por_hora);
};

#endif // ESPACIO_DEPORTIVO_H
