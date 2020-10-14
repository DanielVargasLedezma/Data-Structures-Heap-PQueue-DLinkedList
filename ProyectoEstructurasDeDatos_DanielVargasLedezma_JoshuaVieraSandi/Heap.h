#ifndef HEAP_H
#define HEAP_H
#include <iostream>
#include "ListaDobleEnlazada.h"

template <typename T>

class Heap
{
private:

	ListaDobleEnlazada<T> *heap;
	
	Heap(const ListaDobleEnlazada<T> &obj)
	{

		heap = new ListaDobleEnlazada<T>(obj);
	}

public:

	Heap()
	{

		heap = new ListaDobleEnlazada<T>();
	}

	Heap(const Heap<T>& obj)
	{

		heap = new ListaDobleEnlazada<T>(obj.heap);
	}

	void Eliminar(int posicion)
	{

		heap->borrarEnPosición(posicion);
		for (int i = (heap->getCantidadNodos() / 2) - 1; i >= 0; i--) {

			heap->heapify(i);
		}
	}

	void insertarEnHeap(T dato)
	{

		heap->insertar(dato);

		for (int i = (heap->getCantidadNodos() / 2) - 1; i >= 0; i--) {

			heap->heapify(i);
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

	int getCantidadNodos() const {

		return heap->getCantidadNodos();
	}

	T getDatoEnPosicion(int i) const {

		return heap->getDatoEnPosicion(i);
	}

	~Heap() {

		delete heap;
	}
};
#endif
