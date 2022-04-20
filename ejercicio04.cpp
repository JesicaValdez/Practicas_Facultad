//Nombre: Jesica Valdez
//TP N: 1
//EJ N: 04
//Comentarios: //Hacer un programa para ingresar por teclado la cantidad de asientos disponibles en un avión
//y la cantidad de pasajes ocupados y luego calcular e informar el porcentaje de ocupación y el porcentaje de no ocupación del mismo.
//Ejemplo si el avión tiene 200 asientos disponibles y se vendieron 80 pasajes, el porcentaje de ocupación
//que se informará será de un 40% y el porcentaje de no ocupación será de un 60%.


#include<iostream>
using namespace std;

int main(void){
	int avion, asientos, pasajeros, ocupados, libres;
	cout <<"Ingrese la cantidad de asientos disponibles: ";
	cin >> asientos;
	cout << "Ingrese la cantidad de pasajes vendidos: ";
	cin >> pasajeros;

	ocupados = (pasajeros * 100 ) / asientos
	libres = 100 - ocupados

	cout << "Hay " <<ocupados <<"% de asientos ocupados y " <<libres <<"% de asientos libres." <<endl;

    return 0;
}
