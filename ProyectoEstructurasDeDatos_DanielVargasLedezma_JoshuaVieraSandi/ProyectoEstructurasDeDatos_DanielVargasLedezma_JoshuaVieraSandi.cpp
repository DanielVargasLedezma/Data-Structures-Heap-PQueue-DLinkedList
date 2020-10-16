#include <iostream>
#include <sstream>
#include "ColaDePrioridad.h"

std::string imprimirCola(const ColaDePrioridad<int>& cola);

int main()
{
    ColaDePrioridad<int>* cola = new ColaDePrioridad<int>();

	std::cout << "Se trabaja con una heap de maximos\n";
	std::cout << "==================================\n";
	system("Pause");
	std::cout << "\n";
	std::cout << "\n";

    std::cout << "1- Se inserta el 10, sera la raiz y se establece como padre al ser el unico elemento \n";
    cola->insertarenCola(10);
	std::cout << imprimirCola(*cola);
	system("Pause");
	std::cout << "\n";
	std::cout << "\n";

    std::cout << "2- Se inserta el 4, se establece como hijo izquierdo al ser menor que 10 \n";
    cola->insertarenCola(4);
	std::cout << imprimirCola(*cola);
	system("Pause");
	std::cout << "\n";
	std::cout << "\n";

    std::cout << "3- Se inserta el 5, se establece como hijo derecho del al ser menor que 10\n";
    cola->insertarenCola(5);
	std::cout << imprimirCola(*cola);
	system("Pause");
	std::cout << "\n";
	std::cout << "\n";

    std::cout << "4- Se inserta el 6, se establece como hijo izquierdo del 10 y padre del 4\n";
    cola->insertarenCola(6);
	std::cout << imprimirCola(*cola);
	system("Pause");
	std::cout << "\n";
	std::cout << "\n";

    std::cout << "5- Se inserta el 7, se establece como padre de 4 y 6\n";
    cola->insertarenCola(7);
    std::cout << imprimirCola(*cola);
	system("Pause");
	std::cout << "\n";
	std::cout << "\n";

	std::cout << "6- Se inserta el 12 , se establece como el nodo raiz al ser el dato mayor, el 10 es ahora hijo derecho del 12 y padre del 5\n";
    cola->insertarenCola(12);
    std::cout << imprimirCola(*cola);
	system("Pause");
	std::cout << "\n";
	std::cout << "\n";

	std::cout << "7- Se saca el elemento con mas prioridad de la cola, se reacomoda la cola para que siga manteniendo la propiedad\n";
	int highestPrio = cola->pullHighestPriority();
	std::cout << "El elemento con mas prioridad es: " << highestPrio << "\n";
	std::cout << imprimirCola(*cola);

	delete cola;
}


std::string imprimirCola(const ColaDePrioridad<int>& cola)
{
	std::stringstream x;

	for (int i = 0; i < cola.getCantidadNodos(); i++) {
		x << " | " << cola.getDatoEnPosicion(i);
	}
	x << " |";
	x << "\n";

	return x.str();
}