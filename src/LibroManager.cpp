#include "LibroManager.h"
#include <iostream>

using namespace std;

void LibroManager::menuGestionLibros()
{

    int opc;

    while(true){

        system("cls");
        cout << " ----------- ADMINISTRACION ----------- " << endl << endl;
        cout << " ----------- GESTION LIBROS ----------- " << endl << endl;
        cout << "       1. REGISTRAR NUEVO LIBRO" << endl << endl;
        cout << "       2. MODIFICAR DATOS LIBRO" << endl << endl;
        cout << "          3. ELIMINAR LIBRO" << endl << endl;
        cout << "     4. LISTAR TODOS LOS LIBROS" << endl << endl;
        cout << "          5. CONSULTAR LIBRO" << endl << endl;
        cout << " -------------------------------------- " << endl << endl;
        cout << " SELECCIONE UNA OPCION: ";
        cin >> opc;

        switch(opc)
        {
            case 1: registrarLibro();
                break;
            case 2: modificarLibro();
                break;
            case 3: eliminarLibro();
                break;
            case 4: listarLibros();
                break;
            case 5: buscarLibro();
                break;
            case 0: return;
                break;
            default:
                cout << " OPCION INCORRECTA, INTENTE NUEVAMENTE..." << endl;
                system("pause");
        }
    }
}

///CREAR UN REGISTRO DE UN LIBRO

Libro LibroManager::cargarLibro (Libro libro)
{

    int idLibro, anioPublicado, cantEjemplares;
    string nombre, categoria, autor, editorial;

    while (true)
    {
        cout << "ID LIBRO: "; cin >> idLibro;
        if(libroArchivo.isExist(idLibro))
        {
            cout << "ID EXISTENTE, PRUEBE NUEMAVENTE..." << endl;
        }
        else {
            break;
        }
    }
    libro.setIDLibro(idLibro);

    cin.ignore();
    cout << "NOMBRE LIBRO: ";
    getline(cin, nombre);
    libro.setNombre(nombre);

    cin.ignore();
    cout << "CATEGORIA: ";
    getline(cin, categoria);
    libro.setCategoria(categoria);

    cin.ignore();
    cout << "AUTOR/A: ";
    getline(cin, autor);
    libro.setAutor(autor);

    cin.ignore();
    cout << "EDITORIAL: ";
    getline(cin, editorial);
    libro.setEditorial(editorial);

    while(true)
    {
        cout << "ANIO DE PUBLICACION: ";
        cin >> anioPublicado;

        if(anioPublicado > 2024)
        {
            cout << "INGRESE UN ANIO VALIDO..." << endl << endl;
        }
        else {
            break;
        }
    }
    libro.setAnioPublicacion(anioPublicado);

    while (true)
    {
        cout << "CANTIDAD DE EJEMPLARES: ";
        cin >> cantEjemplares;
        if(cantEjemplares <= 0)
        {
            cout << "INGRESE UNA CANTIDAD DE EJEMPLARES VALIDA..." << endl << endl;
        }
    }
    libro.setCantEjemplares(cantEjemplares);

    libro.setEstado(true);

    return libro;
}

///MOSTRAR REGISTRO

void LibroManager::mostrarLibro(Libro libro)
{
    cout << "ID LIBRO: " << libro.getIDLibro();
    cout << "NOMBRE: " << libro.getNombre();
    cout << "CATEGORIA: " << libro.getCategoria();
    cout << "AUTOR/A: " << libro.getAutor();
    cout << "EDITORIAL: " << libro.getEditorial();
    cout << "ANIO DE PUBLICACION: " << libro.getAnioPublicacion();
    cout << "CANTIDAD DE EJEMPLARES: " << libro.getCantEjemplares();
}

///GUARDAR UN REGISTRO EN EL ARCHIVO
void LibroManager::registrarLibro()
{

    Libro libro;

    libro = cargarLibro(libro);

    if(libroArchivo.guardarLibro(libro))
    {
        cout << "EL LIBRO SE REGISTRO CORRECTAMENTE :)" << endl;
        system("pause");
    }
    else {
        cout << "EL LIBRO NO SE PUDO REGISTRAR :(" << endl;
        system("pause");
    }

}

