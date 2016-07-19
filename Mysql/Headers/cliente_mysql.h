#ifndef CLIENTE_MYSQL_H
#define CLIENTE_MYSQL_H
#include "Objetos/Headers/cliente.h"
#include "Conexion_DB.h"
#include <vector>

class Cliente_mysql
{
public:
    Cliente_mysql();
    void insertar_cliente(Cliente *cliente);
    Cliente *obtener_cliente(std::string cedula);
    void actualizar_cliente(Cliente *cliente);
    void eliminar_cliente(std::string cedula);
    std::vector<Cliente> *obtener_lista_clientes();
private:
    Conexion_DB *conexion_db=Conexion_DB::instance();

};

#endif // CLIENTE_MYSQL_H

