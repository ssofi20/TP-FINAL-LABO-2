#include "BibliotecarioManager.h"
#include <iostream>

using namespace std;

void BibliotecarioManager::menuBibliotecario()
{
    int opc;

    while(true){

        system("cls");
        cout << " ----------- ADMINISTRACION ----------- " << endl << endl;
        cout << " -------------------------------------- " << endl << endl;
        cout << "           1. GESTION LIBROS" << endl << endl;
        cout << "         2. GESTION PRESTAMOS" << endl << endl;
        cout << "           3. GESTION SOCIOS" << endl << endl;
        cout << "              0. SALIR" << endl << endl;
        cout << " -------------------------------------- " << endl << endl;
        cout << " SELECCIONE UNA OPCION: ";
        cin >> opc;

        switch(opc)
        {
            case 1: LM.menuGestionLibros();
                break;
            case 2: menuPrestamos();
                break;
            case 3: menuSocios();
                break;
            case 0: return;
        }
    }
}


void BibliotecarioManager::menuPrestamos()
{
    int opc;

    while(true){

        system("cls");
        cout << " ----------- ADMINISTRACION ----------- " << endl << endl;
        cout << " ---------- GESTION PRESTAMOS --------- " << endl << endl;
        cout << "      1. REGISTRAR NUEVO PRESTAMO" << endl << endl;
        cout << "       2. DEVOLUCION DE LIBRO" << endl << endl;
        cout << "       3. MODIFICAR UN PRESTAMO" << endl << endl;
        cout << "     4. LISTAR PRESTAMOS ACTIVOS" << endl << endl;
        cout << "      5. LISTAR PRESTAMOS INACTIVOS" << endl << endl;
        cout << "    6. MODIFICAR POLITICAS Y ARANCELES" << endl << endl;
        cout << " -------------------------------------- " << endl << endl;
        cout << " SELECCIONE UNA OPCION: ";
        cin >> opc;

        switch(opc)
        {
            case 1: //registrarPrestamo();
                break;
            case 2: //devolucion();
                break;
            case 3: //modificarPrestamo();
                break;
            case 4: //listarPrestamosActivos();
                break;
            case 5: //listarPrestamosInativos();
                break;
            case 6: //modificarPoliticas()
                break;
            case 0: return;
                break;
            default: cout << " OPCION INCORRECTA, INTENTE NUEVAMENTE..." << endl;
        }
    }
}

void BibliotecarioManager::menuSocios()
{
     int opc;

    while(true){

        system("cls");
        cout << " ----------- ADMINISTRACION ----------- " << endl << endl;
        cout << " ---------- GESTION SOCIOS --------- " << endl << endl;
        cout << "      1. REGISTRAR NUEVO SOCIO" << endl << endl;
        cout << "       2. ELIMINAR SOCIO" << endl << endl;
        cout << "       3. MODIFICAR DATOS SOCIO" << endl << endl;
        cout << "     4. LISTADO DE SOCIOS" << endl << endl;
        cout << "           5. BUSCAR SOCIO" << endl << endl;
        cout << "              0. SALIR" << endl << endl;
        cout << " -------------------------------------- " << endl << endl;
        cout << " SELECCIONE UNA OPCION: ";
        cin >> opc;

        switch(opc)
        {
            case 1: //registrarSocio();
                break;
            case 2: //eliminarSocio();
                break;
            case 3: //modificarSocio();
                break;
            case 4: //listarSocios();
                break;
            case 5: //buscarSocio();
                break;
            case 0: return;
                break;
            default: cout << " OPCION INCORRECTA, INTENTE NUEVAMENTE..." << endl;
        }
    }
}
