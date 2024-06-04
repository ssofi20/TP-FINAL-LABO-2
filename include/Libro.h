#pragma once
#include <string>

class Libro
{
    public:

        Libro();

        ///GETS

        int getIDLibro();
        std::string getNombre();
        std::string getTema();
        std::string getAutor();
        std::string getEditorial();
        int getAnioPublicacion();
        int getCantEjemplares();
        bool getEstado();

        ///SETS

        void setIDLibro(int idLibro);
        void setNombre(std::string nombre);
        void setTema(std::string tema);
        void setAutor(std::string autor);
        void setEditorial(std::string editorial);
        void setAnioPublicacion(int anio);
        void setCantEjemplares(int cantidad);
        void setEstado(bool estado);

    protected:

    private:

        int _IDLibro;
        std::string _nombre;
        std::string _tema;
        std::string _autor;
        std::string _editorial;
        int _anioPublicacion;
        int _cantEjemplares;
        bool _estado;

};

