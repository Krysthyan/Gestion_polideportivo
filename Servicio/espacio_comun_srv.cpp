#include "Headers/espacio_comun_srv.h"

Espacio_comun_SRV::Espacio_comun_SRV()
{

}

void Espacio_comun_SRV::agregar_espacio_comun(std::__cxx11::string nombre,
                                              std::__cxx11::string tipo_espacio,
                                              std::__cxx11::string estado,
                                              std::__cxx11::string hora_entrada,
                                              std::__cxx11::string hora_salida,
                                              std::__cxx11::string precio_por_hora,
                                              std::__cxx11::string nombre_polideportivo)
{
    Espacio_comun *espacio = new Espacio_comun(nombre,tipo_espacio, estado,hora_entrada,
                                               hora_salida,precio_por_hora);
    this->espacio_mysql.insertar_espacio(espacio, nombre_polideportivo);

}

Espacio_comun *Espacio_comun_SRV::obtener_espacio_comun(std::__cxx11::string nombre)
{
    return this->espacio_mysql.obtener_espacio(nombre);
}

void Espacio_comun_SRV::actualizar_espacio_comun(std::__cxx11::string nombre,
                                                 std::__cxx11::string tipo_espacio,
                                                 std::__cxx11::string estado,
                                                 std::__cxx11::string hora_entrada,
                                                 std::__cxx11::string hora_salida,
                                                 std::__cxx11::string precio_por_hora,
                                                 std::__cxx11::string nombre_polideportivo)
{
    Espacio_comun *espacio = new Espacio_comun(nombre,tipo_espacio, estado,hora_entrada,
                                               hora_salida,precio_por_hora);
    this->espacio_mysql.actualizar_espacio(espacio);
}

void Espacio_comun_SRV::eliminar_espacio_comun(std::__cxx11::string nombre_polideportivo,
                                               std::__cxx11::string nombre_espacio)
{
    this->espacio_mysql.eliminar_espacio(nombre_polideportivo, nombre_espacio);
}

std::vector<Espacio_comun> *Espacio_comun_SRV::obtener_lista_espacios_comun(std::__cxx11::string nombre_polideportivo)
{
    return this->espacio_mysql.obtener_lista_espacios_comun(nombre_polideportivo);
}

void Espacio_comun_SRV::actualizar_estado(std::__cxx11::string estado, std::__cxx11::string nombre_espacio)
{
    this->espacio_mysql.actualizar_estado(estado, nombre_espacio);
}
