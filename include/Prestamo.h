#pragma once
#include "Fecha.h"

class Prestamo
{
    public:

        Prestamo(int IDPrestamo, int numeroSocio, int IDLibro, Fecha fechaRetiro, Fecha fechaDev);

        ///GETS

        int getIDPrestamo();
        int getNumeroSocio();
        int getIDLibro();
        Fecha getFechaRetiro();
        Fecha getFechaDevolucion();
        bool getEstado();

        ///SETS

        void setIDPrestamo(int IDPrestamo);
        void setNumeroSocio(int numeroSocio);
        void setIDLibro(int IDLibro);
        void setFechaRetiro(Fecha fecha);
        void setFechaDevolucion(Fecha fecha);
        void setEstado(bool estado);

    protected:

    private:

        int _IDPrestamo;
        int _numeroSocio;
        int _IDLibro;
        Fecha _fechaRetiro;
        Fecha _fechaDevolucion;
        bool _estado;

};
