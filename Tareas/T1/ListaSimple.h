using namespace std;
#include "Estudiante.h"

#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H


class ListaSimple
{
    public:
        ///Data
        Estudiante *primero;
        Estudiante *ultimo;
        int tamanio;

        ///Constructor y destructor
        ListaSimple();
        virtual ~ListaSimple();

        ///Metodos
        bool Vacio();
        void Insertar(int id, string nombre);
        Estudiante* Buscar(int n);
        //Buscar* Eliminar(Estudiante n*);
        void Eliminar(Estudiante* n);
        void Imprimir();


    protected:

    private:
};

#endif // LISTASIMPLE_H
