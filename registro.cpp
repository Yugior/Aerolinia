#include <iostream>
#include "aerolinea.h"
#include "vuelo.h"
#include "pasajero.h"
#include "costo.h"
#include "comercial.h"
#include "trabajo.h"
#include "premier.h"

int main() {
    // Crear objetos
    Aerolinea aerolinea;
    Vuelo vuelo;
    Pasajero pasajero;
    Costo costo;
    Comercial comercial;
    Trabajo trabajo;
    Premier premier;

    // Configurar la aerolínea
    aerolinea.setVuelo(vuelo);
    aerolinea.setPasajero(pasajero);
    aerolinea.getPasajero().setCosto(costo);
    aerolinea.getPasajero().getCosto().setComercial(comercial);
    aerolinea.getPasajero().getCosto().setTrabajo(trabajo);
    aerolinea.getPasajero().getCosto().getTrabajo().setPremier(premier);

    // Pedir información
    aerolinea.pedirInformacion();

    // Imprimir las características del vuelo
    std::cout << "\n--- Características del Vuelo ---\n";
    std::cout << "Pasajero: " << aerolinea.getPasajero().getNombre() << "\n";
    std::cout << "Tipo de Clase: " << aerolinea.getPasajero().getCosto().getLugarAsiento() << "\n";
    
    if (aerolinea.getPasajero().getCosto().getLugarAsiento() == "Comercial") {
        std::cout << "Número de Asientos (Clase Comercial): " << aerolinea.getPasajero().getCosto().getComercial().getNumAsientos() << "\n";
    } else if (aerolinea.getPasajero().getCosto().getLugarAsiento() == "Trabajo") {
        std::cout << "Número de Asientos (Clase Trabajo): " << aerolinea.getPasajero().getCosto().getTrabajo().getNumAsientos() << "\n";
        std::cout << "Tipo de Servicio (Clase Trabajo): " << aerolinea.getPasajero().getCosto().getTrabajo().getTipoServicio() << "\n";
    } else if (aerolinea.getPasajero().getCosto().getLugarAsiento() == "Premier") {
        std::cout << "Número de Asientos (Clase Premier): " << aerolinea.getPasajero().getCosto().getTrabajo().getPremier().getNumAsientos() << "\n";
        std::cout << "Servicio 1 (Clase Premier): " << aerolinea.getPasajero().getCosto().getTrabajo().getPremier().getServicio1() << "\n";
        std::cout << "Servicio 2 (Clase Premier): " << aerolinea.getPasajero().getCosto().getTrabajo().getPremier().getServicio2() << "\n";
        std::cout << "Servicio 3 (Clase Premier): " << aerolinea.getPasajero().getCosto().getTrabajo().getPremier().getServicio3() << "\n";
    }

    return 0;
}
