//Nombre: Jesica Valdez
//TP N: 1
//EJ N: 06
//Comentarios: Hacer un programa para que un comercio ingrese por teclado la recaudaci�n en pesos para cada una de las cuatro semanas
//del mes. El programa debe listar la recaudaci�n promedio por semana y el porcentaje de recaudaci�n por semana.
//Ejemplo. Si se ingresa $ 1600, $ 1200, $ 4800 y $ 400 se listara como recaudaci�n promedio $ 2000 y
//como porcentajes por semana: 20%, 15%, 60% y 5%.


#include<iostream>
using namespace std;

int main(){
	int rprimersmn, rsegundasmn, rtercersmn, rcuartasmn, totalventa, recaudacionps, promsem1, promsem2, promsem3, promsem4;
	cout << "Ingrese la recaudaci�n obtenida de la primer semana: $";
	cin >> rprimersmn;

	cout << "Ingrese la recaudaci�n obtenida de la segunda semana: $";
	cin >> rsegundasmn;

	cout << "Ingrese la recaudaci�n obtenida de la tercer semana: $";
	cin >> rtercersmn;

	cout << "Ingrese la recaudaci�n obtenida de la cuarta semana: $";
	cin >> rcuartasmn;

	totalventa = rprimersmn + rsegundasmn + rtercersmn + rcuartasmn;
	recaudacionps = totalventa /4;

	promsem1 = (rprimersmn * 100) / totalventa;
	promsem2 = (rsegundasmn * 100) / totalventa;
	promsem3 = (rtercersmn * 100) / totalventa;
	promsem4 = (rcuartasmn * 100) / totalventa;

	cout << "El promedio obtenido de la primer semana es de: " << promsem1 << "%.";
	cout << " El promedio obtenido de la segunda semana es de: " << promsem2 << "%.";
	cout << " El promedio obtenido de la tercer semana es de: " << promsem3 << "%.";
	cout << " El promedio obtenido de la cuarta semana es de: " << promsem4 << "%.";

	return 0;

}
