#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>

class Persona
{
public:
    Persona();
    std::string obtener_cedula ();
    std::string obtener_nombres ();
    std::string obtener_apellidos ();
    std::string obtener_direccion ();
    std::string obtener_telefono ();
    std::string obtener_email ();

    void set_cedula (std::string cedula);
    void set_nombres (std::string nombres);
    void set_apellidos (std::string apellidos);
    void set_direccion (std::string direccion);
    void set_telefono (std::string telefono);
    void set_email (std::string email);

protected:
    std::string cedula;
    std::string nombres;
    std::string apellidos;
    std::string direccion;
    std::string telefono;
    std::string email;

};




#endif // PERSONA_H
