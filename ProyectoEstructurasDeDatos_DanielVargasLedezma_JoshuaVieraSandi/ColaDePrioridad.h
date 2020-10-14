#ifndef COLADEPRIORIDAD_H
#define COLADEPRIORIDAD_H
#include <iostream>
#include "Heap.h"
template <typename T>
class ColaDePrioridad
{
public:

	ColaDePrioridad() {
		cola = new Heap<T>();
	}

	ColaDePrioridad(const ColaDePrioridad<T>& obj)
	{

		cola = new Heap<T>(obj.cola);
	}

	void insertarenCola(T dato) {
		cola->insertarEnHeap(dato);
	}
	
	void eliminarPos(int Pos) {
		cola->Eliminar(Pos);
	}

	Heap<T>* crearHeap(ListaDobleEnlazada<T>& lde) {
		return cola->crearHeap(lde);
	}

	int getCantidadNodos() const {

		return cola->getCantidadNodos();
	}

	T getDatoEnPosicion(int i) const {

		return cola->getDatoEnPosicion(i);
	}

	~ColaDePrioridad() {
		delete cola;
	}

private:
	Heap<T>* cola;

	ColaDePrioridad(const Heap<T>& obj)
	{

		cola = new Heap<T>(obj);
	}
};
#endif

