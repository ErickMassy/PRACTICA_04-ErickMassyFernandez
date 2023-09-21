// Materia: Programación I, Paralelo 1

// Autor: Erick G. Massy Fernandez

// Fecha creación: 21/09/2023

// Fecha modificación: 21/09/2023

// Número de ejericio: 6

// Problema planteado: Estacionamiento
#include <iostream>
using namespace std;


float calcularCostoEstacionamiento(int horaEntrada, int minutoEntrada, int horaSalida, int minutoSalida) {

    int tiempoTotal = (horaSalida - horaEntrada) * 60 + (minutoSalida - minutoEntrada);


    if (tiempoTotal <= 60) {
        return 8.0;
    } else {

        int horasCompletas = tiempoTotal / 60;
        int minutosRestantes = tiempoTotal % 60;


        if (minutosRestantes > 0) {
            horasCompletas++;
        }


        return 8.0 + (horasCompletas - 1) * 3.0;
    }
}

int main() {
    int horaEntrada, minutoEntrada, horaSalida, minutoSalida;


    horaEntrada = 9;
    minutoEntrada = 35;
    horaSalida = 10;
    minutoSalida = 15;
    float costo1 = calcularCostoEstacionamiento(horaEntrada, minutoEntrada, horaSalida, minutoSalida);
    cout << "Tiempo: 1 hora - Costo: " << costo1 << " Bs." << endl;


    horaEntrada = 11;
    minutoEntrada = 10;
    horaSalida = 12;
    minutoSalida = 20;
    float costo2 = calcularCostoEstacionamiento(horaEntrada, minutoEntrada, horaSalida, minutoSalida);
    cout << "Tiempo: 2 horas - Costo: " << costo2 << " Bs." << endl;

 
    horaEntrada = 17;
    minutoEntrada = 55;
    horaSalida = 21;
    minutoSalida = 30;
    float costo3 = calcularCostoEstacionamiento(horaEntrada, minutoEntrada, horaSalida, minutoSalida);
    cout << "Tiempo: 4 horas - Costo: " << costo3 << " Bs." << endl;

    return 0;
}
