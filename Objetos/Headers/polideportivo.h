#ifndef POLIDEPORTIVO_H
#define POLIDEPORTIVO_H


class Polideportivo
{
public:
    static Polideportivo * instance();
protected:
    Polideportivo();
    Polideportivo(const Polideportivo& orig);
    virtual ~Polideportivo();
protected:
    static Polideportivo *instancia;
public:

};

#endif // POLIDEPORTIVO_H
