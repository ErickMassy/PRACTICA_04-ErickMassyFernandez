// Materia: Programaci�n I, Paralelo 1

// Autor: Erick G. Massy Fernandez

// Fecha creaci�n: 21/09/2023

// Fecha modificaci�n: 21/09/2023

// N�mero de ejericio: 1

// Problema planteado: A�o de Nacimiento
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


    cout << "Por favor, introduce un a�o: ";
    cin >> ano;


    if (Bisiesto(ano)) {
        cout << ano << " es un a�o bisiesto." << endl;
    } else {
        cout << ano << " no es un a�o bisiesto." << endl;
    }

    return 0;
}
