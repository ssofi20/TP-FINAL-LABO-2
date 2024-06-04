#pragma once
#include <string>
#include "Fecha.h"
#include "Direccion.h"

class Socio
{
    public:

        Socio (int nSocio, std::string nombre, std::string apellido, int dni, Fecha fecha, int telefono, Direccion direccion, std::string email, std::string nUsuario, std::string contrania);

        ///GETS

        int getNumeroSocio();
        std::string getNombre();
        std::string getApellido();
        int getDNI();
        Fecha getFechaNac();
        int getTelefono();
        Direccion getDireccion();
        std::string getEmail();
        std::string getNombreUsuario();
        std::string getContrasenia();
        bool getEstado();

        ///SETS

        void setNumeroSocio(int n);
        void setNombre(std::string n);
        void setApellido(std::string a);
        void setDNI(int dni);
        void setFechaNac(Fecha fecha);
        void setTelefono(int t);
        void setDireccion(Direccion direccion);
        void setEmail(std::string e);
        void setNombreUsuario(std::string n);
        void setContrasenia(std::string c);
        void setEstado(bool e);


    protected:

    private:
        int _numeroSocio;
        std::string _nombre;
        std::string _apellido;
        int _DNI;
        Fecha _fechaNacimiento;
        int _telefono;
        Direccion _direccion;
        std::string _email;
        std::string _nombreUsuario;
        std::string _contrasenia;
        bool _estado;
};

