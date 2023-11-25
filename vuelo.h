#ifndef VUELO_H
#define VUELO_H

#include <string>

class Vuelo {
private:
    std::string piloto;
    std::string copiloto;
    std::string fechaSalida;
    std::string avion;

public:
    // Constructor
    Vuelo();

    // Getter y Setter para Piloto
    std::string getPiloto() const;
    void setPiloto(const std::string& piloto);

    // Getter y Setter para Copiloto
    std::string getCopiloto() const;
    void setCopiloto(const std::string& copiloto);

    // Getter y Setter para Fecha de salida
    std::string getFechaSalida() const;
    void setFechaSalida(const std::string& fechaSalida);

    // Getter y Setter para Avión
    std::string getAvion() const;
    void setAvion(const std::string& avion);

    // Método que selecciona el vuelo
    void seleccionarVuelo();
};

#endif // VUELO_H
