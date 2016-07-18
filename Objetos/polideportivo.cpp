#include "Headers/polideportivo.h"

Polideportivo *Polideportivo::instancia = 0;

Polideportivo *Polideportivo::instance()
{
    if(instancia == 0)
        instancia = new Polideportivo;
    return instancia;
}

Polideportivo::Polideportivo()
{

}
