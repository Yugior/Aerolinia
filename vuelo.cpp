// vuelo.cpp
#include "vuelo.h"

Vuelo::Vuelo() {
    // Constructor por defecto
}

// Getters
std::string Vuelo::getFecha() const {
    return fecha;
}

std::string Vuelo::getAvion() const {
    return avion;
}

int Vuelo::getClase() const {
    return clase;
}

double Vuelo::getCosto() const {
    return costo;
}

// Setters
void Vuelo::setFecha(const std::string &fecha) {
    this->fecha = fecha;
}

void Vuelo::setAvion(const std::string &avion) {
    this->avion = avion;
}

void Vuelo::setClase(int clase) {
    this->clase = clase;
}

void Vuelo::setCosto(double costo) {
    this->costo = costo;
}

// Métodos adicionales
void Vuelo::seleccionaVuelo() {
    std::cout << "Selecciona la fecha del vuelo:\n";
    std::cout << "1. Lunes\n";
    std::cout << "2. Martes\n";
    std::cout << "3. Miércoles\n";
    std::cout << "4. Jueves\n";
    std::cout << "5. Viernes\n";

    int opcion;
    std::cin >> opcion;

    switch (opcion) {
        case 1:
            setFecha("Lunes");
            break;
        case 2:
            setFecha("Martes");
            break;
        case 3:
            setFecha("Miércoles");
            break;
        case 4:
            setFecha("Jueves");
            break;
        case 5:
            setFecha("Viernes");
            break;
        default:
            std::cout << "Opción no válida.\n";
            break;
    }
}

void Vuelo::eligeClase() {
    std::cout << "Elige la clase del asiento:\n";
    std::cout << "1. Trabajo\n";
    std::cout << "2. Premier\n";

    int opcion;
    std::cin >> opcion;

    switch (opcion) {
        case 1:
            setClase(1);  // Trabajo
            setCosto(50.0);  // Establecer costo para la clase Trabajo
            break;
        case 2:
            setClase(2);  // Premier
            setCosto(100.0);  // Establecer costo para la clase Premier
            break;
        default:
            std::cout << "Opción no válida.\n";
            break;
    }
}
