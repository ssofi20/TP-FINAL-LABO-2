#include "AppManager.h"

#include <iostream>

using namespace std;

void AppManager::menuInicio()
{
    string nombreUsuario;
    string contrasenia;

    cout << " ----------- GESTION DE BIBLIOTECA ----------- " << endl << endl;
    cout << " -------------- INICIAR SESION -------------- " << endl << endl;
    cout << " INGRESE SU NOMBRE DE USUARIO:  " << endl;
    getline(cin, nombreUsuario);
    cout << " INGRESE SU CONTRASENIA: " << endl << endl;
    //cin.ignore();
    getline(cin, contrasenia);

    cout << nombreUsuario << endl;
    cout << contrasenia << endl;

    system("pause");

    BibliotecarioManager bm;

    bm.menuBibliotecario();


}
