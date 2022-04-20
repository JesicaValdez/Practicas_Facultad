//Nombre:Jesica Valdez
//TP N:1
//EJ N:2
//Comentarios: Hacer un programa que solicite por teclado que se ingresen dos números y luego guardarlos en dos variables distintas. A continuación se deben intercambiar mutuamente los valores en ambas variables y mostrarlos por pantalla.
//Ejemplo: Suponiendo que se ingresan 3 y 8 como valores y que la variables usadas son A y B, entonces A=3 y B=8, pero luego debe quedar A=8 y B=3


#include<iostream>
using namespace std;

int main(){
    int N1,N2,aux;
    cout << "Ingresar primer numero: ";
    cin >> N1;
    cout << "Ingresar el segundo numero: ";
    cin >> N2;
    aux = N1;
    N1 = N2;
    N2 = aux;
    cout << "El primer numero ahora es: " << N1;
    cout << " y el segundo numero ahora es: " << N2;

    return 0;
}
