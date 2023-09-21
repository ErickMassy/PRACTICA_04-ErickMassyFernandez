// Materia: Programación I, Paralelo 1

// Autor: Erick G. Massy Fernandez

// Fecha creación: 21/09/2023

// Fecha modificación: 21/09/2023

// Número de ejericio: 8

// Problema planteado: Computadoras
#include <iostream>

using namespace std;


double calcularPrecio(double p, int c) {
    double t = p * c;
    double d;

    if (c < 5) {
        d = 0.10; 
    } else if (c < 10) {
        d = 0.20; 
    } else {
        d = 0.40; 
    }

    double v = t * d;
    double totalConDescuento = t - v;

    return totalConDescuento;
}

int main() {
    double p;
    int c;

    cout << "Ingrese el precio unitario: ";
    cin >> p;

    cout << "Ingrese la cantidad de computadoras: ";
    cin >> c;

    double totalConDescuento = calcularPrecio(p, c);

    cout << "Precio total con descuento: $" << totalConDescuento << endl;

    return 0;
}
