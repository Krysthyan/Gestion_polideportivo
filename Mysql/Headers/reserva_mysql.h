#ifndef RESERVA_MYSQL_H
#define RESERVA_MYSQL_H
#include "Objetos/Headers/reserva.h"
#include "Conexion_DB.h"
#include <vector>
class Reserva_mysql
{
public:
    Reserva_mysql();
    void insertar_reserva(Reserva *reserva);
    std::vector<Reserva> *obtener_reserva(std::string nombre_cliente);
    void actualizar_reserva(Reserva *reserva, std::string fecha_inicio);
    void eliminar_reserva(std::string nombre_cliente,std::string fecha_inicio);
private:
    Conexion_DB *conexion_db=Conexion_DB::instance();
};

#endif // RESERVA_MYSQL_H
