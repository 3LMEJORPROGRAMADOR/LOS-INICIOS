#include <iostream>
#include "caracteristicas.h"


int main() {
    std::string nm;
    int eda;
    

    std::cout << "ingresa el nombre y edad de tu guerrero" << std::endl;
    std::cin >> nm >> eda;

    guerrero heroe1(nm, eda, true);
    heroe1.mostrarinfo(); // Imprimir� la informaci�n del guerrero

    return 0;
}
