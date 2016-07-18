#ifndef CLIENTE_MYSQL_H
#define CLIENTE_MYSQL_H
#include "Objetos/Headers/cliente.h"
#include "Conexion_DB.h"

class Cliente_mysql
{
public:
    Cliente_mysql();
    void insertar_cliente(Cliente *cliente);
    Cliente *obtener_cliente(std::string cedula);
    void actualizar_cliente(Cliente *cliente);
    void eliminar_cliente(std::string cedula);
private:
    Conexion_DB *conexion_db=Conexion_DB::instance();

};

#endif // CLIENTE_MYSQL_H

