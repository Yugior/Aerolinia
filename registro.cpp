// registro.cpp
#include "aerolinea.h"

int main() {
        
        char deseaNuevoRegistro = 's'; // Inicializar con 's' para entrar al bucle

        while (deseaNuevoRegistro == 's' || deseaNuevoRegistro == 'S') {
        
            // Crear instancias de las clases
            Aerolinea aerolinea;
        
            // Seleccionar la aerolínea
            aerolinea.seleccionaAerolinea();
        
            // Seleccionar la fecha del vuelo
            aerolinea.getVuelo().seleccionaVuelo();
        
            // Registrar al pasajero
            Pasajero pasajero;
            pasajero.registrarPasajero();
            aerolinea.setPasajero(pasajero);
        
            // Elegir la clase del asiento
            aerolinea.getVuelo().eligeClase();
        
            // Imprimir la información registrada
            std::cout << "\n--- Resumen de Registro ---\n";
            std::cout << "Aerolínea: " << aerolinea.getAerolinea() << "\n";
            std::cout << "Fecha del vuelo: " << aerolinea.getVuelo().getFecha() << "\n";
            std::cout << "Nombre del pasajero: " << aerolinea.getPasajero().getNombre() << "\n";
            std::cout << "Teléfono del pasajero: " << aerolinea.getPasajero().getTelefono() << "\n";
            std::cout << "Asiento: " << (aerolinea.getVuelo().getClase() == 1 ? "Trabajo" : "Premier") << "\n";
            
            // Imprimir el costo del asiento
            std::cout << "Costo del asiento: $" << aerolinea.getVuelo().getCosto() << "\n";
            
            // Preguntar si desea un nuevo registro
            std::cout << "¿Desea realizar un nuevo registro? (s/n): ";
            std::cin >> deseaNuevoRegistro;
        }
        
        std::cout << "Programa finalizado.\n";

    return 0;
}
