#ifndef ADMIN_SRV_H
#define ADMIN_SRV_H
#include "Objetos/Headers/admin.h"
#include "Mysql/Headers/admin_mysql.h"

class Admin_SRV
{
public:
    Admin_SRV();
    void agregar_admin(std::string cedula, std::string password, std::string nombres, std::string apellidos,
                         std::string direccion, std::string telefono, std::string email);

    bool existe_admin(std::string cedula);

    Admin *obtener_admin(std::string cedula);

    void actualizar_admin(std::string cedula, std::string password, std::string nombres, std::string apellidos,
                           std::string direccion, std::string telefono, std::string email);
    void eliminar_admin(std::string cedula);

private:
    Admin_mysql admin_mysql;
};

#endif // ADMIN_SRV_H
