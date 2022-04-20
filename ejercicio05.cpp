//Nombre: Jesica Valdez
//TP N: 1
//EJ N: 05
//Comentarios: Un comercio vende tres marcas de alfajores distintas A, B y C. Hacer un programa para ingresar por teclado
//la cantidad de alfajores vendidos de cada una de las tres marcas y luego se informe el porcentaje de ventas para cada una de ellas.
//Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el programa calculará e informará A: 50%, B: 12,50%
//y C: 37,50%.


#include<iostream>
using namespace std;

int main(){
	int ma, mb, mc, porcentajedeva, porcentajedevb, porcentajedec, totalventa;
	cout << "Ingrese cantidad de alfajores vendidos de la marca A: ";
	cin >> ma;
	cout << "Ingrese cantidad de alfajores vendidos de la marca B: ";
	cin >> mb;
	cout << "Ingrese cantidad de alfajores vendidos de la marca C: ";
	cin >> mc;

	totalventa = ma + mb + mc;
	porcentajedeva = (ma * 100) /totalventa;
	porcentajedevb = (mb * 100) /totalventa;
    porcentajedec = (mc * 100) /totalventa;

	cout << "El procentaje de venta que realizo la Marca A es: " << porcentajedeva;
	cout << "% El procentaje de venta que realizo la Marca B es: " << porcentajedevb;
	cout << "% El procentaje de venta que realizo la Marca C es: " << porcentajedec << "%.";
	return 0;
}
