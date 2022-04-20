//Nombre: Jesica Valdez
//TP N: 1
//EJ N: 1
//Comentarios: Hacer un programa para ingresar por teclado la cantidad de horas trabajadas por un operario y el valor que se le paga por hora trabajada y listar por pantalla el sueldo que le corresponda.

#include<iostream>
using namespace std;

int main(){
    int hrst, valorhr, sueldo;
    cout << "Ingresa cantidad de horas trabajadas: ";
    cin >> hrst;
    cout << "Ingresa valor por hora: ";
    cin >> valorhr;
    sueldo = hrst * valorhr;
    cout << "Tu sueldo neto a cobrar es: " << sueldo;

	return 0;
}
