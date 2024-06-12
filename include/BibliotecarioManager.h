#pragma once
#include "BibliotecarioArchivo.h"
#include "LibroManager.h"

/*
Funciones principales del menu:
GESTION LIBROS
    REGISTRAR LIBRO
    MODIFICAR LIBRO
    ELIMINAR LIBRO
    LISTADO LIBROS
GESTION DE PRESTAMOS
    REGISTRAR PRESTAMO
    DEVOLUCION DE LIBRO
    MODIFICAR UN PRESTAMO
    LISTAR PRESTAMOS ACTIVOS
    LISTAR PRESTAMOS INACTIVOS
    MODIFICAR POLITICAS DE PRESTAMOS Y ARANCELES
SOCIOS
    REGISTRAR SOCIO
    ELIMINAR SOCIO
    MODIFICAR SOCIO
    LISTADO DE SOCIOS
    BUSCAR SOCIO
TABLAS AUXILIARES (REPORTES Y ANALISIS DE DATOS)
*/


class BibliotecarioManager
{
    public:

        ///MENUES
        void menuBibliotecario();
            void menuPrestamos();
                void registrarPrestamo();
                void devolucion();
                void modificarPrestamo();
                void listarPrestamosActivos();
                void listarPrestamosInativos();
                void modificarPoliticas();
            void menuSocios();
                void registrarSocio();
                void eliminarSocio();
                void modificarSocio();
                void listarSocios();
                void buscarSocio();

    protected:

    private:

        BibliotecarioArchivo bibliotecarioArchivo;
        LibroManager LM;
};


