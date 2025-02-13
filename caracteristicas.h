#ifndef CARACTERISTICAS_H
#define CARACTERISTICAS_H

#include <iostream>
#include <string>

class humano {
private:
    std::string name;
    int edad;
    bool genero;

public:
    // Constructor de la clase humano
    humano(const std::string& nombre, int year, bool sexualidad) {
        name = nombre;
        edad = year;
        genero = sexualidad;
    }

    // Método para mostrar información
    void mostrarinfo() {
        std::cout << "Nombre del heroe: " << name << std::endl;
        std::cout << "Edad del heroe: " << edad << std::endl;
        std::cout << "Genero del heroe: " << (genero ? "Masculino" : "Femenino") << std::endl;
    }
};

// Clase guerrero que hereda de humano
class guerrero : public humano {
public:
    guerrero(const std::string& nombre, int year, bool sexualidad)
        : humano(nombre, year, sexualidad) {
    }
};

// Clase mago que hereda de humano
class mago : public humano {
public:
    mago(const std::string& nombre, int year, bool sexualidad)
        : humano(nombre, year, sexualidad) {
    }
};

// Clase rango que hereda de humano
class rango : public humano {
public:
    rango(const std::string& nombre, int year, bool sexualidad)
        : humano(nombre, year, sexualidad) {
    }
};

#endif

