#include "Headers/admin_mysql.h"

Admin_mysql::Admin_mysql()
{

}
void Admin_mysql::insertar_admin(Admin *admin){

    std::string sql_persona = "insert into persona (cedula,nombres, apellidos,direccion,"
                              "telefono,email) values ('"+admin->obtener_cedula()+"','"+
                               admin->obtener_nombres()+"', '"+admin->obtener_apellidos()+"','"+
                              admin->obtener_direccion()+"', '"+admin->obtener_telefono()+"','"+
                              admin->obtener_email()+"')";
    std::string sql_login = "insert into login (usuario,pass) values ('"+admin->obtener_cedula()+"', '"+
                                                                        admin->obtener_password()+"')";


    this->conexion_db->statement->executeUpdate(sql_login);
    this->conexion_db->statement->executeUpdate(sql_persona);

}

Admin *Admin_mysql::obtener_admin(std::__cxx11::string cedula)
{
    std::string sql_obtener_admin = " select * from persona where cedula = '"+cedula+"'";
    this->conexion_db->resultset = this->conexion_db->statement->executeQuery(sql_obtener_admin);

    if(this->conexion_db->resultset->rowsCount() == 0){
        throw "La cedula ingresada no está registrada";
    }
    this->conexion_db->resultset->next();
    std::cout<<"cedula encontrada ==>"<<this->conexion_db->resultset->getString(1)<<std::endl;
    Admin *admin = new Admin(this->conexion_db->resultset->getString(1),
                                    "--------------",
                                   this->conexion_db->resultset->getString(2),
                                   this->conexion_db->resultset->getString(3),
                                   this->conexion_db->resultset->getString(4),
                                   this->conexion_db->resultset->getString(5),
                                   this->conexion_db->resultset->getString(6));
    return admin;


}

void Admin_mysql::actualizar_admin(Admin *admin)
{
    std::string sql_persona = "UPDATE persona SET nombres='"+admin->obtener_nombres()+
                                "', apellidos='"+admin->obtener_apellidos()+
                                "', direccion='"+admin->obtener_direccion()+
                                "', telefono='"+admin->obtener_telefono()+
                                "', email='"+admin->obtener_email()+"' WHERE cedula = '"+
                                admin->obtener_cedula()+"'";

    this->conexion_db->statement->executeUpdate(sql_persona);

}

void Admin_mysql::eliminar_admin(std::__cxx11::string cedula)
{
    std::string sql_persona = "DELETE FROM persona where cedula = '"+cedula+"'";
    std::string sql_login = "DELETE FROM login WHERE cedula = '"+cedula+"'";


    this->conexion_db->statement->executeUpdate(sql_persona);
    this->conexion_db->statement->executeUpdate(sql_login);
}

void Admin_mysql::actualizar_password(std::__cxx11::string cedula, std::__cxx11::string password)
{
    std::string sql_login = "UPDATE login SET pass='"+password+
                                "' where usuario = '"+cedula+"'";
    this->conexion_db->statement->executeUpdate(sql_login);
}
