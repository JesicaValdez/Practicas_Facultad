//Nombre: Jesica Valdez
//TP N: 1
//EJ N: 09
//Comentarios: Hacer un programa para ingresar por teclado una cantidad de minutos y mostrar por pantalla a cuantas horas y minutos
//equivalen.
//Ejemplo 1: si se ingresan 380 minutos el programa mostrar? por pantalla que equivalen a 6 horas y 20 minutos.
//Ejemplo 2: si se ingresan 720 minutos el programa mostrar? por pantalla que equivalen a 12 horas y 0 minutos.
//Ejemplo 3: si se ingresan 50 minutos el programa mostrar? por pantalla que equivalen a 0 horas y 50 minutos


#include<iostream>
using namespace std;

int main(){
	int cantmin, hora, resto;
	cout << "Ingresar por pantalla cantidad de minutos:";
	cin >> cantmin;

	hora = cantmin / 60;
	resto = cantmin % 60;

	cout << "El tiempo equivalente es: " << hora << "hrs, " << resto << " minutos." << endl;
	return 0;
}
