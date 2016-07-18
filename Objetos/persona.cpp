#include "Headers/persona.h"

Persona::Persona()
{

}

std::__cxx11::string Persona::obtener_cedula(){
    return this->cedula;
}

std::__cxx11::string Persona::obtener_nombres(){
    return this->nombres;
}

std::__cxx11::string Persona::obtener_apellidos(){
    return this->apellidos;
}

std::__cxx11::string Persona::obtener_direccion(){
    return this->direccion;
}

std::__cxx11::string Persona::obtener_telefono(){
    return this->telefono;
}

std::__cxx11::string Persona::obtener_email(){
    return this->email;
}

void Persona::set_cedula(std::__cxx11::string cedula){
    this->cedula = cedula;
}

void Persona::set_nombres(std::__cxx11::string nombres){
    this->nombres = nombres;
}

void Persona::set_apellidos(std::__cxx11::string apellidos){
    this->apellidos = apellidos;
}

void Persona::set_direccion(std::__cxx11::string direccion){
    this->direccion = direccion;
}

void Persona::set_telefono(std::__cxx11::string telefono){
    this->telefono = telefono;
}

void Persona::set_email(std::__cxx11::string email){
    this->email = email;
}
