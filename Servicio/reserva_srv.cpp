#include "Headers/reserva_srv.h"

Reserva_SRV::Reserva_SRV()
{

}

void Reserva_SRV::agregar_reserva(std::__cxx11::string nombre_cliente,
                                  std::__cxx11::string nombre_espacio_reserva,
                                  std::__cxx11::string fecha_inicio,
                                  std::__cxx11::string fecha_final,
                                  std::__cxx11::string pago,
                                  std::__cxx11::string tipo_pago,
                                  std::__cxx11::string estado_pago)
{


    /*Actualiza el estado del espacio deportivo*/

    this->espacio_comun_srv.actualizar_estado("Reservado",nombre_espacio_reserva);
    pago = calcular_pago(pago);

    Reserva *reserva = new Reserva(nombre_cliente, nombre_espacio_reserva,
                                   fecha_inicio,fecha_final,pago,tipo_pago,estado_pago);

    this->reserva_mysql.insertar_reserva(reserva);
}

inline std::string Reserva_SRV::calcular_pago(std::__cxx11::string costo)
{
    return "45.6";
}
