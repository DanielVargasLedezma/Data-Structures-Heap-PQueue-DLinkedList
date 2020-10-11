#include <iostream>
#include <sstream>
#include "Heap.h"

std::string imprimirHeap(const Heap<int>& heap);

int main()
{

    Heap<int>* heap = new Heap<int>();

    heap->insertarEnHeap(10);

    heap->insertarEnHeap(4);

    heap->insertarEnHeap(5);

    heap->insertarEnHeap(6);

    std::cout << imprimirHeap(*heap);

    heap->insertarEnHeap(7);

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