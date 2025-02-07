#include <iostream>
#include <string>

using namespace std;

// Definición de la clase Personaje
class Personaje {
public:
    // Atributos
    string nombre;
    int nivel;
    double salud;

    // Constructor: se ejecuta cuando se crea un objeto de la clase Personaje
    Personaje(string n, int lvl, double hp) {
        nombre = n;
        nivel = lvl;
        salud = hp;
    }

    // Método para mostrar la información del personaje
    void mostrarInfo() {
        cout << "Nombre: " << nombre << endl;
        cout << "Nivel: " << nivel << endl;
        cout << "Salud: " << salud << endl;
    }

    // Destructor: se ejecuta cuando el objeto es destruido
    ~Personaje() {
        cout << "El personaje " << nombre << " ha sido destruido." << endl;
    }
};

int main() {
    // Crear un objeto de la clase Personaje
    Personaje heroe("Artemis", 5, 100.0);

    Personaje Rango("alisha", 7, 90.81);

    Rango.mostrarInfo();

    // Llamar al método para mostrar la información del personaje
    heroe.mostrarInfo();

    // Al finalizar el programa, el destructor se llamará automáticamente.
    return 0;
}
