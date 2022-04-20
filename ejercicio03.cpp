//Nombre: Jesica Valdez
//TP N: 1
//EJ N: 03
//Comentarios: Una concesionaria de autos paga a los vendedores un sueldo fijo de $ 15.000 más $ 2.000 de premio por cada auto
//vendido. Hacer un programa que permita ingresar por teclado la cantidad de autos vendidos por un vendedor y luego informar
//por pantalla el sueldo total a pagar.
//Ejemplo. Si la cantidad de autos vendidos fuera 4 entonces el sueldo total a pagar es de $ 23.000.


#include<iostream>
using namespace std;

int main(){
	int cantav, premio, sueldo, sueldofinal;
    premio = 2000;
    sueldo = 15000;

    cout << "Ingresar la cantidad de autos vendidos: ";
    cin >> cantav;

    sueldofinal = sueldo + (premio * cantav);

    cout << endl;
    cout << "El sueldo correspondiente a cobrar es: $ " << sueldofinal;
}
