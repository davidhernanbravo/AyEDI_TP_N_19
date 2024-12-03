#include "../include/articulo.hpp"

// Constructor por defecto.
Articulo::Articulo()
    : costoBase(0.0) {}

// Asigna el costo base.
void Articulo::SetCostoBase(float CB)
    {
        costoBase = CB;
    }

// Obtiene el costo base.
float Articulo::GetCostoBase() const
    {
        return costoBase;
    }

// Calcula el precio al mayor.
float Articulo::PVPMayor() const
    {
        return costoBase * 1.15; // Incremento del 15%.
    }

// Calcula el precio al detal.
float Articulo::PVPDetal() const
    {
        return costoBase * 1.30; // Incremento del 30%.
    }