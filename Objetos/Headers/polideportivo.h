#ifndef POLIDEPORTIVO_H
#define POLIDEPORTIVO_H
#include "Objetos/Headers/espacio_comun.h"
#include <vector>

class Polideportivo{

public:
    Polideportivo(std::string nombre,
                  std::string descripcion,
                  std::string direccion);
    std::string nombre;
    std::string descripcion;
    std::string direccion;


};

#endif // POLIDEPORTIVO_H
