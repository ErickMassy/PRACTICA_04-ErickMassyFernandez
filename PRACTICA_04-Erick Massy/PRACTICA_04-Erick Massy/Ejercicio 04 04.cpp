// Materia: Programación I, Paralelo 1

// Autor: Erick G. Massy Fernandez

// Fecha creación: 21/09/2023

// Fecha modificación: 21/09/2023

// Número de ejericio: 4

// Problema planteado: Rango
#include <iostream>
using namespace std;


void leerCalificaciones(int n, int calificaciones[]) {
    for (int i = 0; i < n; i++) {
        do {
            cout << "Ingrese la calificación " << i + 1 << " (entre 1 y 100): ";
            cin >> calificaciones[i];
        } while (calificaciones[i] < 1 || calificaciones[i] > 100);
    }
}


int calcularSumatoria(int n, const int calificaciones[]) {
    int sumatoria = 0;
    for (int i = 0; i < n; i++) {
        sumatoria += calificaciones[i];
    }
    return sumatoria;
}


float calcularPromedio(int n, const int calificaciones[]) {
    int sumatoria = calcularSumatoria(n, calificaciones);
    return static_cast<float>(sumatoria) / n;
}

int main() {
    int N;

    cout << "Ingrese la cantidad de calificaciones: ";
    cin >> N;


    if (N <= 0) {
        cout << "La cantidad de calificaciones debe ser mayor que 0." << endl;
        return 1; 
    }

    int calificaciones[N];


    leerCalificaciones(N, calificaciones);


    int sumatoria = calcularSumatoria(N, calificaciones);
    float promedio = calcularPromedio(N, calificaciones);

    cout << "La sumatoria de las calificaciones es: " << sumatoria << endl;
    cout << "El promedio de las calificaciones es: " << promedio << endl;

    return 0;
}
