#pragma once
#include <string>
#include "Archivo.h"
#include "Libro.h"


class LibroArchivo : public Archivo
{
    public:

        LibroArchivo();
        LibroArchivo(std::string fileName);


        int buscarLibro(int idLibro);
        bool isExist(int idLibro);
        bool guardarLibro(Libro libro);
        bool guardarLibro(Libro libro, int index);
        int getCantidadRegistros();
        Libro leer(int index);
        bool eliminar(int index);


    protected:

    private:
};

