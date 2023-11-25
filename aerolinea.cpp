#include "aerolinea.h"

// Constructor
Aerolinea::Aerolinea() {}

// Getter y Setter para Pasajero
Pasajero Aerolinea::getPasajero() const {
    return pasajero;
}

void Aerolinea::setPasajero(const Pasajero& pasajero) {
    this->pasajero = pasajero;
}

// Getter y Setter para Vuelo
Vuelo Aerolinea::getVuelo() const {
    return vuelo;
}

void Aerolinea::setVuelo(const Vuelo& vuelo) {
    this->vuelo = vuelo;
}

// Método que pide información de la aerolínea
void Aerolinea::pedirInformacion() {
    // Llamar al método de la subclase Pasajero para ingresar nombre y elegir asiento
    pasajero.setNombre("Pasajero Anónimo");  // Establecer un valor predeterminado
    pasajero.elegirAsientoYClase();

    // Llamar al método de la subclase Vuelo para seleccionar el vuelo
    vuelo.seleccionarVuelo();
}
