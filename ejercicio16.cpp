//Nombre: Jesica Valdez
//TP N´: 2
//Ej N´: 16
//Comentarios: Hacer un programa para ingresar por teclado cuatro números. Si los valores que se ingresaran están ordenados
//en forma creciente, emitir el mensaje “Conjunto Ordenado”, caso contrario emitir el mensaje: “Conjunto Desordenado”.
//Ejemplo 1: si los números que se ingresan son 8, 10, 12 y 14, entonces están ordenados.
//Ejemplo 2: si los números que se ingresan son 8, 12, 12 y 14, entonces están ordenados.
//Ejemplo 3: si los números que se ingresan son 10, 8, 12 y 14, entonces están desordenados.


#include<iostream>
using namespace std;

int main(){
	int num1, num2, num3, num4;

	cout << "Ingrese primer número: " ;
	cin >> num1 ;

	cout << "Ingrese segundo número: " ;
	cin >> num2 ;

	cout << "Ingrese tercer número: " ;
	cin >> num3 ;

	cout << "Ingrese cuarto número: " ;
	cin >> num4 ;

	if ( num1 <=  num2 && num2 <= num3 && num3 <= num4){
        cout << "Conjunto Ordenado" << endl ;
	}
	else{
        cout << "Conjunto Desordenado" << endl ;
	}
	return 0;

}
