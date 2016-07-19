#include "Headers/polideportivo.h"

Polideportivo *Polideportivo::instancia = 0 ;


Polideportivo::Polideportivo(){
    this->espacios_deportivos = new std::vector<Espacio_comun>;
}

Polideportivo *Polideportivo::instance()
{
    if(instancia == 0)
        instancia = new Polideportivo;
    return instancia;
}
std::vector<Espacio_comun> *Polideportivo::obtener_espacios(){
    return this->espacios_deportivos;
}

void Polideportivo::agregar_espacio(Espacio_comun espacio_comun)
{
    this->espacios_deportivos->push_back(espacio_comun);
}

void Polideportivo::eliminar_espacio(Espacio_comun espacio_comun)
{

}


