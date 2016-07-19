#ifndef RESERVA_SRV_H
#define RESERVA_SRV_H

#include "Objetos/Headers/reserva.h"
#include "Mysql/Headers/reserva_mysql.h"
#include "espacio_comun_srv.h"
#include "obtencion_fechas.h"

#include <vector>

class Reserva_SRV
{
public:
    Reserva_SRV();
    void agregar_reserva(std::string nombre_cliente,
                         std::string nombre_espacio_reserva,
                         std::string fecha_inicio,
                         std::string fecha_final,
                         std::string pago,
                         std::string tipo_pago,
                         std::string estado_pago);

    bool existe_reserva(std::string nombre_cliente);

    std::vector<Reserva> *obtener_reserva(std::string nombre_cliente);

    void actualizar_reserva(std::string cedula, std::string nombres, std::string apellidos,
                           std::string direccion, std::string telefono, std::string email);

    void eliminar_reserva(std::string nombre_cliente,std::string fecha_inicio);

    std::string calcular_pago(std::string costo);
    std::vector<std::string> split(const std::string& s, const std::string& delim, const bool keep_empty = true);
private:
    Reserva_mysql reserva_mysql;
    Espacio_comun_SRV espacio_comun_srv;
    Obtencion_fechas obtencion_fechas;
};

#endif // RESERVA_SRV_H
