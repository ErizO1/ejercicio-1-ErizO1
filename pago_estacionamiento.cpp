#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

/*
Funcion que calcula la cantidad a pagar por concepto de estacionamiento
    de 1 a 5 horas, la hora cuesta $10
    de 6 a 10 horas, la hora cuesta $9
    por mas de 10 horas el costo es de $7
*/
float pago_estacionamiento(int horas) {
	int cant = 0;
	if (horas>=0 && horas<=5)
		cant = horas*10;
	if (horas>=6 && horas<=10)
		cant = horas*9;
	if (horas>11)
		cant = horas*7;

	return cant;
}

void casos_de_prueba() {

    cout << "TEST CASES" << endl;
    // Agrega tus casos de prueba

	srand(time(NULL));
	int random = 0;
	float result = 0;

	// Particion 1
	random = -1 * (rand() % 100);
	cout << "Partición 1: random <= 0, Valor = " << random << ", Valor esperado: 0" << endl;
	cout << "pago_estacionamiento(" << random << ") = " << (result = pago_estacionamiento(random)) << endl;
	cout << "Resultado: " << (result == 0 ? "Correcto" : "Incorrecto") << endl;
	cout << "-------------------------------------------" << endl;

	// Particion 2
	random = (rand() % 5) + 1;
	cout << "Partición 2: 1 <= random <= 5, Valor = " << random << ", Valor esperado: " << (random * 10) << endl;
	cout << "pago_estacionamiento(" << random << ") = " << (result = pago_estacionamiento(random)) << endl;
	cout << "Resultado: " << (result == (random * 10) ? "Correcto" : "Incorrecto") << endl;
	cout << "-------------------------------------------" << endl;

	// Particion 3
	random = (rand() % 6) + 5;
	cout << "Partición 3: 6 <= random <= 10, Valor = " << random << ", Valor esperado: " << (random * 9) << endl;
	cout << "pago_estacionamiento(" << random << ") = " << (result = pago_estacionamiento(random)) << endl;
	cout << "Resultado: " << (result == (random * 9) ? "Correcto" : "Incorrecto") << endl;
	cout << "-------------------------------------------" << endl;

	// Particion 4
	random = (rand() % 100) + 11;
	cout << "Partición 4: 10 < random, Valor = " << random << ", Valor esperado: " << (random * 7) << endl;
	cout << "pago_estacionamiento(" << random << ") = " << (result = pago_estacionamiento(random)) << endl;
	cout << "Resultado: " << (result == (random * 7) ? "Correcto" : "Incorrecto") << endl;
	cout << "-------------------------------------------" << endl;
}

int main() {
    casos_de_prueba();
	return 0;
}
