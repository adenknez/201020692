#include "Estudiante.h"


///Data
int carne;
string nombre;
Estudiante *siguiente;


///Constructor y destructor de la clase Estudiante
Estudiante::Estudiante()
{
    carne = 0;
    nombre = "";
    siguiente = NULL;
}

Estudiante::~Estudiante()
{
    cout<<"Eliminado Estudiante"<<endl;
}
