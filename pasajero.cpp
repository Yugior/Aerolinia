#include "pasajero.h"
#include <iostream>

// Constructor
Pasajero::Pasajero() {}

// Getter y Setter para Nombre
std::string Pasajero::getNombre() const {
    return nombre;
}

void Pasajero::setNombre(const std::string& nombre) {
    this->nombre = nombre;
}

// Getter y Setter para Teléfono
std::string Pasajero::getTelefono() const {
    return telefono;
}

void Pasajero::setTelefono(const std::string& telefono) {
    this->telefono = telefono;
}

// Getter y Setter para Costo
Costo Pasajero::getCosto() const {
    return costo;
}

void Pasajero::setCosto(const Costo& costo) {
    this->costo = costo;
}

// Método para elegir el asiento y tipo de clase
void Pasajero::elegirAsientoYClase() {
    // Llamar al método de la subclase Costo para elegir el tipo de clase
    costo.elegirTipoClase();
    
    // Llamar al método de la subclase Pasajero para ingresar nombre y elegir asiento
    std::cout << "Ingrese el nombre del pasajero: ";
    std::getline(std::cin, nombre);
    costo.elegirTipoClase();
}
