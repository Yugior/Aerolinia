#include "vuelo.h"
#include <iostream>

// Constructor
Vuelo::Vuelo() {}

// Getter y Setter para Piloto
std::string Vuelo::getPiloto() const {
    return piloto;
}

void Vuelo::setPiloto(const std::string& piloto) {
    this->piloto = piloto;
}

// Getter y Setter para Copiloto
std::string Vuelo::getCopiloto() const {
    return copiloto;
}

void Vuelo::setCopiloto(const std::string& copiloto) {
    this->copiloto = copiloto;
}

// Getter y Setter para Fecha de salida
std::string Vuelo::getFechaSalida() const {
    return fechaSalida;
