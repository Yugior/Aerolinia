// aerolinea.cpp
#include "aerolinea.h"

Aerolinea::Aerolinea() {
    // Constructor por defecto
}

// Getters
Pasajero Aerolinea::getPasajero() const {
    return pasajero;
}

Vuelo Aerolinea::getVuelo() const {
    return vuelo;
}

std::string Aerolinea::getAerolinea() const {
    return aerolinea;
}

// Setters
void Aerolinea::setPasajero(const Pasajero &pasajero) {
    this->pasajero = pasajero;
}

void Aerolinea::setVuelo(const Vuelo &vuelo) {
    this->vuelo = vuelo;
}

void Aerolinea::setAerolinea(const std::string &aerolinea) {
    this->aerolinea = aerolinea;
}

// Método adicional
void Aerolinea::seleccionaAerolinea() {
    std::cout << "Selecciona la aerolínea:\n";
    std::cout << "1. Alas Amigas\n";
    std::cout << "2. Volaros\n";
    std::cout << "3. Amgard\n";

    int opcion;
    std::cin >> opcion;

    switch (opcion) {
        case 1:
            setAerolinea("Alas Amigas");
            break;
        case 2:
            setAerolinea("Volaros");
            break;
        case 3:
            setAerolinea("Amgard");
            break;
        default:
            std::cout << "Opción no válida.\n";
            break;
    }
}

