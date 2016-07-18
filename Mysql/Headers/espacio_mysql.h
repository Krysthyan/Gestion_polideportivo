#ifndef ESPACIO_MYSQL_H
#define ESPACIO_MYSQL_H
#include "Conexion_DB.h"

class Espacio_mysql
{
public:
    Espacio_mysql();
    void agregar_espacio(std::string espacio);
    void eliminar_espacio(std::string espacio);
    std::vector<std::string> * obtener_espacios();
private:
    Conexion_DB *conexion_db=Conexion_DB::instance();
};

#endif // ESPACIO_MYSQL_H
