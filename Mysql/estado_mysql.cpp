#include "Headers/estado_mysql.h"

Estado_mysql::Estado_mysql()
{

}


void Estado_mysql::agregar_estado(std::__cxx11::string estado)
{
    std::string sql_estado = "INSERT INTO estado (idestado) values ('"+estado+"')";
    this->conexion_db->statement->executeUpdate(sql_estado);
}


void Estado_mysql::eliminar_estado(std::__cxx11::string estado)
{
    std::string sql_estado = "DELETE FROM estado WHERE idestado = '"+estado+"'";
    this->conexion_db->statement->executeUpdate(sql_estado);
}

std::vector<std::__cxx11::string> *Estado_mysql::obtener_estados()
{
    std::string sql_estado = "SELECT *FROM estado";
    std::vector<std::string> *estados = new std::vector<std::string>;
    this->conexion_db->resultset = this->conexion_db->statement->executeQuery(sql_estado);

    while(this->conexion_db->resultset->next()){
        estados->push_back(this->conexion_db->resultset->getString(1));
    }
    return estados;

}
