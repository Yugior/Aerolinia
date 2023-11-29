// pasajero.cpp
#include "pasajero.h"

Pasajero::Pasajero() {
    // Constructor por defecto
}

// Getters
std::string Pasajero::getNombre() const {
    return nombre;
}

std::string Pasajero::getTelefono() const {
    return telefono;
}

// Setters
void Pasajero::setNombre(const std::string &nombre) {
    this->nombre = nombre;
}

void Pasajero::setTelefono(const std::string &telefono) {
    this->telefono = telefono;
}

// Método adicional
void Pasajero::registrarPasajero() {
    std::cout << "Ingrese el nombre del pasajero: ";
    std::cin.ignore(); // Para evitar problemas con getline después de cin >>
    std::getline(std::cin, nombre);

    std::cout << "Ingrese el número de teléfono del pasajero: ";
    std::cin >> telefono;
}
