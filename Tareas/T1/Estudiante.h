#include<iostream>
using namespace std;

#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

class Estudiante
{
    public:
        ///Data
        int carne;
        string nombre;
        Estudiante *siguiente;

        ///Constructor y destructor
        Estudiante();
        virtual ~Estudiante();

        //Metodos

    protected:

    private:
};

#endif // ESTUDIANTE_H
