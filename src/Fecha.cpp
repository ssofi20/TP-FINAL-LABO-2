#include "Fecha.h"
#include <iostream>

using namespace std;

Fecha::Fecha(int dia, int mes, int anio)
{
    setDia(dia);
    setMes(mes);
    setAnio(anio);
}

void Fecha::setDia(int dia)
{
    _dia = dia;
}

void Fecha::setMes(int mes)
{
    _mes = mes;
}

void Fecha::setAnio(int anio)
{
    _anio = anio;
}

int Fecha::getDia()
{
    return _dia;
}

int Fecha::getMes()
{
    return _mes;
}

int Fecha::getAnio()
{
    return _anio;
}

void Fecha::mostrarFecha()
{
    cout << _dia << "/" << _mes << "/" << _anio << endl;
}
void Fecha::cargarFecha()
{
    while (true)
    {
        cout << "DIA: "; cin >> _dia;
        if(_dia < 1 || _dia > 31)
        {
            cout << "INGRESE UN DIA VALIDO..." << endl;
            cout << endl;
        }
        else {
            break;
        }
    }

    while(true)
    {
        cout << "MES: "; cin >> _mes;
        if(_mes < 1 || _mes > 12)
        {
            cout << "INGRESE UN MES VALIDO..." << endl;
            cout << endl;
        }
        else{
            break;
        }
    }

    while(true)
    {
        cout << "ANIO: "; cin >> _mes;
        if(_anio < 1800 || _anio > 2024)
        {
            cout << "INGRESE UN ANIO VALIDO..." << endl;
        }
        else {
            break;
        }
    }
}

