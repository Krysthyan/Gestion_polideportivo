#include "Headers/polideportivo_mysql.h"

Polideportivo_mysql::Polideportivo_mysql()
{

}

void Polideportivo_mysql::insertar_polideportivo(Polideportivo *polideportivo)
{
    std::string sql_polideportivo = "insert into polideportivo (nombre,descripcion, direccion) "
                                    "values ('"+polideportivo->nombre+"','"+
                               polideportivo->descripcion+"', '"+polideportivo->direccion+"')";


    this->conexion_db->statement->executeUpdate(sql_polideportivo);
}

Polideportivo *Polideportivo_mysql::obtener_polideportivo(std::__cxx11::string nombre)
{
    std::string sql_obtener_pol = " select * from polideportivo where nombre = '"+nombre+"'";
    this->conexion_db->resultset = this->conexion_db->statement->executeQuery(sql_obtener_pol);

    if(this->conexion_db->resultset->rowsCount() == 0){
        throw "El polideportivo no se encuentra registrado";
    }
    this->conexion_db->resultset->next();
    Polideportivo *polideportivo = new Polideportivo(this->conexion_db->resultset->getString(1),
                                   this->conexion_db->resultset->getString(2),
                                   this->conexion_db->resultset->getString(3));
    return polideportivo;
}

void Polideportivo_mysql::actualizar_polideportivo(Polideportivo *polideportivo)
{
    std::string sql_polideportivo = "UPDATE polideportivo SET descripcion='"+polideportivo->descripcion+
                                "', direccion='"+polideportivo->direccion+"' WHERE nombre = '"+
                                polideportivo->nombre+"'";

    this->conexion_db->statement->executeUpdate(sql_polideportivo);
}

void Polideportivo_mysql::eliminar_polideportivo(std::__cxx11::string nombre)
{
    std::string sql_polideportivo = "DELETE FROM polideportivo where nombre = '"+nombre+"'";
    this->conexion_db->statement->executeUpdate(sql_polideportivo);
}

std::vector<Polideportivo> *Polideportivo_mysql::obtener_lista_polideportivo()
{
    this->conexion_db->resultset = this->conexion_db->statement->executeQuery("SELECT  *from polideportivo");
    std::vector<Polideportivo> *polideportivos = new std::vector<Polideportivo>;
    while (this->conexion_db->resultset->next()){
        Polideportivo *polideportivo = new Polideportivo(this->conexion_db->resultset->getString(1),
                                                          this->conexion_db->resultset->getString(2),
                                                          this->conexion_db->resultset->getString(3));
        polideportivos->push_back(*polideportivo);
    }
    return polideportivos;
}
