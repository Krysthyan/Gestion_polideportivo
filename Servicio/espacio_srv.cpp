#include "Headers/espacio_srv.h"

Espacio_SRV::Espacio_SRV()
{

}

void Espacio_SRV::agregar_espacio(std::__cxx11::string espacios)
{
    this->espacio_mysql.agregar_espacio(espacios);
}

void Espacio_SRV::eliminar_espacio(std::__cxx11::string espacios)
{
    this->espacio_mysql.eliminar_espacio(espacios);
}

std::vector<std::__cxx11::string> *Espacio_SRV::obtener_espacios()
{
    return this->espacio_mysql.obtener_espacios();
}
