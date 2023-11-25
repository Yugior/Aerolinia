#include "costo.h"
#include <iostream>

// Constructor
Costo::Costo() {}

// Getter y Setter para Lugar del asiento
std::string Costo::getLugarAsiento() const {
    return lugarAsiento;
}

void Costo::setLugarAsiento(const std::string& lugarAsiento) {
    this->lugarAsiento = lugarAsiento;
}

// Getter y Setter para Comercial
Comercial Costo::getComercial() const {
    return comercial;
}

void Costo::setComercial(const Comercial& comercial) {
    this->comercial = comercial;
}

// Getter y Setter para Trabajo
Trabajo Costo::getTrabajo() const {
    return trabajo;
}

void Costo::setTrabajo(const Trabajo& trabajo) {
    this->trabajo = trabajo;
}

// Método para elegir el tipo de clase
void Costo::elegirTipoClase() {
    std::cout << "Elija el tipo de clase (Comercial, Trabajo, Pasajero): ";
    std::getline(std::cin, lugarAsiento);

    // Llamar al método de la subclase correspondiente para pedir información adicional
    if (lugarAsiento == "Comercial") {
        comercial.pedirNumeroAsientos();
    } else if (lugarAsiento == "Trabajo") {
        trabajo.pedirInformacion();
    }
}
