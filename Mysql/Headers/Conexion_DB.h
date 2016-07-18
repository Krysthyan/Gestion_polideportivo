#ifndef CONEXION_DB_H
#define CONEXION_DB_H

#include "mysql_connection.h"
#include <cppconn/driver.h>
#include <cppconn/resultset.h>
 
#include <cppconn/statement.h>
#include <cppconn/exception.h>

#include <iostream>

class Conexion_DB {
public:
    static Conexion_DB * instance();
protected:
    Conexion_DB();
    Conexion_DB(const Conexion_DB& orig);
    virtual ~Conexion_DB();
protected:
    static Conexion_DB *instancia;
    sql::Driver *driver;
    sql::Connection *connection;
public:
    sql::Statement *statement;
    sql::ResultSet *resultset;

};

#endif /* CONEXION_DB_H */

