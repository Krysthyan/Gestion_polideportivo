#ifndef ESTADO_MYSQL_H
#define ESTADO_MYSQL_H
#include "Conexion_DB.h"
#include <vector>

class Estado_mysql
{
public:
    Estado_mysql();
    void agregar_estado(std::string estado);
    void eliminar_estado(std::string estado);
    std::vector<std::string> * obtener_estados();
private:
    Conexion_DB *conexion_db=Conexion_DB::instance();
};

#endif // ESTADO_MYSQL_H
