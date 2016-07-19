#ifndef POLIDEPORTIVO_SRV_H
#define POLIDEPORTIVO_SRV_H
#include "Objetos/Headers/polideportivo.h"
#include "Mysql/Headers/polideportivo_mysql.h"

#include <vector>

class Polideportivo_SRV
{
public:
    Polideportivo_SRV();
    void agregar_polideportivo(std::string nombre, std::string descripcion, std::string direccion);

    bool existe_polideportivo(std::string nombre);

    Polideportivo *obtener_polideportivo(std::string nombre);

    void actualizar_polideportivo(std::string nombre, std::string descripcion, std::string direccion);
    void eliminar_cpolideportivo(std::string nombre);


    std::vector<Polideportivo> *obtener_lista_polideportivos();

private:
    Polideportivo_mysql polideportivo_mysql;

};

#endif // POLIDEPORTIVO_SRV_H
