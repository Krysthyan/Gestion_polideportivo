#include "Headers/polideportivo.h"

Polideportivo *Polideportivo::instancia = 0 ;

Polideportivo *Polideportivo::instance(std::__cxx11::string nombre, std::__cxx11::string descripcion)
{
    if(instancia == 0)
        instancia = new Polideportivo(nombre, decripcion);
    return instancia;
}

Polideportivo *Polideportivo::instance()
{
    if(instancia == 0)
        instancia = new Polideportivo;
    return instancia;
}

void Polideportivo::agregar_espacio(Espacio_comun espacio_comun)
{
    this->espacios_deportivos.push_back(espacio_comun);
}

void Polideportivo::eliminar_espacio(Espacio_comun espacio_comun)
{

}

Polideportivo::Polideportivo(std::__cxx11::string nombre,
                             std::__cxx11::string descripcion)
{
    this->nombre = nombre;
    this->descripcion = descripcion;
}
