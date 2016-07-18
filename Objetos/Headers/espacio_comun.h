#ifndef ESPACIO_COMUN_H
#define ESPACIO_COMUN_H
#include<iostream>

class Espacio_comun
{
public:
    Espacio_comun(std::string nombre,
                  std::string tipo_espacio,
                  std::string estado,
                  std::string hora_apertura,
                  std::string hora_cierre,
                  double precio_por_hora);

        void set_nombre(std::string nombre);
        void set_tipo_espacio(std::string tipo_espcio);
        void set_estado(std::string estado);
        void set_hora_apertura(std::string hora_apertura);
        void set_hora_cierre(std::string hora_cierre);
        void set_precio_por_hora(double precio_por_hora);

        std::string obtener_nombre();
        std::string obtener_tipo_espacio();
        std::string obtener_estado();
        std::string obtener_hora_apertura();
        std::string obtener_hora_cierre();
        double obtener_precio_por_hora();

    private:
        std::string nombre;
        std::string tipo_espcio;
        std::string estado;
        std::string hora_apertura;
        std::string hora_cierre;
        double precio_por_hora;
};

#endif // ESPACIO_COMUN_H
