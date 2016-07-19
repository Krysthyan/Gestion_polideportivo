#include "Headers/admin_srv.h"

Admin_SRV::Admin_SRV()
{

}

void Admin_SRV::agregar_admin(std::__cxx11::string cedula, std::__cxx11::string password,
                              std::__cxx11::string nombres, std::__cxx11::string apellidos,
                              std::__cxx11::string direccion, std::__cxx11::string telefono,
                              std::__cxx11::string email)
{
    Admin *admin = new Admin(cedula, password, nombres, apellidos, direccion, telefono, email);
    this->admin_mysql.insertar_admin(admin);
}

Admin *Admin_SRV::obtener_admin(std::__cxx11::string cedula)
{
    Admin *admin;
    admin = this->admin_mysql.obtener_admin(cedula);
    return admin;
}

void Admin_SRV::actualizar_admin(std::__cxx11::string cedula, std::__cxx11::string password,
                                   std::__cxx11::string nombres,
                                     std::__cxx11::string apellidos, std::__cxx11::string direccion,
                                     std::__cxx11::string telefono, std::__cxx11::string email)
{
    Admin *admin = new Admin(cedula, password, nombres, apellidos, direccion, telefono, email);
    this->admin_mysql.actualizar_admin(admin);
}

void Admin_SRV::eliminar_admin(std::__cxx11::string cedula)
{
    this->admin_mysql.eliminar_admin(cedula);
}

std::vector<Admin> *Admin_SRV::obtener_lista_admin()
{
    return this->admin_mysql.obtener_lista_admin();
}
