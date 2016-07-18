#ifndef LOGIN_MYSQL_H
#define LOGIN_MYSQL_H
#include "Conexion_DB.h"
#include "Objetos/Headers/login.h"
#include <iostream>


class Login_mysql
{
public:
    Login_mysql();
    void insertar_usuario(std::string usuario, std::string password);
    Login* obtener_usuario(std::string usuario);
private:
    Conexion_DB *conexion_db=Conexion_DB::instance();
};
\

#endif // LOGIN_MYSQL_H
