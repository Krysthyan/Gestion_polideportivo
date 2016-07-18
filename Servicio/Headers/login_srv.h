#ifndef LOGIN_SRV_H
#define LOGIN_SRV_H
#include <iostream>
#include "Objetos/Headers/login.h"
#include "Mysql/Headers/login_mysql.h"

class Login_SRV{
public:
    Login_SRV();
    bool validar_datos(std::string usuario, std::string password);
private:
    Login_mysql login_mysql;
};

#endif // LOGIN_SRV_H
