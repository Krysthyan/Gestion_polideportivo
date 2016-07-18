#ifndef POLIDEPORTIVO_H
#define POLIDEPORTIVO_H
#include "Objetos/Headers/espacio_comun.h"
#include <vector>

class Polideportivo{

public:
    static Polideportivo * instance(std::string nombre,
                                    std::string descripcion);
    Polideportivo();
    static Polideportivo *instance();
    void agregar_espacio(Espacio_comun espacio_comun);
    void eliminar_espacio(Espacio_comun espacio_comun);
protected:
    Polideportivo(std::string nombre, std::string descripcion);

public:
    static Polideportivo *instancia;



private:
    std::vector<Espacio_comun> espacios_deportivos;
    std::string nombre;
    std::string descripcion;


};

#endif // POLIDEPORTIVO_H
