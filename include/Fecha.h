#pragma once

class Fecha
{
    public:

        Fecha(int dia = 0, int mes = 0, int anio = 0);

        void setDia(int dia);
        void setMes(int mes);
        void setAnio(int anio);

        int getDia();
        int getMes();
        int getAnio();

        void mostrarFecha();
        void cargarFecha();

    protected:

    private:

        int _dia;
        int _mes;
        int _anio;
};

