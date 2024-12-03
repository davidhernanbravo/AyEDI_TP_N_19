#include "include/alumno.hpp"

#include <iostream>

using namespace std;

int main() 
    {
        Alumno alumno;
        string cedula, nombre;
        float nota1, nota2, nota3;

        cout << "DATOS DEL CHANGO... DIGO ALUMNO" << endl;
        cout << "*******************************" << endl;

        // Solicita datos del alumno.
        cout << "Ingrese la cedula del alumno: ";
        cin >> cedula;

        alumno.SetCedula(cedula);

        cout << "Ingrese el nombre del alumno: ";
        cin.ignore();
        getline(cin, nombre);

        alumno.SetNombre(nombre);

        cout << "Ingrese la nota 1: ";
        cin >> nota1;

        alumno.SetNota1(nota1);

        cout << "Ingrese la nota 2: ";
        cin >> nota2;

        alumno.SetNota2(nota2);

        cout << "Ingrese la nota 3: ";
        cin >> nota3;

        alumno.SetNota3(nota3);

        // Muestra los resultados.
        cout << endl << "STATUS DEL ALUMNO" << endl << endl;
        cout << "Cedula: " << alumno.GetCedula() << endl;
        cout << "Nombre: " << alumno.GetNombre() << endl;
        cout << "Nota Final: " << alumno.NotaFinal() << endl;
        cout << "Estado: " << alumno.AproRepro() << endl;

        return 0;
    }