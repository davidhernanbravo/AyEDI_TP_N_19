#include "include/articulo.hpp"

#include <iostream>

using namespace std;

int main() 
{
    Articulo articulo;
    float costo;
    
    cout << "ARTICULOS LOKOS" << endl;
    cout << "***************" << endl;
    cout << "Ingresa el costo base del articulo: ";
    cin >> costo;

    

    // Establece el costo base.
    articulo.SetCostoBase(costo);

    // Muestra los resultados en pantalla.
    cout << endl<< "PRECIOS DEL ARTICULO" << endl << endl;
    cout << "Costo Base: $" << articulo.GetCostoBase() << endl;
    cout << "PVP al Mayor: $" << articulo.PVPMayor() << endl;
    cout << "PVP al Detal: $" << articulo.PVPDetal() << endl << endl;
    cout << "MATANGA DIJO LA CHANGA!" << endl;

    return 0;
}