#include "Headers/Conexion_DB.h"

Conexion_DB * Conexion_DB::instancia = 0;

Conexion_DB *Conexion_DB::instance(){
    if(instancia == 0)
        instancia = new Conexion_DB;
    return instancia;
}

Conexion_DB::Conexion_DB() {
    driver = get_driver_instance();
    connection = driver->connect("localhost", "optativa", "optativa");
    connection->setSchema("polideportivo");
    statement = connection->createStatement(); 
}

Conexion_DB::~Conexion_DB() {
}

