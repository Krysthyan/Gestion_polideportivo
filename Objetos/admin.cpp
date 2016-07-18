#include "Headers/admin.h"

Admin::Admin(std::__cxx11::string cedula, std::__cxx11::string password, std::__cxx11::string nombres,
             std::__cxx11::string apellidos, std::__cxx11::string direccion, std::__cxx11::string telefono,
             std::__cxx11::string email)
{
    this->password = password;
    this->cedula = cedula;
    this->nombres = nombres;
    this->apellidos = apellidos;
    this->direccion = direccion;
    this->telefono = telefono;
    this->email = email;
}

std::string Admin::obtener_password(){
    return this->password;
}

void Admin::set_password(std::__cxx11::string password)
{
    this->password = password;
}



