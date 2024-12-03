#include "../include/persona.hpp"

// Constructor.
Persona::Persona() 
    : dia(0), mes(0), anio(0), diaActual(0), mesActual(0), anioActual(0) {}

// Métodos para establecer y obtener el nombre.
void Persona::SetNombre(string nom) 
    {
        nombre = nom;
    }

string Persona::GetNombre() const 
    {
        return nombre;
    }

// Métodos para establecer y obtener la fecha de nacimiento.
void Persona::SetDia(int d) 
    {
        dia = d;
    }

int Persona::GetDia() const 
    {
        return dia;
    }

void Persona::SetMes(int m) 
    {
        mes = m;
    }

int Persona::GetMes() const 
    {
        return mes;
    }

void Persona::SetAnio(int a) 
    {
        anio = a;
    }

int Persona::GetAnio() const 
    {
        return anio;
    }

// Métodos para establecer y obtener la fecha actual.
void Persona::SetDiaActual(int da) 
    {
        diaActual = da;
    }

int Persona::GetDiaActual() const 
    {
        return diaActual;
    }

void Persona::SetMesActual(int ma) 
    {
        mesActual = ma;
    }

int Persona::GetMesActual() const 
    {
        return mesActual;
    }

void Persona::SetAnioActual(int aa) 
    {
        anioActual = aa;
    }

int Persona::GetAnioActual() const 
    {
        return anioActual;
    }

// Método para calcular la edad.
int Persona::obtenerEdad() const 
    {
        int edad = anioActual - anio;

        // Ajusta si aún no ha cumplido años este año.
        if (mesActual < mes || (mesActual == mes && diaActual < dia)) 
        {
            edad--;
        }

        return edad;
    }