#ifndef COMERCIAL_H
#define COMERCIAL_H

#include <string>

class Comercial {
private:
    int numAsientos;

public:
    // Constructor
    Comercial();

    // Getter y Setter para Número de asientos
    int getNumAsientos() const;
    void setNumAsientos(int numAsientos);

    // Método para pedir el número de asientos
    void pedirNumeroAsientos();
};

#endif // COMERCIAL_H
