#ifndef ADMIN_MYSQL_H
#define ADMIN_MYSQL_H
#include "Objetos/Headers/admin.h"
#include "Objetos/Headers/login.h"
#include "Conexion_DB.h"
#include <vector>

class Admin_mysql
{
public:
    Admin_mysql();
    void insertar_admin(Admin *admin);
    Admin *obtener_admin(std::string cedula);
    void actualizar_admin(Admin *admin);
    void eliminar_admin(std::string cedula);
    void actualizar_password(std::string cedula, std::string password);
    std::vector<Admin> *obtener_lista_admin();

private:
    Conexion_DB *conexion_db=Conexion_DB::instance();


};

#endif // ADMIN_MYSQL_H
