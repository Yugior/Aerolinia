// premier.cpp
#include "premier.h"

Premier::Premier() {
    // Constructor por defecto
}

// Getters
std::string Premier::getMasaje() const {
    return masaje;
}

std::string Premier::getComida() const {
    return comida;
}

// Setters
void Premier::setMasaje(const std::string &masaje) {
    this->masaje = masaje;
}

void Premier::setComida(const std::string &comida) {
    this->comida = comida;
}

// Método adicional
void Premier::eligeServiciosPremier() {
    std::cout << "Elige tres de los siguientes servicios Premier:\n";
    std::cout << "1. Masaje\n";
    std::cout << "2. Bebida\n";
    std::cout << "3. Comida\n";
    std::cout << "4. Entretenimiento\n";

    for (int i = 0; i < 3; ++i) {
        int opcion;
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                std::cout << "Has elegido el servicio de Masaje.\n";
                setMasaje("Servicio de Masaje");
                break;
            case 2:
                std::cout << "Has elegido el servicio de Bebida.\n";
                setBebida("Servicio de Bebida");
                break;
            case 3:
                std::cout << "Has elegido el servicio de Comida.\n";
                setComida("Servicio de Comida");
                break;
            case 4:
                std::cout << "Has elegido el servicio de Entretenimiento.\n";
                setEntretenimiento("Servicio de Entretenimiento");
                break;
            default:
                std::cout << "Opción no válida.\n";
                --i; // Para que el usuario pueda elegir otro servicio.
                break;
        }
    }
}
