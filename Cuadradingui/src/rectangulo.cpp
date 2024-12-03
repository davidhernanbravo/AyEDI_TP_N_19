#include "../include/rectangulo.hpp"

// Constructor por defecto.
Rectangulo::Rectangulo() 
    : altura(0.0), base(0.0) {}

// Métodos Setters.
void Rectangulo::SetAltura(float al) 
    {
        altura = al;
    }

void Rectangulo::SetBase(float ba) 
    {
        base = ba;
    }

// Métodos Getters.
float Rectangulo::GetAltura() const 
    {
        return altura;
    }

float Rectangulo::GetBase() const 
    {
        return base;
    }

// Método para calcular el área.
float Rectangulo::area() const 
    {
        return base * altura;
    }

// Método para calcular el perímetro.
float Rectangulo::perimetro() const 
    {
        return 2 * (base + altura);
    }