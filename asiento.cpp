// asiento.cpp
#include "asiento.h"

Asiento::Asiento() {
    // Constructor por defecto
}

// Getters
double Asiento::getCosto() const {
    return costo;
}

// Setters
void Asiento::setCosto(double costo) {
    this->costo = costo;
}

// Método adicional
void Asiento::eligeClase() {
    std::cout << "Elige la clase del asiento:\n";
    std::cout << "1. Trabajo\n";
    std::cout << "2. Premier\n";

    int opcion;
    std::cin >> opcion;

    switch (opcion) {
        case 1:
            trabajo.eligeServicios();
            setCosto(50.0); // Costo base para la clase Trabajo
            break;
        case 2:
            premier.eligeServiciosPremier();
            setCosto(100.0); // Costo base para la clase Premier
            break;
        default:
            std::cout << "Opción no válida.\n";
            break;
    }
}
