#include "premier.h"
#include <iostream>

// Constructor
Premier::Premier() {}

// Getter y Setter para Número de asientos
int Premier::getNumAsientos() const {
    return numAsientos;
}

void Premier::setNumAsientos(int numAsientos) {
    this->numAsientos = numAsientos;
}

// Getter y Setter para Servicio 1
std::string Premier::getServicio1() const {
    return servicio1;
}

void Premier::setServicio1(const std::string& servicio1) {
    this->servicio1 = servicio1;
}

// Getter y Setter para Servicio 2
std::string Premier::getServicio2() const {
    return servicio2;
}

void Premier::setServicio2(const std::string& servicio2) {
    this->servicio2 = servicio2;
}

// Getter y Setter para Servicio 3
std::string Premier::getServicio3() const {
    return servicio3;
}

void Premier::setServicio3(const std::string& servicio3) {
    this->servicio3 = servicio3;
}

// Método para pedir información de asientos y servicios
void Premier::pedirInformacion() {
    std::cout << "Ingrese el número de asientos para la clase Premier: ";
    std::cin >> numAsientos;
    std::cin.ignore();  // Para consumir el carácter de nueva línea dejado por std::cin

    std::cout << "Elija el servicio 1 (Bebida, Comida, Masaje, Entretenimiento): ";
    std::getline(std::cin, servicio1);

    std::cout << "Elija el servicio 2 (Bebida, Comida, Masaje, Entretenimiento): ";
    std::getline(std::cin, servicio2);

    std::cout << "Elija el servicio 3 (Bebida, Comida, Masaje, Entretenimiento): ";
    std::getline(std::cin, servicio3);
}
