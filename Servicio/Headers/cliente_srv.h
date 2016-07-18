#ifndef CLIENTE_SRV_H
#define CLIENTE_SRV_H
#include "Objetos/Headers/cliente.h"
#include "Mysql/Headers/cliente_mysql.h"

class Cliente_SRV
{
public:
    Cliente_SRV();
    void agregar_cliente(std::string cedula, std::string nombres, std::string apellidos,
                         std::string direccion, std::string telefono, std::string email);

    bool existe_cliente(std::string cedula);

    Cliente *obtener_cliente(std::string cedula);

    void actualizar_cliente(std::string cedula, std::string nombres, std::string apellidos,
                           std::string direccion, std::string telefono, std::string email);
    void eliminar_cliente(std::string cedula);


private:
    Cliente_mysql cliente_mysql;
};

#endif // CLIENTE_SRV_H
