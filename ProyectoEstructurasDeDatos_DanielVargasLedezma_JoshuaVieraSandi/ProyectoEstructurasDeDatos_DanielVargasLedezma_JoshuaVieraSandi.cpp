#include <iostream>
#include <sstream>
#include "ListaDobleEnlazada.h"
using namespace std;
std::string imprimirDatosEnLista(ListaDobleEnlazada<int>* listaD);

int main()
{

    ListaDobleEnlazada<int>* listaD = new ListaDobleEnlazada<int>;

    listaD->insertar(5);
    listaD->insertar(10);
    listaD->insertar(33);
    listaD->insertar(6);
    listaD->insertar(4);

    std::cout << "Lista Original\n";
    std::cout << imprimirDatosEnLista(listaD) << "\n";

    std::cout << "Borramos en la posicion 1 y queda\n";
    listaD->borrarEnPosición(1);

    std::cout << imprimirDatosEnLista(listaD) << "\n";

    std::cout << "Borramos en la posicion 3 y queda\n";
    listaD->borrarEnPosición(3);

    std::cout << imprimirDatosEnLista(listaD) << "\n";

    std::cout << "Borramos en la posicion 3 y queda\n";
    listaD->borrarEnPosición(3);

    std::cout << imprimirDatosEnLista(listaD) << "\n";

    listaD->insertar(5);

    listaD->insertarEnPosición(21, 3);

    listaD->insertarEnPosición(77, 2);

    std::cout << imprimirDatosEnLista(listaD) << "\n";

    ListaDobleEnlazada<int>* listaC = new ListaDobleEnlazada<int>(*listaD);

    std::cout << imprimirDatosEnLista(listaC) << "\n";

    delete listaD;
    delete listaC;

}

std::string imprimirDatosEnLista(ListaDobleEnlazada<int>* listaD)
{
    std::stringstream x;
    int num = 0;

    for (int i = 1; i <= listaD->getCantidadNodos(); i++) {

        x << listaD->getDatoEnPosicion(i) << " ";
    }

    x << "\n";

    return x.str();
}