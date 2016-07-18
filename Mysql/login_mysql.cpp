#include "Headers/login_mysql.h"

Login_mysql::Login_mysql(){

}
void Login_mysql::insertar_usuario(std::string usuario, std::string password){
    this->conexion_db->statement->executeQuery("insert into login (usuario, password)"
                                        "values ('"+usuario+"','"+password+"')");
}
Login* Login_mysql::obtener_usuario(std::string usuario){
    Login  *login;
    std::string sql= "select *from login where usuario='"+usuario+"'";
    std::cout<<"sql = "<<sql<<std::endl;

    this->conexion_db->resultset = this->conexion_db->statement->executeQuery(sql);

    if (this->conexion_db->resultset->next()){
        login = new Login(this->conexion_db->resultset->getString(1),
                          this->conexion_db->resultset->getString(2));
    } else {
        throw "Usuario no registrado";
    }


    return login;

}
