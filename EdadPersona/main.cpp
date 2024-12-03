#include "include/persona.hpp"

#include <iostream>

using namespace std;

int main() 
    {
        // Crea un objeto Persona dinámicamente.
        Persona* persona = new Persona();

        string nombre;
        int dia, mes, anio;
        int diaActual, mesActual, anioActual;

        cout << "DATOS PERSONALES" << endl;
        cout << "****************" << endl;

        // Solicita los datos de la persona.
        cout << "Ingresa el nombre de la persona: ";
        getline(cin, nombre);

        persona->SetNombre(nombre);

        cout << "Ingrese el dia de nacimiento: ";
        cin >> dia;

        persona->SetDia(dia);

        cout << "Ingrese el mes de nacimiento: ";
        cin >> mes;

        persona->SetMes(mes);

        cout << "Ingrese el anio de nacimiento: ";
        cin >> anio;

        persona->SetAnio(anio);

        // Solicita la fecha actual.
        cout << "Ingrese el dia actual: ";
        cin >> diaActual;

        persona->SetDiaActual(diaActual);

        cout << "Ingrese el mes actual: ";
        cin >> mesActual;

        persona->SetMesActual(mesActual);

        cout << "Ingrese el anio actual: ";
        cin >> anioActual;

        persona->SetAnioActual(anioActual);

        // Muestra los resultados.
        cout << endl << "TU EDAD TE DELATA TILIN/A" << endl << endl;
        cout << "Nombre: " << persona->GetNombre() << endl;
        cout << "Edad: " << persona->obtenerEdad() << " anios" << endl;

        // Libera la memoria asignada.
        delete persona;

        return 0;
    }