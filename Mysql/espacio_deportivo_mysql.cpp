#include "Headers/espacio_deportivo_mysql.h"

Espacio_deportivo_mysql::Espacio_deportivo_mysql()
{

}

void Espacio_deportivo_mysql::insertar_espacio(Espacio_comun *espacio_comun, std::string nombre_polideportivo)
{
    std::string sql_espacio = "insert into espacio_comun (nombre,nombre_polideportivo, tipo_espacio,estado,"
                              "hora_entrada, hora_salida, precio_por_hora) values ('"+espacio_comun->obtener_nombre()+"','"+
                               nombre_polideportivo+"', '"+espacio_comun->obtener_tipo_espacio()+"','"+
                              espacio_comun->obtener_estado()+"', '"+espacio_comun->obtener_hora_apertura()+"','"+
                              espacio_comun->obtener_hora_cierre()+"', '"+espacio_comun->obtener_precio_por_hora()+"')";

    std::cout<<"sql espacio  "<<sql_espacio<<std::endl;

    this->conexion_db->statement->executeUpdate(sql_espacio);
}

Espacio_comun *Espacio_deportivo_mysql::obtener_espacio(std::__cxx11::string nombre)
{
    std::string sql_obtener_espacio = " select * from espacio_comun where nombre = '"+nombre+"'";

    this->conexion_db->resultset = this->conexion_db->statement->executeQuery(sql_obtener_espacio);


    if(this->conexion_db->resultset->rowsCount() == 0){
        throw "Espacio deportivo no registrado";
    }
    this->conexion_db->resultset->next();
    Espacio_comun *espacio_comun = new Espacio_comun(this->conexion_db->resultset->getString(1),
                                   this->conexion_db->resultset->getString(3),
                                   this->conexion_db->resultset->getString(4),
                                   this->conexion_db->resultset->getString(5),
                                   this->conexion_db->resultset->getString(6),
                                   this->conexion_db->resultset->getString(7));
    return espacio_comun;
}

void Espacio_deportivo_mysql::actualizar_espacio(Espacio_comun *espacio_comun)
{
    std::string sql_espacio = "UPDATE espacio_comun SET tipo_espacio='"+espacio_comun->obtener_tipo_espacio()+
                                "', estado='"+espacio_comun->obtener_estado()+
                                "', hora_entrada='"+espacio_comun->obtener_hora_apertura()+
                                "', hora_salida='"+espacio_comun->obtener_hora_cierre()+
                                "', precio_por_horA='"+espacio_comun->obtener_precio_por_hora()+"' WHERE nombre = '"+
                                espacio_comun->obtener_nombre()+"'";

    this->conexion_db->statement->executeUpdate(sql_espacio);

}

void Espacio_deportivo_mysql::eliminar_espacio(std::__cxx11::string nombre_polideportivo,
                                               std::__cxx11::string nombre_espacio)
{
    std::string sql_espacio = "DELETE FROM espacio_comun where nombre = '"+nombre_espacio+"'";

    this->conexion_db->statement->executeUpdate(sql_espacio);

}
