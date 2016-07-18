#ifndef ADMIN_H
#define ADMIN_H
#include <iostream>
#include "persona.h"

class Admin : public Persona
{
public:
    Admin(std::__cxx11::string cedula, std::__cxx11::string password, std::__cxx11::string nombres,
          std::string apellidos, std::__cxx11::string direccion, std::__cxx11::string telefono,
          std::__cxx11::string email);
    std::string obtener_password();
    void set_password(std::string password);

private:
    std::string password;
};

#endif // ADMIN_H
