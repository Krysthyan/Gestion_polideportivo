#include "Headers/cliente_mysql.h"

Cliente_mysql::Cliente_mysql(){

}
void Cliente_mysql::insertar_cliente(Cliente *cliente){

    std::string sql_persona = "insert into persona (cedula,nombres, apellidos,direccion,"
                              "telefono,email) values ('"+cliente->obtener_cedula()+"','"+
                               cliente->obtener_nombres()+"', '"+cliente->obtener_apellidos()+"','"+
                              cliente->obtener_direccion()+"', '"+cliente->obtener_telefono()+"','"+
                              cliente->obtener_email()+"')";
    std::string sql_cliente = "insert into cliente (cedula) values ('"+cliente->obtener_cedula()+"')";


    std::cout<<"sql persona "<<sql_persona<<std::endl;
    std::cout<<"sql cliente "<<sql_cliente<<std::endl;


    this->conexion_db->statement->executeUpdate(sql_cliente);
    this->conexion_db->statement->executeUpdate(sql_persona);

}

Cliente *Cliente_mysql::obtener_cliente(std::__cxx11::string cedula)
{
    std::string sql_obtener_cliente = " select * from persona where cedula = '"+cedula+"'";
    this->conexion_db->resultset = this->conexion_db->statement->executeQuery(sql_obtener_cliente);
    std::cout<<this->conexion_db->resultset->rowsCount()<<std::endl;

    if(this->conexion_db->resultset->rowsCount() == 0){
        throw "La cedula ingresada no está registrada";
    }
    this->conexion_db->resultset->next();
    std::cout<<"cedula encontrada ==>"<<this->conexion_db->resultset->getString(1)<<std::endl;
    Cliente *cliente = new Cliente(this->conexion_db->resultset->getString(1),
                                   this->conexion_db->resultset->getString(2),
                                   this->conexion_db->resultset->getString(3),
                                   this->conexion_db->resultset->getString(4),
                                   this->conexion_db->resultset->getString(5),
                                   this->conexion_db->resultset->getString(6));
    return cliente;
}

void Cliente_mysql::actualizar_cliente(Cliente *cliente)
{
    std::string sql_persona = "UPDATE persona SET nombres='"+cliente->obtener_nombres()+
                                "', apellidos='"+cliente->obtener_apellidos()+
                                "', direccion='"+cliente->obtener_direccion()+
                                "', telefono='"+cliente->obtener_telefono()+
                                "', email='"+cliente->obtener_email()+"' WHERE cedula = '"+
                                cliente->obtener_cedula()+"'";

    std::cout<<"sql persona "<<sql_persona<<std::endl;
    this->conexion_db->statement->executeUpdate(sql_persona);

}

void Cliente_mysql::eliminar_cliente(std::__cxx11::string cedula)
{
    std::string sql_persona = "DELETE FROM persona where cedula = '"+cedula+"'";
    std::string sql_cliente = "DELETE FROM cliente WHERE cedula = '"+cedula+"'";


    this->conexion_db->statement->executeUpdate(sql_persona);
    this->conexion_db->statement->executeUpdate(sql_cliente);
}




