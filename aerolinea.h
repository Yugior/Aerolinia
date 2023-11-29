// aerolinea.h
#ifndef AEROLINEA_H
#define AEROLINEA_H

#include "pasajero.h"
#include "vuelo.h"
#include <iostream>
#include <string>

class Aerolinea {
private:
    Pasajero pasajero;
    Vuelo vuelo;
    std::string aerolinea;

public:
    Aerolinea();

    // Getters
    Pasajero getPasajero() const;
    Vuelo getVuelo() const;
    std::string getAerolinea() const;

    // Setters
    void setPasajero(const Pasajero &pasajero);
    void setVuelo(const Vuelo &vuelo);
    void setAerolinea(const std::string &aerolinea);

    // Método adicional
    void seleccionaAerolinea();
};

#endif // AEROLINEA_H
