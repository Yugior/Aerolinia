// vuelo.h
#ifndef VUELO_H
#define VUELO_H

#include <iostream>
#include <string>

class Vuelo {
private:
    std::string fecha;
    std::string avion;
    int clase;  
    double costo;  //  variable para almacenar el costo del asiento

public:
    Vuelo();

    // Getters
    std::string getFecha() const;
    std::string getAvion() const;
    int getClase() const;
    double getCosto() const;  //  getter para obtener el costo del asiento

    // Setters
    void setFecha(const std::string &fecha);
    void setAvion(const std::string &avion);
    void setClase(int clase);
    void setCosto(double costo);  //  setter para establecer el costo del asiento

    // Métodos adicionales
    void seleccionaVuelo();
    void eligeClase();
};

#endif // VUELO_H
