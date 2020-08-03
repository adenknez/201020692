/*
---------------------------------------------------------------------------------------------------------
Titulo: Lista Enlazada Simple
La lista debe de almacenar la informacion de estudiantes.
Data:       Carne, Nombre
Metodos necesarios:
	Agregar: Gestionar los datos utilizando una lista enlazada.
	Buscar y Eliminar: La búsqueda y eliminación debe de hacerse por medio del carné del estudiante.
---------------------------------------------------------------------------------------------------------
*//*Nombre: Adolfo Noriega      Carnet: 201020692*/


#include <iostream>
#include <conio.h>
#include <clocale>
using namespace std;

#include "ListaSimple.h"


int main(){
    setlocale(LC_CTYPE,"Spanish");

    ListaSimple *lista = new ListaSimple();

    cout<<"-----------------------------------BUSCAR  [Buscar(int n) = 3]------------------------------------------\n"<<endl;
    lista->Buscar(3);


    cout<<"\n"<<endl;
    cout<<"------------------INSERTAR al inicio 7 Estudiantes [Insertar(int id, string nombre)]--------------------\n"<<endl;
    lista->Insertar(1,"Jesus Guzman");
    lista->Insertar(2,"Marvin Martinez");
    lista->Insertar(3,"Juan Roman");
    lista->Insertar(4,"Ana Perez");
    lista->Insertar(5,"Miriam Morales");
    lista->Insertar(6,"Vinicio Juarez");
    lista->Insertar(7,"Marta Santizo");


    cout<<"\n"<<endl;
    cout<<"---------------------------------IMPRIMIR ListaSimple [Imprimir()]--------------------------------------\n"<<endl;
    lista->Imprimir();


    cout<<"\n\n\n"<<endl;
    cout<<"-----------------------------------BUSCAR  [Buscar(int n) = 3]------------------------------------------\n"<<endl;
    lista->Buscar(3);


    cout<<"\n\n\n"<<endl;
    cout<<"------------------ELIMINAR  [Eliminar(int n) = 4] (Del primero hasta el cuarto nodo)---------------------\n"<<endl;
    lista->Eliminar(lista->Buscar(4));


    cout<<"\n\n"<<endl;
    cout<<"---------------------------------IMPRIMIR ListaSimple [Imprimir()]---------------------------------------\n"<<endl;
    lista->Imprimir();


    cout<<"\n"<<endl;
    getch();
    return 0;
}
