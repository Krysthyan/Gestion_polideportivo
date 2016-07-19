#ifndef RESERVA_H
#define RESERVA_H

#include<iostream>
class Reserva
{
public:
    Reserva(std::string nombre_cliente,
    std::string nombre_espacio_reserva,
    std::string fecha_inicio,
    std::string fecha_final,
    std::string pago,
    std::string tipo_pago,
    std::string estado_pago);
    std::string nombre_cliente;
    std::string nombre_espacio_reserva;
    std::string fecha_inicio;
    std::string fecha_final;
    std::string pago;
    std::string tipo_pago;
    std::string estado_pago;
};

#endif // RESERVA_H
