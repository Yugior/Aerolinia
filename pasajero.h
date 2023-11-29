// pasajero.h
#ifndef PASAJERO_H
#define PASAJERO_H

#include <iostream>
#include <string>

class Pasajero {
private:
    std::string nombre;
    std::string telefono;

public:
    Pasajero();

    // Getters
    std::string getNombre() const;
    std::string getTelefono() const;

    // Setters
    void setNombre(const std::string &nombre);
    void setTelefono(const std::string &telefono);

    // Método adicional
    void registrarPasajero();
};

#endif // PASAJERO_H
