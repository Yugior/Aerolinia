#include "trabajo.h"
#include <iostream>
// Constructor
Trabajo::Trabajo() {}

// Getter y Setter para Número de asientos
int Trabajo::getNumAsientos() const {
    return numAsientos;
}

void Trabajo::setNumAsientos(int numAsientos) {
    this->numAsientos = numAsientos;
}

// Getter y Setter para Tipo de servicio
std::string Trabajo::getTipoServicio() const {
    return tipoServicio;
}

void Trabajo::setTipoServicio(const std::string& tipoServicio) {
    this->tipoServicio = tipoServicio;
}

// Getter y Setter para Premier
Premier Trabajo::getPremier() const {
    return premier;
}

void Trabajo::setPremier(const Premier& premier) {
    this->premier = premier;
}

// Método para pedir información de asientos y tipo de servicio
void Trabajo::pedirInformacion() {
    std::cout << "Ingrese el número de asientos para la clase trabajo: ";
    std::cin >> numAsientos;
    std::cin.ignore();  // Para consumir el carácter de nueva línea dejado por std::cin

    std::cout << "Elija el tipo de servicio (Bebida, Entretenimiento): ";
    std::getline(std::cin, tipoServicio);

    // Llamar al método de la subclase Premier para pedir información adicional
    if (tipoServicio == "Entretenimiento") {
        premier.pedirInformacion();
    }
}
