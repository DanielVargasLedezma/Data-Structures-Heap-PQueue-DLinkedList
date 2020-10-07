#ifndef HEAP_H
#define HEAP_H
#include <iostream>
#include "ListaDobleEnlazada.h"

using namespace std;

template <typename T>

class Heap
{
private:

	ListaDobleEnlazada<T> *heap;
public:

	Heap()
	{

		heap = new ListaDobleEnlazada<T>();
	}

	Heap(const ListaDobleEnlazada& obj)
	{

		heap = new ListaDobleEnlazada<T>(obj);
	}

	void Eliminar(int posicion)
	{

		heap->borrarEnPosición(posicion);
	}

	void Heapify(int i)
	{


	}

	bool Heapify()
	{

		return false;
	}

	void insertarEnHeap(int dato)
	{

		heap->insertar(dato);
		this->Heapify(1);
	}

	Heap<T>* crearHeap(ListaDobleEnlazada& lde)
	{

		Heap <T>* nuevoHeap = new Heap<T>(lde);

		for (int i = lde.getCantidadNodos() / 2 - 1; i >= 0; i--) {

			nuevoHeap->Heapify(i);
		}

		return nuevoHeap;
	}


};
#endif
