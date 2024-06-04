#pragma once
#include <string>

class Direccion
{
    public:

        Direccion();
        Direccion(std::string calle, int altura, int cp, std::string observaciones = "", int depa = 0);

        void cargar();
        void mostrar();

        ///GETS

        std::string getCalle();
        int getAltura();
        int getDepa();
        int getCp();
        std::string getObservaciones();

        ///SETS

        void setCalle(std::string calle);
        void setAltura(int altura);
        void setDepa(int depa);
        void setCp(int cp);
        void setObservaciones(std::string obsv);

    protected:

    private:

        std::string _calle;
        int _altura;
        int _departamento;
        int _cp;
        std::string _observaciones;
};
