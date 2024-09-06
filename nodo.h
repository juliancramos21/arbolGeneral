#ifndef __NODO_H__
#define __NODO_H__

#include <string>
#include <deque>

template <class T>
class Nodo{
    protected:
        T dato;
        std::deque<Nodo <T>* > desc;
    
    public: 
        Nodo();
        ~Nodo();
        T& getDato();
        void setDato(T& d);
        void limpiarLista();
        void adicionarDesc(T& valor);
        void eliminarDesc (T& valor);

        
        
};

#include "nodo.hxx"

#endif