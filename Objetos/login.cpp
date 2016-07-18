#include "Headers/login.h"

Login::Login(std::string usuario, std::string password){
    this->usuario = usuario;
    this->password = password;

}
std::string Login::obtener_usuario(){
    return this->usuario;
}
std::string Login::obtener_password(){
    return this->password;
}
void Login::set_usuario(std::string usuario){
    this->usuario = usuario;
}
void Login::set_password(std::string password){
    this->password = password;
}
