#include "include/rectangulo.hpp"

#include <iostream>

using namespace std;

int main() 
    {
        // Crea un puntero a un objeto Rectangulo.
        Rectangulo* rectangulito = new Rectangulo();

        float base, altura;

        cout << "CUADRADITO ESTIRADO" << endl;
        cout << "*******************" << endl;

        // Solicita la base y altura del rectángulo.
        cout << "Ingresa la base del rectangulo: ";
        cin >> base;

        rectangulito->SetBase(base);

        cout << "Ingresa la altura del rectangulo: ";
        cin >> altura;

        rectangulito->SetAltura(altura);

        // Muestra los resultados.
        cout << endl << "DATOS DEL RECTANGULIN" << endl << endl;
        cout << "Base: " << rectangulito->GetBase() << endl;
        cout << "Altura: " << rectangulito->GetAltura() << endl;
        cout << "Area: " << rectangulito->area() << endl;
        cout << "Perimetro: " << rectangulito->perimetro() << endl;

        // Libera la memoria asignada.
        delete rectangulito;

        return 0;
    }