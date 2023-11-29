// trabajo.h
#ifndef TRABAJO_H
#define TRABAJO_H

#include <iostream>
#include <string>

class Trabajo {
private:
    std::string bebida;
    std::string entretenimiento;

public:
    Trabajo();

    // Getters
    std::string getBebida() const;
    std::string getEntretenimiento() const;

    // Setters
    void setBebida(const std::string &bebida);
    void setEntretenimiento(const std::string &entretenimiento);

    // Método adicional
    void eligeServicios();
};

#endif // TRABAJO_H
