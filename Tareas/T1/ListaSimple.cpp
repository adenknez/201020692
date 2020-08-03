#include "ListaSimple.h"
#include "Estudiante.h"


///Data
Estudiante *primero;
Estudiante *ultimo;


///Constructor y destructor
ListaSimple::ListaSimple()
{
    primero = NULL;
    ultimo = NULL;
}

ListaSimple::~ListaSimple()
{
    cout<<"Eliminada ListaSimple"<<endl;
}


///METODOS


//CONFIRMAR si esta VACIO la lista
bool ListaSimple::Vacio(){
    return (primero == NULL)?true:false;
}


//INSERTAR al ultimo el nodo Estudiante
void ListaSimple::Insertar(int id, string nombre){
    Estudiante *aux = new Estudiante();
    aux->carne = id;
    aux->nombre = nombre;
    //Cuando no hay ningun nodo en la lista
    if(primero==NULL){
        primero=aux;
        ultimo=aux;
    }else{  //cuando ya hay por lo menos 1 nodo en la ListaEnlazada
        ultimo->siguiente = aux;
        ultimo = aux;
    }

}


//BUSCAR un nodo Estudiante especifico
Estudiante* ListaSimple::Buscar(int n){
    Estudiante *aux = new Estudiante();
    if (Vacio() == false){
        aux=primero;
        //BUSCAR
        bool encontrado = false;
        while(aux != NULL){
            if(aux->carne == n){
                encontrado = true;
                break;
            }else{
                aux = aux->siguiente;
            }
        }
        //ENCONTRAR
        if(encontrado == true){
            cout<<"ENCONTRADO: Carne:"<<aux->carne<<" ,Nombre:"<<aux->nombre<<endl;
            return aux;
        }else{
            cout<<"Buscar: El elemento \" "<<n<<" \" no se encontro en la lista simple"<<endl;
        }
    //VACIA lista
    }else{
        cout<<"Buscar: La lista simple esta VACIA"<<endl;
    }
    return aux;
}



//ELIMINAR la lista; desde el siguiente nodo dado dejar en la lista.
void ListaSimple::Eliminar(Estudiante *n){
    if (n == NULL){
        cout<<"Eliminar: Error";
    }else{
        primero = n->siguiente;
        n->siguiente = NULL;
    }
}


//IMPRIMIR la ListaSimple
void ListaSimple::Imprimir(){
    if(Vacio() == false){
        Estudiante *aux = primero;

        while(aux != NULL){
            cout<<"Carne:"<<aux->carne<<" Nombre:"<<aux->nombre<<"  ->  ";
            aux = aux->siguiente;
        }
    }else{
       cout<<"---La LISTA esta VACIA \n\n\n"<<endl;
    }
}
