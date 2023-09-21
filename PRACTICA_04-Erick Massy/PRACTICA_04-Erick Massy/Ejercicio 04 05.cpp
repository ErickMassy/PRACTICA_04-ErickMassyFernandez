// Materia: Programación I, Paralelo 1

// Autor: Erick G. Massy Fernandez

// Fecha creación: 21/09/2023

// Fecha modificación: 21/09/2023

// Número de ejericio: 5

// Problema planteado: UCB
#include <iostream>
#include <string>
using namespace std;


struct Materia {
    string nombre;
    string paralelo;
    string docente;
    float notaPeriodo1;
    float notaPeriodo2;
    float notaPeriodo3;
};


float calcularNotaFinal(const Materia& materia) {
    return (materia.notaPeriodo1 + materia.notaPeriodo2 + materia.notaPeriodo3) / 3.0;
}


string determinarAprobacion(float notaFinal) {
    return (notaFinal >= 70.0) ? "Aprobado" : "Reprobado";
}

int main() {
    Materia materia;

    cout << "Registro Académico de la UCB" << endl;
    cout << "Ingrese el nombre de la materia: ";
    getline(cin, materia.nombre);
    cout << "Ingrese el paralelo: ";
    getline(cin, materia.paralelo);
    cout << "Ingrese el nombre del docente: ";
    getline(cin, materia.docente);
    cout << "Ingrese la nota del período 1: ";
    cin >> materia.notaPeriodo1;
    cout << "Ingrese la nota del período 2: ";
    cin >> materia.notaPeriodo2;
    cout << "Ingrese la nota del período 3: ";
    cin >> materia.notaPeriodo3;


    float notaFinal = calcularNotaFinal(materia);

    string resultado = determinarAprobacion(notaFinal);


    cout << "Resumen del Registro Académico" << endl;
    cout << "Materia: " << materia.nombre << endl;
    cout << "Paralelo: " << materia.paralelo << endl;
    cout << "Docente: " << materia.docente << endl;
    cout << "Nota Final: " << notaFinal << endl;
    cout << "Resultado: " << resultado << endl;

    return 0;
}
