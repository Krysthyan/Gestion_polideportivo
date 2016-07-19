#ifndef OBTENCION_FECHAS_H
#define OBTENCION_FECHAS_H
#include<iostream>
using namespace std;


class Obtencion_fechas
{

public:
    struct ingreso
    {
        int dia;
        int mes;
        int anio;
    };
    Obtencion_fechas();
    enum mes {enero,febrero,marzo,abril,mayo,junio,julio,agosto,septiembre,octubre,noviembre,diciembre};

    bool anioBisiesto(int anio);
    int diasMes(int mes);
    bool fechaValida(int dia, int mesIngresado, int anio);
    int diasFaltantes(int mesIngresado, int diaActual);
    int diasFaltantesFinAnio(int mesIngreado, int diaActual);
    int diasTranscurridos(int mesIngresado, int diaAcutal);
    void menu();
    ingreso ingresoUsuario();
    ingreso difrenciaFechas(ingreso fecha1,ingreso fecha2);
    ingreso fecha1;
    ingreso fecha2;

};

#endif // OBTENCION_FECHAS_H
