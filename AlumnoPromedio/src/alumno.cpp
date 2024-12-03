#include "../include/alumno.hpp"

// Constructor por defecto.
Alumno::Alumno() 
    : cedula(""), nombre(""), nota1(0.0), nota2(0.0), nota3(0.0) {}

// Métodos Setters.
void Alumno::SetCedula(string ced) 
    {
        cedula = ced;
    }

void Alumno::SetNombre(string nom) 
    {
        nombre = nom;
    }

void Alumno::SetNota1(float n1) 
    {
        nota1 = n1;
    }

void Alumno::SetNota2(float n2) 
    {
        nota2 = n2;
    }

void Alumno::SetNota3(float n3) 
    {
        nota3 = n3;
    }

// Métodos Getters.
string Alumno::GetCedula() const 
    {
        return cedula;
    }

string Alumno::GetNombre() const 
    {
        return nombre;
    }

float Alumno::GetNota1() const 
    {
        return nota1;
    }

float Alumno::GetNota2() const 
    {
        return nota2;
    }

float Alumno::GetNota3() const 
    {
        return nota3;
    }

// Método para calcular la nota final.
float Alumno::NotaFinal() const 
    {
        return (nota1 + nota2 + nota3) / 3;
    }

// Método para determinar si aprobó o no.
string Alumno::AproRepro() const 
    {
        return NotaFinal() >= 48.00 ? "En Horabuena Has Aprobado!" : "Siamo Fuori Di La Copa...";
    }