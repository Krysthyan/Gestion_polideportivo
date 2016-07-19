#include "Headers/espacio_comun.h"

Espacio_comun::Espacio_comun(std::__cxx11::string nombre,
                                     std::__cxx11::string tipo_espacio,
                                     std::__cxx11::string estado,
                                     std::__cxx11::string hora_apertura,
                                     std::__cxx11::string hora_cierre,
                                     std::__cxx11::string precio_por_hora)
{
    this->nombre = nombre;
    this->tipo_espcio = tipo_espacio;
    this->estado = estado;
    this->hora_apertura = hora_apertura;
    this->hora_cierre = hora_cierre;
    this->precio_por_hora = precio_por_hora;
}

void Espacio_comun::set_nombre(std::__cxx11::string nombre)
{
    this->nombre = nombre;
}

void Espacio_comun::set_tipo_espacio(std::__cxx11::string tipo_espcio)
{
    this->tipo_espcio = tipo_espcio;
}

void Espacio_comun::set_estado(std::__cxx11::string estado)
{
    this->estado = estado;
}

void Espacio_comun::set_hora_apertura(std::__cxx11::string hora_apertura)
{
    this->hora_apertura = hora_apertura;
}

void Espacio_comun::set_hora_cierre(std::__cxx11::string hora_cierre)
{
    this->hora_cierre = hora_cierre;
}

void Espacio_comun::set_precio_por_hora(std::string precio_por_hora)
{
    this->precio_por_hora = precio_por_hora;
}

std::__cxx11::string Espacio_comun::obtener_nombre()
{
    return this->nombre;
}

std::__cxx11::string Espacio_comun::obtener_tipo_espacio()
{
    return this->tipo_espcio;
}

std::__cxx11::string Espacio_comun::obtener_estado()
{
    return this->estado;
}

std::__cxx11::string Espacio_comun::obtener_hora_apertura()
{
    return this->hora_apertura;
}

std::__cxx11::string Espacio_comun::obtener_hora_cierre()
{
    return this->hora_cierre;
}

std::string Espacio_comun::obtener_precio_por_hora()
{
    return this->precio_por_hora;
}





