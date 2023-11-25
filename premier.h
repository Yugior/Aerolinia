#ifndef PREMIER_H
#define PREMIER_H

#include <string>

class Premier {
private:
    int numAsientos;
    std::string servicio1;
    std::string servicio2;
    std::string servicio3;

public:
    // Constructor
    Premier();

    // Getter y Setter para Número de asientos
    int getNumAsientos() const;
    void setNumAsientos(int numAsientos);

    // Getter y Setter para Servicio 1
    std::string getServicio1() const;
    void setServicio1(const std::string& servicio1);

    // Getter y Setter para Servicio 2
    std::string getServicio2() const;
    void setServicio2(const std::string& servicio2);

    // Getter y Setter para Servicio 3
    std::string getServicio3() const;
    void setServicio3(const std::string& servicio3);

    // Método para pedir información de asientos y servicios
    void pedirInformacion();
};

#endif // PREMIER_H
