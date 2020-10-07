#ifndef HEAP_H
#define HEAP_H
#include <iostream>
#include "ListaDobleEnlazada.h"

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

	Heap(const ListaDobleEnlazada<T>& obj)
	{

		heap = new ListaDobleEnlazada<T>(obj);
	}

	void Eliminar(int posicion)
	{

		heap->borrarEnPosición(posicion);
	}

	void insertarEnHeap(T dato)
	{

		heap->insertar(dato);

		for (int i = this->heap.getCantidadNodos() / 2 - 1; i >= 0; i--) {

			heap->Heapify(i);
		}
	}

	Heap<T>* crearHeap(ListaDobleEnlazada<T>& lde)
	{

		Heap <T>* nuevoHeap = new Heap<T>(lde);

		for (int i = lde.getCantidadNodos() / 2 - 1; i >= 0; i--) {

			nuevoHeap->Heapify(i);
		}

		return nuevoHeap;
	}


};
#endif
