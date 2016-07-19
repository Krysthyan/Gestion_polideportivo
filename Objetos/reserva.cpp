#include "Headers/reserva.h"

Reserva::Reserva(std::__cxx11::string nombre_cliente,
                 std::__cxx11::string nombre_espacio_reserva,
                 std::__cxx11::string fecha_inicio,
                 std::__cxx11::string fecha_final,
                 std::__cxx11::string pago,
                 std::__cxx11::string tipo_pago,
                 std::__cxx11::string estado_pago)
{
    this->nombre_cliente = nombre_cliente;
    this->nombre_espacio_reserva = nombre_espacio_reserva;
    this->fecha_inicio = fecha_inicio;
    this->fecha_final = fecha_final;
    this->pago = pago;
    this->tipo_pago = tipo_pago;
    this->estado_pago = estado_pago;
}
