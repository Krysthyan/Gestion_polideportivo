#include "Headers/estado_srv.h"

Estado_SRV::Estado_SRV()
{

}

void Estado_SRV::agregar_estado(std::__cxx11::string estado)
{
    this->estado_mysql.agregar_estado(estado);
}

void Estado_SRV::eliminar_estado(std::__cxx11::string estado)
{
    this->estado_mysql.eliminar_estado(estado);
}

std::vector<std::__cxx11::string> *Estado_SRV::obtener_estados()
{
    return this->estado_mysql.obtener_estados();
}
