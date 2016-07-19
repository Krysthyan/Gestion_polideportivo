#include "Headers/obtencion_fechas.h"

struct ingreso
{
    int dia;
    int mes;
    int anio;
};

Obtencion_fechas::Obtencion_fechas()
{

}
bool Obtencion_fechas::anioBisiesto(int anio){
    if(anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0)){
        return true;
     }else{
        return false;
     }
}

int Obtencion_fechas::diasMes(int mesIngreso){
    if(mesIngreso==0 || mesIngreso==2 || mesIngreso==4 || mesIngreso==6 || mesIngreso==7 || mesIngreso==9 || mesIngreso==11){
        return 31;
    }else if(mesIngreso==1){
        return 28;
    } else{
        return 30;
    }
}
bool Obtencion_fechas::fechaValida(int dia, int mesIngresado, int anio){
    int mesEntero=diasMes(mesIngresado-1);
    cout<<dia<<" "<<mesEntero<<" \n"<<endl;
    if(dia<=mesEntero && dia>=0){
        return true;
    }
    return false;

}

int Obtencion_fechas::diasFaltantes(int mesIngresado, int diaActual){
    int mesEntero=diasMes(mesIngresado-1);
    return mesEntero-diaActual;
}
int Obtencion_fechas::diasFaltantesFinAnio(int mesIngreado, int diaActual){

    int sumaDias=diasFaltantes(mesIngreado,diaActual);

    for (int index = mesIngreado+1; index <13 ; index++) {
        sumaDias+=diasMes(index);
    }
    return sumaDias;

}
int Obtencion_fechas::diasTranscurridos(int mesIngresado, int diaActual){

    int sumaDias=diaActual;

    for (int index = mesIngresado-2; index >=0 ; index--) {
        sumaDias+=diasMes(index);
    }
    return sumaDias;
}
/*ingreso Obtencion_fechas::difrenciaFechas(ingreso fecha1,ingreso fecha2) {
    ingreso fechaSumada;
    fechaSumada.anio = fecha2.anio - fecha1.anio;
    fechaSumada.mes = fecha2.mes - fecha1.mes;
    fechaSumada.dia = fecha2.dia - fecha1.dia;

    if(fechaSumada.dia < 0) {
        fechaSumada.dia += diasMes(fecha2.mes);
        fechaSumada.mes--;
    }

    if(fechaSumada.mes < 0) {
        fechaSumada.mes += 12;
        fechaSumada.anio--;
    }

    return fechaSumada;
}*/
