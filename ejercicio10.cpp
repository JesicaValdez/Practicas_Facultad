//Nombre: Jesica Valdez
//TP N: 1
//EJ N: 10
//Comentarios: Hacer un programa para ingresar por teclado una cantidad de horas y mostrar por pantalla a cuantos d�as y horas equivalen.
/*Ejemplo 1: si se ingresan 26 horas el programa mostrar� por pantalla que equivalen a 1 d�a y 2 horas.
Ejemplo 2: si se ingresan 72 horas el programa mostrar� por pantalla que equivalen a 3 d�as y 0 horas.
Ejemplo 3: si se ingresan 20 horas el programa mostrar� por pantalla que equivalen a 0 d�as y 20 horas.*/


#include<iostream>
using namespace std;

int main(){
	int canthoras, horas, dias;
	cout << "Ingresar por pantalla cantidad de horas: ";
	cin >> canthoras;

	dias = canthoras / 24;
	horas = canthoras % 24;

	cout << "El dato ingresado equivale a: " << dias << " dias, " << horas << " horas.";
	return 0;
}
