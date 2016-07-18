#include "Headers/espacio_mysql.h"

Espacio_mysql::Espacio_mysql()
{

}

void Espacio_mysql::agregar_espacio(std::__cxx11::string espacio)
{
    std::string sql_espacio = "INSERT INTO espacio (idespacio) values ('"+espacio+"')";
    this->conexion_db->statement->executeUpdate(sql_espacio);
}

void Espacio_mysql::eliminar_espacio(std::__cxx11::string espacio)
{
    std::string sql_espacio = "DELETE FROM espacio WHERE idespacio = '"+espacio+"'";
    this->conexion_db->statement->executeUpdate(sql_espacio);
}

std::vector<std::__cxx11::string> *Espacio_mysql::obtener_espacios()
{
    std::string sql_espacio = "SELECT *FROM espacio";
    std::vector<std::string> *espacios = new std::vector<std::string>;
    this->conexion_db->resultset = this->conexion_db->statement->executeQuery(sql_espacio);

    while(this->conexion_db->resultset->next()){
        espacios->push_back(this->conexion_db->resultset->getString(1));
    }
    return espacios;
}
