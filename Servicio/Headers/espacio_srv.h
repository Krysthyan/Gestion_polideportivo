#ifndef ESPACIO_SRV_H
#define ESPACIO_SRV_H
#include "Mysql/Headers/espacio_mysql.h"

class Espacio_SRV
{
public:
    Espacio_SRV();
    void agregar_espacio(std::string espacios);
    void eliminar_espacio(std::string espacios);
    std::vector<std::string> *obtener_espacios();
private:
    Espacio_mysql espacio_mysql;
};

#endif // ESPACIO_SRV_H
