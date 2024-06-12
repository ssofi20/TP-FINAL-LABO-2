#pragma once
#include "LibroArchivo.h"

class LibroManager
{
    public:

        Libro cargarLibro(Libro libro);
        void mostrarLibro(Libro libro);
        void menuGestionLibros();

    protected:

    private:

        LibroArchivo libroArchivo;

        void registrarLibro();
        void modificarLibro();
        void eliminarLibro();
        void listarLibros();
        void buscarLibro();
};

