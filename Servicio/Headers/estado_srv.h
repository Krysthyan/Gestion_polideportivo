#ifndef ESTADO_SRV_H
#define ESTADO_SRV_H
#include <vector>
#include <iostream>
#include "Mysql/Headers/estado_mysql.h"

class Estado_SRV
{
public:
    Estado_SRV();
    void agregar_estado(std::string estado);
    void eliminar_estado(std::string estado);
    std::vector<std::string> *obtener_estados();
private:
    Estado_mysql estado_mysql;
};

#endif // ESTADO_SRV_H
