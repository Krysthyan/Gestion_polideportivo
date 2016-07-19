#ifndef ESPACIO_COMUN_SRV_H
#define ESPACIO_COMUN_SRV_H
#include "Objetos/Headers/espacio_comun.h"
#include "Mysql/Headers/espacio_deportivo_mysql.h"
#include <vector>
class Espacio_comun_SRV
{
public:
    Espacio_comun_SRV();
    void agregar_espacio_comun(std::string nombre, std::string tipo_espacio, std::string estado,
                         std::string hora_entrada, std::string hora_salida, std::string precio_por_hora,
                               std::string nombre_polideportivo);

    bool existe_espacio_comun(std::string nombre);

    Espacio_comun *obtener_espacio_comun(std::string nombre);

    void actualizar_espacio_comun(std::string nombre, std::string tipo_espacio, std::string estado,
                                  std::string hora_entrada, std::string hora_salida, std::string precio_por_hora,
                                        std::string nombre_polideportivo);

    void eliminar_espacio_comun(std::string nombre_polideportivo,
                                std::string nombre_espacio);

    std::vector<Espacio_comun> *obtener_lista_espacios_comun(std::string nombre_polideportivo);

    void actualizar_estado(std::string estado, std::string nombre_espacio);


private:
    Espacio_deportivo_mysql espacio_mysql;
};

#endif // ESPACIO_COMUN_SRV_H
