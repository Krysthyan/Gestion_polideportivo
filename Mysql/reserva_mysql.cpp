#include "Headers/reserva_mysql.h"

Reserva_mysql::Reserva_mysql()
{

}

void Reserva_mysql::insertar_reserva(Reserva *reserva)
{
    std::string sql_reserva = "insert into reserva (nombre_cliente,nombre_espacio_reserva, "
                              "fecha_inicio,fecha_final, pago,tipo_pago,estado_pago) "
                              "values ('"+reserva->nombre_cliente+"','"+
                               reserva->nombre_espacio_reserva+"', '"+reserva->fecha_inicio+"','"+
                              reserva->fecha_final+"', '"+reserva->pago+"','"+
                               reserva->tipo_pago+"', '"+reserva->estado_pago+"')";


    this->conexion_db->statement->executeUpdate(sql_reserva);
}

std::vector<Reserva> *Reserva_mysql::obtener_reserva(std::__cxx11::string nombre_cliente)
{

}

void Reserva_mysql::actualizar_reserva(Reserva *reserva,
                                       std::__cxx11::string fecha_inicio)
{

}

void Reserva_mysql::eliminar_reserva(std::__cxx11::string nombre_cliente,
                                     std::__cxx11::string fecha_inicio)
{

}
