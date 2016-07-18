#include "Headers/login_srv.h"

Login_SRV::Login_SRV(){

}
bool Login_SRV::validar_datos(std::string usuario, std::string password){
    Login *loginRetorndo ;
    loginRetorndo = this->login_mysql.obtener_usuario(usuario);

    std::cout<<"contaseña = "<<loginRetorndo->obtener_password()<<std::endl;

    if(password == loginRetorndo->obtener_password()){
        return true;
    }
    return false;
}

