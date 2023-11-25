#ifndef PASAJERO_H
#define PASAJERO_H

#include <string>
#include "costo.h"

class Pasajero {
private:
    std::string nombre;
    std::string telefono;
    Costo costo; // Agregar una instancia de la subclase Costo

public:
    // Constructor
    Pasajero();

    // Getter y Setter para Nombre
    std::string getNombre() const;
    void setNombre(const std::string& nombre);

    // Getter y Setter para Teléfono
    std::string getTelefono() const;
    void setTelefono(const std::string& telefono);

    // Getter y Setter para Costo
    Costo getCosto() const;
    void setCosto(const Costo& costo);

    // Método para elegir el asiento y tipo de clase
    void elegirAsientoYClase();
};

#endif // PASAJERO_H
