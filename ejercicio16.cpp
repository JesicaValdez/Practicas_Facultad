//Nombre: Jesica Valdez
//TP N�: 2
//Ej N�: 16
//Comentarios: Hacer un programa para ingresar por teclado cuatro n�meros. Si los valores que se ingresaran est�n ordenados
//en forma creciente, emitir el mensaje �Conjunto Ordenado�, caso contrario emitir el mensaje: �Conjunto Desordenado�.
//Ejemplo 1: si los n�meros que se ingresan son 8, 10, 12 y 14, entonces est�n ordenados.
//Ejemplo 2: si los n�meros que se ingresan son 8, 12, 12 y 14, entonces est�n ordenados.
//Ejemplo 3: si los n�meros que se ingresan son 10, 8, 12 y 14, entonces est�n desordenados.


#include<iostream>
using namespace std;

int main(){
	int num1, num2, num3, num4;

	cout << "Ingrese primer n�mero: " ;
	cin >> num1 ;

	cout << "Ingrese segundo n�mero: " ;
	cin >> num2 ;

	cout << "Ingrese tercer n�mero: " ;
	cin >> num3 ;

	cout << "Ingrese cuarto n�mero: " ;
	cin >> num4 ;

	if ( num1 <=  num2 && num2 <= num3 && num3 <= num4){
        cout << "Conjunto Ordenado" << endl ;
	}
	else{
        cout << "Conjunto Desordenado" << endl ;
	}
	return 0;

}
