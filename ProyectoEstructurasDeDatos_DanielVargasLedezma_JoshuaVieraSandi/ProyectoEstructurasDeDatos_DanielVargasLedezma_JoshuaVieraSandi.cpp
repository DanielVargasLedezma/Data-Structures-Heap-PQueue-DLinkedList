#include <iostream>
#include <sstream>
#include "Heap.h"

std::string imprimirHeap(const Heap<int>& heap);

int main()
{

    Heap<int>* heap = new Heap<int>();

    std::cout << "Se inserta el 10 al heap, se establece como padre yefafsa\n";
    heap->insertarEnHeap(10);

    std::cout << "Se inserta el 4 al heap, se establece como padre yefafsa\n";
    heap->insertarEnHeap(4);

    std::cout << "Se inserta el 5 al heap, se establece como padre yefafsa\n";
    heap->insertarEnHeap(5);

    std::cout << "Se inserta el 6 al heap, se establece como padre yefafsa\n";
    heap->insertarEnHeap(6);

    std::cout << "Se inserta el 10 al heap, se establece como padre yefafsa\n";
    std::cout << imprimirHeap(*heap);

    std::cout << "Se inserta el 7 al heap, se establece como padre yefafsa\n";
    heap->insertarEnHeap(7);

    std::cout << imprimirHeap(*heap);

    heap->insertarEnHeap(12);

    std::cout << imprimirHeap(*heap);

    delete heap;
}

std::string imprimirHeap(const Heap<int>& heap)
{
    std::stringstream x;
    int num = 0;

    for (int i = 0; i < heap.getCantidadNodos(); i++) {

        x << heap.getDatoEnPosicion(i) << " ";
    }

    x << "\n";

    return x.str();
}