#include "Headers/cliente.h"


Cliente::Cliente(std::__cxx11::string cedula, std::__cxx11::string nombres,
                 std::string apellidos, std::__cxx11::string direccion, std::__cxx11::string telefono,
                 std::__cxx11::string email){
    this->cedula = cedula;
    this->nombres = nombres;
    this->apellidos = apellidos;
    this->direccion = direccion;
    this->telefono = telefono;
    this->email = email;

}
