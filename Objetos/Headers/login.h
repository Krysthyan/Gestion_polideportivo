#ifndef LOGIN_H
#define LOGIN_H

#include <iostream>

class Login
{
public:
    Login(std::string usuario, std::string password);
    std::string obtener_usuario();
    std::string obtener_password();
    void set_usuario(std::string usuario);
    void set_password(std::string password);
private:
    std::string usuario;
    std::string password;
};

#endif // LOGIN_H
