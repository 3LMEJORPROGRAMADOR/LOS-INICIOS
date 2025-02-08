#include <iostream>
#include <string>

int main() {
	int a;

	std::cout << " ingresa tu nota del examen 1-100" << std::endl;
	std::cin >> a;

	if (a <= 50) {
		std::cout << "Que desepcion..." << std::endl;
	}
	else if (a < 50 && a >= 89) {
		std::cout << "nada mal, sigue asi" << std::endl;
	}
	else if ( a>=90 && a<=100) {
		std::cout << " felicidades eres el mejor"<<std::endl;
	}
	else {
		std::cout << "error de sistaxis" << std::endl;
	}
	return 0;
}