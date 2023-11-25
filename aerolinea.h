#ifndef AEROLINEA_H
#define AEROLINEA_H

#include <iostream>
#include <string>
#include "vuelo.h"
#include "pasajero.h"

class Aerolinea {
private:
    Pasajero pasajero;
    Vuelo vuelo;

public:
    // Constructor
    Aerolinea();

    // Getter y Setter para Pasajero
    Pasajero getPasajero() const;
    void setPasajero(const Pasajero& pasajero);

    // Getter y Setter para Vuelo
    Vuelo getVuelo() const;
    void setVuelo(const Vuelo& vuelo);

    // Método que pide información de la aerolínea
    void pedirInformacion();
};

#endif // AEROLINEA_H
