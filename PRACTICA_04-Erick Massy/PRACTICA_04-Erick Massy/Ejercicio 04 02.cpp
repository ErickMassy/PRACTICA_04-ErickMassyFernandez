// Materia: Programación I, Paralelo 1

// Autor: Erick G. Massy Fernandez

// Fecha creación: 21/09/2023

// Fecha modificación: 21/09/2023

// Número de ejericio: 2

// Problema planteado: Calcular Edad
#include <iostream>
#include <ctime>

using namespace std;


int calcularEdad(int yearNacimiento, int mesNacimiento, int diaNacimiento) {
    time_t tiempoActual = time(nullptr);
    tm* fechaActual = localtime(&tiempoActual);

    int yearActual = fechaActual->tm_year + 1900;
    int mesActual = fechaActual->tm_mon + 1;
    int diaActual = fechaActual->tm_mday;

    int edad = yearActual - yearNacimiento;


    if (mesActual < mesNacimiento || (mesActual == mesNacimiento && diaActual < diaNacimiento)) {
        edad--;
    }

    return edad;
}

int main() {
    int yearNacimiento, mesNacimiento, diaNacimiento;


    cout << "Introduce el año de nacimiento: ";
    cin >> yearNacimiento;
    cout << "Introduce el mes de nacimiento: ";
    cin >> mesNacimiento;
    cout << "Introduce el día de nacimiento: ";
    cin >> diaNacimiento;

    int edad = calcularEdad(yearNacimiento, mesNacimiento, diaNacimiento);

    cout << "La edad es: " << edad << " años." << endl;

    return 0;
}
