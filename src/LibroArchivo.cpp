#include "LibroArchivo.h"


///CONSTRUCTORES
LibroArchivo::LibroArchivo()
{
    _fileName = "Libros.dat";
}

LibroArchivo::LibroArchivo(std::string filename)
{
    _fileName = filename;
}

///BUSCAR LIBRO POR ID
int LibroArchivo::buscarLibro(int idLibro)
{
    Libro libro;
    int index = 0;

    if(open("rb") == false) {return -1;}

    while(fread(&libro, sizeof(Libro), 1, _pFile) == 1){
        if(libro.getIDLibro() == idLibro && libro.getEstado() == true){
            break;
        }
        index ++;
    }

    close();

    if (libro.getIDLibro() == idLibro){
        return index;
    }
    else{
        return -1;
    }
}

///VERIFICAR EXISTENCIA DE LIBRO POR ID
bool LibroArchivo::isExist(int idLibro)
{
    return buscarLibro(idLibro) != -1;
}

///GUARDAR UN REGISTRO DE UN LIBRO EN EL ARCHIVO
bool LibroArchivo::guardarLibro(Libro libro)
{
    bool guardo;

    if(!open("ab")){return false;}

    guardo = fwrite(&libro, sizeof(Libro), 1, _pFile);

    close();

    return guardo;
}

///GUARDAR UN REGISTRO DE UN LIBRO EN EL ARCHIVO EN UNA POSICION
bool LibroArchivo::guardarLibro(Libro libro, int index)
{
    bool guardo;

    if(!open("rb+")){return false;}

    fseek(_pFile, index * sizeof(Libro), SEEK_SET);

    guardo = fwrite(&libro, sizeof(Libro), 1, _pFile);

    close();

    return guardo;
}

///DEVUELVE LA CANTIDAD DE REGISTROS DEL ARCHIVO
int LibroArchivo::getCantidadRegistros()
{

    // BYTES TOTAL / BYTES REGISTRO

    open("rb");

    fseek(_pFile, 0, SEEK_END);

    int tam = ftell(_pFile);

    close();

    return tam / sizeof(Libro);

}

///LEE UN REGISTRO EN LA POSICION DADA Y LO RETORNA
Libro LibroArchivo::leer(int index)
{

    Libro libro;

    open("rb");

    fseek(_pFile, index * sizeof(Libro), SEEK_SET);

    fread(&libro, sizeof(Libro), 1, _pFile);

    close();

    return libro;

}

///BAJA LOGICA DE UN REGISTRO

bool LibroArchivo::eliminar(int idLibro)
{

    Libro libro;

    int index = buscarLibro(idLibro);

    libro = leer(index);

    libro.setEstado(false);

    return guardarLibro(libro, index);

}
