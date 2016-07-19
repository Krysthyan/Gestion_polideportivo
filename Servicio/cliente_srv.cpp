#include "Headers/cliente_srv.h"

Cliente_SRV::Cliente_SRV(){

}
void Cliente_SRV::agregar_cliente(std::__cxx11::string cedula, std::__cxx11::string nombres,
                                  std::__cxx11::string apellidos, std::__cxx11::string direccion,
                                  std::__cxx11::string telefono, std::__cxx11::string email){

    Cliente *cliente = new Cliente(cedula, nombres, apellidos, direccion, telefono, email);
    this->cliente_mysql.insertar_cliente(cliente);
}

Cliente *Cliente_SRV::obtener_cliente(std::__cxx11::string cedula)
{
    Cliente *cliente;
    cliente = this->cliente_mysql.obtener_cliente(cedula);
    return cliente;
}

void Cliente_SRV::actualizar_cliente(std::__cxx11::string cedula, std::__cxx11::string nombres,
                                     std::__cxx11::string apellidos, std::__cxx11::string direccion,
                                     std::__cxx11::string telefono, std::__cxx11::string email)
{
    Cliente *cliente = new Cliente(cedula, nombres, apellidos, direccion, telefono, email);
    this->cliente_mysql.actualizar_cliente(cliente);
}

void Cliente_SRV::eliminar_cliente(std::__cxx11::string cedula)
{
    this->cliente_mysql.eliminar_cliente(cedula);
}

std::vector<Cliente> *Cliente_SRV::obtener_lista_clientes()
{
    return this->cliente_mysql.obtener_lista_clientes();
}
