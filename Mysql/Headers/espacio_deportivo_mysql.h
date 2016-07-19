#ifndef ESPACIO_DEPORTIVO_MYSQL_H
#define ESPACIO_DEPORTIVO_MYSQL_H
#include "Objetos/Headers/espacio_comun.h"
#include "Conexion_DB.h"
#include <vector>
class Espacio_deportivo_mysql
{
public:
    Espacio_deportivo_mysql();

    void insertar_espacio(Espacio_comun *espacio_comun, std::string nombre_polideportivo);

    Espacio_comun *obtener_espacio(std::string nombre);

    void actualizar_espacio(Espacio_comun *espacio_comun);

    void eliminar_espacio(std::string nombre_polideportivo,
                          std::string nombre_espacio);

    std::vector<Espacio_comun> *obtener_lista_espacios_comun(std::string nombre_polideportivo);
private:
    Conexion_DB *conexion_db=Conexion_DB::instance();
};

#endif // ESPACIO_DEPORTIVO_MYSQL_H
