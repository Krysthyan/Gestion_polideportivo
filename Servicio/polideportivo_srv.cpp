#include "Headers/polideportivo_srv.h"

Polideportivo_SRV::Polideportivo_SRV()
{

}

void Polideportivo_SRV::agregar_polideportivo(std::__cxx11::string nombre, std::__cxx11::string descripcion, std::__cxx11::string direccion)
{
    Polideportivo *polideportivo = new Polideportivo(nombre, descripcion, direccion);
    this->polideportivo_mysql.insertar_polideportivo(polideportivo);
}

Polideportivo *Polideportivo_SRV::obtener_polideportivo(std::__cxx11::string nombre)
{
    return this->polideportivo_mysql.obtener_polideportivo(nombre);
}

void Polideportivo_SRV::actualizar_polideportivo(std::__cxx11::string nombre, std::__cxx11::string descripcion, std::__cxx11::string direccion)
{
    Polideportivo *polideportivo = new Polideportivo(nombre, descripcion, direccion);
    this->polideportivo_mysql.actualizar_polideportivo(polideportivo);
}

void Polideportivo_SRV::eliminar_cpolideportivo(std::__cxx11::string nombre)
{
    this->polideportivo_mysql.eliminar_polideportivo(nombre);
}

std::vector<Polideportivo> *Polideportivo_SRV::obtener_lista_polideportivos()
{
    return this->polideportivo_mysql.obtener_lista_polideportivo();
}
