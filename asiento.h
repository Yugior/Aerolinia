// asiento.h
#ifndef ASIENTO_H
#define ASIENTO_H

#include "premier.h"
#include "trabajo.h"

class Asiento {
private:
    double costo;
    Trabajo trabajo;
    Premier premier;

public:
    Asiento();

    // Getters
    double getCosto() const;

    // Setters
    void setCosto(double costo);

    // Método adicional
    void eligeClase();
};

#endif // ASIENTO_H
