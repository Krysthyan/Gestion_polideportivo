#-------------------------------------------------
#
# Project created by QtCreator 2016-07-16T12:13:13
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ProyectoFinal
TEMPLATE = app


SOURCES += main.cpp\
    Servicio/login_srv.cpp \
    Objetos/login.cpp \
    Mysql/login_mysql.cpp \
    Mysql/Conexion_DB.cpp \
    interfaz/ventana_login.cpp \
    interfaz/ventana_principal.cpp \
    Objetos/persona.cpp \
    Objetos/cliente.cpp \
    Objetos/admin.cpp \
    Servicio/cliente_srv.cpp \
    Mysql/cliente_mysql.cpp \
    interfaz/ventana_cliente.cpp \
    interfaz/ventana_cliente_mod.cpp \
    interfaz/ventana_cliente_del.cpp \
    interfaz/ventana_admin.cpp \
    Servicio/admin_srv.cpp \
    Mysql/admin_mysql.cpp \
    interfaz/ventana_espacio_deportivo.cpp \
    Servicio/estado_srv.cpp \
    Mysql/estado_mysql.cpp \
    Servicio/espacio_srv.cpp \
    Mysql/espacio_mysql.cpp \
    Objetos/espacio_comun.cpp \
    Objetos/polideportivo.cpp \
    interfaz/ventana_agregar_polideportivo.cpp \
    interfaz/ventana_espacio_del.cpp \
    interfaz/ventana_espacio_mod.cpp \
    Servicio/polideportivo_srv.cpp \
    Mysql/polideportivo_mysql.cpp \
    interfaz/ventana_del_polideportivo.cpp \
    interfaz/ventana_mod_polideportivo.cpp \
    Mysql/espacio_deportivo_mysql.cpp \
    Servicio/espacio_comun_srv.cpp \
    interfaz/ventana_reserva.cpp \
    Mysql/reserva_mysql.cpp \
    Objetos/reserva.cpp \
    Servicio/reserva_srv.cpp \
    interfaz/tabla_clientes.cpp \
    interfaz/tabla_admin.cpp

HEADERS  += \
    Servicio/Headers/login_srv.h \
    Objetos/Headers/login.h \
    Mysql/Headers/login_mysql.h \
    Mysql/Headers/Conexion_DB.h \
    interfaz/Headers/ventana_login.h \
    interfaz/Headers/ventana_principal.h \
    Objetos/Headers/persona.h \
    Objetos/Headers/cliente.h \
    Objetos/Headers/admin.h \
    Servicio/Headers/cliente_srv.h \
    Mysql/Headers/cliente_mysql.h \
    interfaz/Headers/ventana_cliente.h \
    interfaz/Headers/ventana_cliente_mod.h \
    interfaz/Headers/ventana_cliente_del.h \
    interfaz/Headers/ventana_admin.h \
    Servicio/Headers/admin_srv.h \
    Mysql/Headers/admin_mysql.h \
    interfaz/Headers/ventana_espacio_deportivo.h \
    Servicio/Headers/estado_srv.h \
    Mysql/Headers/estado_mysql.h \
    Servicio/Headers/espacio_srv.h \
    Mysql/Headers/espacio_mysql.h \
    Objetos/Headers/espacio_comun.h \
    Objetos/Headers/polideportivo.h \
    interfaz/Headers/ventana_agregar_polideportivo.h \
    interfaz/Headers/ventana_espacio_del.h \
    interfaz/Headers/ventana_espacio_mod.h \
    Servicio/Headers/polideportivo_srv.h \
    Mysql/Headers/polideportivo_mysql.h \
    interfaz/Headers/ventana_del_polideportivo.h \
    interfaz/Headers/ventana_mod_polideportivo.h \
    Mysql/Headers/espacio_deportivo_mysql.h \
    Servicio/Headers/espacio_comun_srv.h \
    interfaz/Headers/ventana_reserva.h \
    Mysql/Headers/reserva_mysql.h \
    Objetos/Headers/reserva.h \
    Servicio/Headers/reserva_srv.h \
    interfaz/Headers/tabla_clientes.h \
    interfaz/Headers/tabla_admin.h

FORMS    += \
    interfaz/Headers/Archivos_UI/ventana_login.ui \
    interfaz/Archivos_UI/ventana_principal.ui \
    interfaz/Archivos_UI/ventana_cliente.ui \
    interfaz/Archivos_UI/ventana_cliente_mod.ui \
    interfaz/Archivos_UI/ventana_cliente_del.ui \
    interfaz/Archivos_UI/ventana_admin.ui \
    interfaz/Archivos_UI/ventana_espacio_deportivo.ui \
    interfaz/Archivos_UI/ventana_agregar_polideportivo.ui \
    interfaz/Archivo_UI/ventana_espacio_del.ui \
    interfaz/Archivos_UI/ventana_espacio_mod.ui \
    interfaz/Archivos_UI/ventana_del_polideportivo.ui \
    interfaz/Archivos_UI/ventana_mod_polideportivo.ui \
    interfaz/Archivos_UI/ventana_reserva.ui \
    interfaz/Archivos_UI/tabla_clientes.ui \
    interfaz/Archivos_UI/tabla_admin.ui
LIBS += -lmysqlcppconn

RESOURCES += \
    Imagenes/img.qrc

DISTFILES += \
    LICENSE \
    README.md \
    SQL/database.sql \
    Imagenes/94mi8cQ - Imgur.png \
    Imagenes/a56UjCk - Imgur.png \
    Imagenes/ckBRWKh - Imgur.png \
    Imagenes/94mi8cQ - Imgur.png \
    Imagenes/a56UjCk - Imgur.png \
    Imagenes/ckBRWKh - Imgur.png
