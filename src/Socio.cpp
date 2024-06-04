#include "Socio.h"

using namespace std;

Socio::Socio(int nSocio, string nombre, string apellido, int dni, Fecha fecha, int telefono, Direccion direccion, string email, string nUsuario, string contrania)
{
    setNumeroSocio(nSocio);
    setNombre(nombre);
    setApellido(apellido);
    setDNI(dni);
    setFechaNac(fecha);
    setTelefono(telefono);
    setDireccion(direccion);
    setEmail(email);
    setNombreUsuario(nUsuario);
    setContrasenia(contrania);
    setEstado(true);
}

///GETS

int Socio::getNumeroSocio()
{
    return _numeroSocio;
}
string Socio::getNombre()
{
    return _nombre;
}
string Socio::getApellido()
{
    return _apellido;
}
int Socio::getDNI()
{
    return _DNI;
}
Fecha Socio::getFechaNac()
{
    return _fechaNacimiento;
}
int Socio::getTelefono()
{
    return _telefono;
}
Direccion Socio::getDireccion()
{
    return _direccion;
}
string Socio::getEmail()
{
    return _email;
}
string Socio::getNombreUsuario()
{
    return _nombreUsuario;
}
string Socio::getContrasenia()
{
    return _contrasenia;
}
bool Socio::getEstado()
{
    return _estado;
}

///SETS

void Socio::setNumeroSocio(int n)
{
    _numeroSocio = n;
}
void Socio::setNombre(string n)
{
    _nombre = n;
}
void Socio::setApellido(string a)
{
    _apellido = a;
}
void Socio::setDNI(int dni)
{
    _DNI = dni;
}
void Socio::setFechaNac(Fecha fecha)
{
    _fechaNacimiento.setDia(fecha.getDia());
    _fechaNacimiento.setMes(fecha.getMes());
    _fechaNacimiento.setAnio(fecha.getAnio());
}
void Socio::setTelefono(int t)
{
    _telefono = t;
}
void Socio::setDireccion(Direccion direccion)
{
    _direccion.setCalle(direccion.getCalle());
    _direccion.setAltura(direccion.getAltura());
    _direccion.setCp(direccion.getCp());
    _direccion.setDepa(direccion.getDepa());
    _direccion.setObservaciones(direccion.getObservaciones());
}
void Socio::setEmail(string e)
{
    _email = e;
}
void Socio::setNombreUsuario(string n)
{
    _nombreUsuario = n;
}
void Socio::setContrasenia(string c)
{
    _contrasenia = c;
}
void Socio::setEstado(bool e)
{
    _estado = e;
}
