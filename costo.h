#ifndef COSTO_H
#define COSTO_H

#include <string>
#include "comercial.h"
#include "trabajo.h" 

class Costo {
private:
    std::string lugarAsiento;
    Comercial comercial;
    Trabajo trabajo;

public:
    // Constructor
    Costo();

    // Getter y Setter para Lugar del asiento
    std::string getLugarAsiento() const;
    void setLugarAsiento(const std::string& lugarAsiento);

    // Getter y Setter para Comercial
    Comercial getComercial() const;
    void setComercial(const Comercial& comercial);

    // Getter y Setter para Trabajo
    Trabajo getTrabajo() const;
    void setTrabajo(const Trabajo& trabajo);

    // Método para elegir el tipo de clase
    void elegirTipoClase();
};

#endif // COSTO_H
