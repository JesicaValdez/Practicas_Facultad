//Nombre: Jesica Valdez
//TP N: 1
//EJ N: 11
//Comentarios: Hacer un programa para ingresar por teclado una cantidad de minutos y mostrar por pantalla a cu�ntos d�as, horas y minutos equivalen.
/*Ejemplo 1: si se ingresan 1520 minutos el programa mostrar� por pantalla que equivalen a 1 d�a, 1 hora y 20 minutos.
Ejemplo 2: si se ingresan 480 minutos el programa mostrar� por pantalla que equivalen a 0 d�a, 8 horas y 0 minutos
*/

#include<iostream>
using namespace std;

int main(){
	int cantidadmins, dias, horas, minutos;
	cout << "Ingresar cantidad de minutos: " << endl;
	cin >> cantidadmins;

    minutos =  cantidadmins % 60;
	horas = ((cantidadmins-minutos) % 1440)/60;
	dias = (cantidadmins -(horas*60)-minutos) / 1440;

	cout << "Los minutos ingresados equivalen a: " << endl << dias << " dias," << horas << " horas y " << minutos << " minutos.";
	return 0;
}
