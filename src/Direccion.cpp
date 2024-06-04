#include "Direccion.h"
#include <iostream>

using namespace std;

Direccion::Direccion()
{

}

Direccion::Direccion(string calle, int altura, int cp, string observaciones, int depa)
{
    setCalle(calle);
    setAltura(altura);
    setCp(cp);
    setDepa(depa);
    setObservaciones(observaciones);
}

void Direccion::cargar()
{
    cout << "CALLE: "; getline(cin,_calle);

    while(true)
    {
        cout << "ALTURA: "; cin >> _altura;
        if(_altura < 1)
        {
            cout << "INGRESE UN NUMERO VALIDO..." << endl;
            cout << endl;
        }
        else {
            break;
        }
    }

    cout << "CODIGO POSTAL: "; cin >> _cp;
    cout << "DEPARTAMENTO (SI NO CORRESPONDE COLORCAR 0): "; cin >> _departamento;
    cin.ignore();
    cout << "OBSERVACIONES: "; getline(cin,_observaciones);
}

void Direccion::mostrar()
{
    cout << _calle << "," << _altura << ",";
    if(_departamento!=0)
    {
        cout << _departamento;
    }
    cout << "," << _cp << ". " << _observaciones;
}

string Direccion::getCalle()
{
    return _calle;
}
int Direccion::getAltura()
{
    return _altura;
}
int Direccion::getDepa()
{
    return _departamento;
}
int Direccion::getCp()
{
    return _cp;
}
string Direccion::getObservaciones()
{
    return _observaciones;
}

void Direccion::setCalle(string calle)
{
    _calle = calle;
}
void Direccion::setAltura(int altura)
{
    _altura = altura;
}
void Direccion::setDepa(int depa)
{
    _departamento = depa;
}
void Direccion::setCp(int cp)
{
    _cp = cp;
}
void Direccion::setObservaciones(string obsv)
{
    _observaciones = obsv;
}
