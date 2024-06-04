#include "AppManager.h"

#include <iostream>

using namespace std;

void AppManager::menuInicio()
{
    int opc;

    cout << " ----------- GESTION DE BIBLIOTECA ----------- " << endl << endl;
    cout << " -------------- INICIAR SESION -------------- " << endl << endl;
    cout << " 1. ADMINISTRADOR BIBLIOTECA " << endl;
    cout << " 2. SOCIO" << endl << endl;
    cout << " 3. REGISTRARSE " << endl << endl;
    cout << " SELECCIONE UNA OPCION: ";
    cin >> opc;
}
