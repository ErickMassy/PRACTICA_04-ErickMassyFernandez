// Materia: Programación I, Paralelo 1

// Autor: Erick G. Massy Fernandez

// Fecha creación: 21/09/2023

// Fecha modificación: 21/09/2023

// Número de ejericio: 1

// Problema planteado: Año de Nacimiento
#include <iostream>

using namespace std;


bool Bisiesto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int ano;


    cout << "Por favor, introduce un año: ";
    cin >> ano;


    if (Bisiesto(ano)) {
        cout << ano << " es un año bisiesto." << endl;
    } else {
        cout << ano << " no es un año bisiesto." << endl;
    }

    return 0;
}
