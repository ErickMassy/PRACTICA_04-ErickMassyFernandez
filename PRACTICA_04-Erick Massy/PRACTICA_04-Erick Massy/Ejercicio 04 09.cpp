// Materia: Programación I, Paralelo 1

// Autor: Erick G. Massy Fernandez

// Fecha creación: 21/09/2023

// Fecha modificación: 21/09/2023

// Número de ejericio: 9

// Problema planteado: Pago por Hora
#include <iostream>

using namespace std;


double calcularSalarioTotal(double tarifaPorHora, double horasTrabajadas) {
    if (horasTrabajadas > 40) {

        return (40 * tarifaPorHora) + ((horasTrabajadas - 40) * tarifaPorHora * 1.5);
    } else {
        return horasTrabajadas * tarifaPorHora;
    }
}


double calcularImpuestos(double salarioTotal) {
    const double impuestos = 0.10; 
    return salarioTotal * impuestos;
}

int main() {
    double tarifaPorHora, horasTrabajadas, anticipo;


    cout << "Ingrese la tarifa por hora: ";
    cin >> tarifaPorHora;

    cout << "Ingrese las horas trabajadas en la semana: ";
    cin >> horasTrabajadas;

    cout << "Ingrese el anticipo (si no hay, ingrese 0): ";
    cin >> anticipo;


    double salarioTotal = calcularSalarioTotal(tarifaPorHora, horasTrabajadas);


    salarioTotal -= anticipo;


    double totalImpuestos = calcularImpuestos(salarioTotal);


    double salarioNeto = salarioTotal - totalImpuestos;


    cout << "Total ganado: $" << salarioTotal << endl;
    cout << "Total descuentos (Impuestos): $" << totalImpuestos << endl;
    cout << "Pago neto: $" << salarioNeto << endl;

    return 0;
}
