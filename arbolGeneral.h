#ifndef __ARBOL_GENERAL_H__
#define __ARBOL_GENERAL_H__
#include "nodo.h"

#include <deque>

template <class T>
class ArbolGeneral{
    protected:
        Nodo <T>* raiz;
    public:
        ArbolGeneral();
        ArbolGeneral(T& valor);
        ~ArbolGeneral();
        bool esVacio();
        Nodo<T>* getRaiz();
        void setRaiz(Nodo<T>* nuevaRaiz);
        void insertarNodo(T& padre, T& nuevoNodo);
        void eliminarNodo(T& n);
        void buscar(T& n);
        unsigned int altura();
        unsigned int tam();
        void preOrden();
        void posOrden();
        void nivelOrden();

};
#include "arbolGeneral.hxx"

#endif