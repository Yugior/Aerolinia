// premier.h
#ifndef PREMIER_H
#define PREMIER_H

#include "trabajo.h"

class Premier : public Trabajo {
private:
    std::string masaje;
    std::string comida;

public:
    Premier();

    // Getters
    std::string getMasaje() const;
    std::string getComida() const;

    // Setters
    void setMasaje(const std::string &masaje);
    void setComida(const std::string &comida);

    // Método adicional
    void eligeServiciosPremier();
};

#endif // PREMIER_H
