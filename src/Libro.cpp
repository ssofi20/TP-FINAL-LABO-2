#include "Libro.h"

using namespace std;

Libro::Libro()
{
    //ctor
}

int Libro::getIDLibro()
{
    return _IDLibro;
}
string Libro::getNombre()
{
    return _nombre;
}
string Libro::getTema()
{
    return _tema;
}
string Libro::getAutor()
{
    return _autor;
}
string Libro::getEditorial()
{
    return _editorial;
}
int Libro::getAnioPublicacion()
{
    return _anioPublicacion;
}
int Libro::getCantEjemplares()
{
    return _cantEjemplares;
}
bool Libro::getEstado()
{
    return _estado;
}


void Libro::setIDLibro(int idLibro)
{
    _IDLibro = idLibro;
}
void Libro::setNombre(string nombre)
{
    _nombre = nombre;
}
void Libro::setTema(string tema)
{
    _tema = tema;
}
void Libro::setAutor(string autor)
{
    _autor = autor;
}
void Libro::setEditorial(string editorial)
{
    _editorial = editorial;
}
void Libro::setAnioPublicacion(int anio)
{
    _anioPublicacion = anio;
}
void Libro::setCantEjemplares(int cantidad)
{
    _cantEjemplares = cantidad;
}
void Libro::setEstado(bool estado)
{
    _estado = estado;
}
