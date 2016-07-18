#ifndef POLIDEPORTIVO_H
#define POLIDEPORTIVO_H
#include "Objetos/Headers/espacio_comun.h"
#include <vector>

class Polideportivo{

public:
    static Polideportivo * instance();
protected:
    Polideportivo();

public:

    static Polideportivo *instancia;


};

#endif // POLIDEPORTIVO_H
