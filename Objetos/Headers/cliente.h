#ifndef CLIENTE_H
#define CLIENTE_H
#include "persona.h"

class Cliente : public Persona
{
public:
    Cliente(std::string cedula, std::string nombres, std::string apellidos,
            std::string direccion, std::string telefono, std::string email);
};

#endif // CLIENTE_H
