#include "nodo.h"

#include <deque>
#include <iterator>
#include <string>
#include <stdexcept>

template <class T>
Nodo<T>::Nodo(){
    desc.clear();
}

template <class T>
Nodo<T>::~Nodo(){
    typename std::deque< Nodo <T> *>::iterator it= desc.begin();

    for(; it!=desc.end(); it++){
        delete *it;
    }
    desc.clear();
}

template <class T>
T& Nodo<T>::getDato(){
    return dato;
}

template <class T>
void Nodo<T>::setDato(T& d){
    dato=d;
}

template <class T>
void Nodo<T>::limpiarLista(){
    desc.clear();
}

template <class T>
void Nodo<T>::adicionarDesc(T& valor){
    Nodo<T> * nodo=new Nodo<T>;
    nodo->setDato(valor);

}

template <class T>
void Nodo<T>::eliminarDesc(T& valor){
    //Primero se busca el valor y luego se elimina
    typename std::deque < Nodo <T>*>::iterator it;
    Nodo <T> * aux;
    for(it=desc.begin(); it!=desc.end(); it++){
        aux=*it;
        if(aux->getDato==valor){
            break;
        }
    }
    //Por que no borrarlo de una vez antes del break;

    if(it!= desc.end()){ //Si no llega al final es porque hubo un break
        delete *it;
    }else{
        throw std::runtime_error("No existe ningun nodo con ese valor");
    }

}