#include "comercial.h"
#include <iostream>

// Constructor
Comercial::Comercial() {}

// Getter y Setter para Número de asientos
int Comercial::getNumAsientos() const {
    return numAsientos;
}

void Comercial::setNumAsientos(int numAsientos) {
    this->numAsientos = numAsientos;
}

// Método para pedir el número de asientos
void Comercial::pedirNumeroAsientos() {
    std::cout << "Ingrese el número de asientos para la clase comercial: ";
    std::cin >> numAsientos;
    std::cin.ignore();  // Para consumir el carácter de nueva línea dejado por std::cin
}