void LibroManager::modificarLibro()
{

    while(true)
    {
        int idLibro, seleccion;
        Libro libro;
        system("cls");
        cout << "INGRESE EL ID DEL LIBRO QUE DESEA MODIFICAR: ";
        cin >> idLibro;
        if(!libroArchivo.isExist(idLibro))
        {
            int seleccion;
            cout << "EL ID INGRESADO NO EXISTE" << endl;
            cout << " 1- VOLVER AL MENU   2- INTENTAR DE NUEVO ";
            cin >> seleccion;
            if(seleccion == 1)
            {
                break;
            }
        }

        cout << " SELECCIONE EL CAMPO QUE DESEA MODIFICAR: " << endl;
        cout << " ---------------------------------------- " << endl;
        cout << " 1. NOMBRE DEL LIBRO" << endl << endl;
        cout << " 2. CATEGORIA DEL LIBRO" << endl << endl;
        cout << " 3. AUTOR/A DEL LIBRO" << endl << endl;
        cout << " 4. EDITORIAL DEL LIBRO" << endl << endl;
        cout << " 5. ANIO DE PUBLICACION" << endl << endl;
        cout << " 6. CANTIDAD DE EJEMPLARES" << endl;
        cout << " ---------------------------------------- " << endl;
        cout << " SU SELECCION: ";
        cin >> seleccion;

        switch(seleccion)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 0:
            break;
        }
    }
}

void LibroManager::eliminarLibro()
{

    int idLibro, seleccion;

    while(true)
    {
        system("cls");
        cout << "INGRESE EL ID DEL LIBRO QUE DESEA ELIMINAR: ";
        cin >> idLibro;
        if(!libroArchivo.isExist(idLibro))
        {
            cout << "EL ID INGRESADO NO EXISTE" << endl;
            cout << " 1- VOLVER AL MENU   2- INTENTAR DE NUEVO ";
            cin >> seleccion;
            if(seleccion == 1)
            {
                return;
            }
        }
    }

    int index = libroArchivo.buscarLibro(idLibro);

    Libro libro = libroArchivo.leer(index);

    mostrarLibro(libro);

    cout << " ESTA SEGURO QUE DESEA ELIMINAR ESTE LIBRO? " << endl;
    cout << " 1- SI              0- NO";

    cin >> seleccion;

    if(seleccion == 1)
    {
        if(libroArchivo.eliminar(idLibro))
        {
            cout << " EL LIBRO FUE ELIMINADO CON EXITO! " << endl;
            system("pause");
        }
        else {
            cout << " EL LIBRO NO PUDO ELIMINARSE " << endl;
            system("pause");
        }
    }
    else {
        cout << " EL ARCHIVO NO FUE ELIMINADO" << endl;
    }
}

void LibroManager::listarLibros()
{

    int cantidad = libroArchivo.getCantidadRegistros();
    cout << " ------------ LSTADO DE LIBROS ------------ " << endl;
    cout << " ------------------------------------------ " << endl << endl;
    for(int i = 0; i < cantidad; i++){
        Libro libro = libroArchivo.leer(i);
        cout << " ------------------------ " << endl;
        mostrarLibro(libro);
        cout << " ------------------------ " << endl;
    }
    system("pause");

}

void LibroManager::buscarLibro()
{

    int idLibro, seleccion;
    Libro libro;

    while(true)
    {
        system("cls");
        cout << "INGRESE EL ID DEL LIBRO QUE DESEA CONSULTAR: ";
        cin >> idLibro;
        if(!libroArchivo.isExist(idLibro))
        {
            cout << "EL ID INGRESADO NO EXISTE" << endl;
            cout << " 1- VOLVER AL MENU   2- INTENTAR DE NUEVO ";
            cin >> seleccion;
            if(seleccion == 1)
            {
                break;
            }
        }
    }

    int index = libroArchivo.buscarLibro(idLibro);

    libro = libroArchivo.leer(index);

    mostrarLibro(libro);

}
