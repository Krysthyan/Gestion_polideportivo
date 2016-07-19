#ifndef POLIDEPORTIVO_H
#define POLIDEPORTIVO_H
#include "Objetos/Headers/espacio_comun.h"
#include <vector>

class Polideportivo{

public:


    static Polideportivo *instance();
    void agregar_espacio(Espacio_comun espacio_comun);
    void eliminar_espacio(Espacio_comun espacio_comun);
    std::vector<Espacio_comun> *obtener_espacios();

protected:
    Polideportivo();


public:
    static Polideportivo *instancia;



private:
    std::vector<Espacio_comun> *espacios_deportivos;
    std::string nombre;
    std::string descripcion;


};

#endif // POLIDEPORTIVO_H
