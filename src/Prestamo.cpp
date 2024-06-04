#include "Prestamo.h"


Prestamo::Prestamo(int IDPrestamo, int numeroSocio, int IDLibro, Fecha fechaRetiro, Fecha fechaDev)
{
    setIDPrestamo(IDPrestamo);
    setNumeroSocio(numeroSocio);
    setIDLibro(IDLibro);
    setFechaRetiro(fechaRetiro);
    setFechaDevolucion(fechaDev);
    setEstado(true);
}

int Prestamo::getIDPrestamo()
{
    return _IDPrestamo;
}
int Prestamo::getNumeroSocio()
{
    return _numeroSocio;
}
int Prestamo::getIDLibro()
{
    return _IDLibro;
}
Fecha Prestamo::getFechaRetiro()
{
    return _fechaRetiro;
}
Fecha Prestamo::getFechaDevolucion()
{
    return _fechaDevolucion;
}
bool Prestamo::getEstado()
{
    return _estado;
}



void Prestamo::setIDPrestamo(int IDPrestamo)
{
    _IDPrestamo = IDPrestamo;
}
void Prestamo::setNumeroSocio(int numeroSocio)
{
    _numeroSocio = numeroSocio;
}
void Prestamo::setIDLibro(int IDLibro)
{
    _IDLibro = IDLibro;
}
void Prestamo::setFechaRetiro(Fecha fecha)
{
    _fechaRetiro.setDia(fecha.getDia());
    _fechaRetiro.setMes(fecha.getMes());
    _fechaRetiro.setAnio(fecha.getAnio());
}
void Prestamo::setFechaDevolucion(Fecha fecha)
{
    _fechaDevolucion.setDia(fecha.getDia());
    _fechaDevolucion.setMes(fecha.getMes());
    _fechaDevolucion.setAnio(fecha.getAnio());
}
void Prestamo::setEstado(bool estado)
{
    _estado = estado;
}
