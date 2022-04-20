//Nombre: Jesica Valdez
//TP N´: 2
//Ej N´: 15
//Comentarios: Hacer un programa para ingresar por teclado las cuatro notas de los exámenes obtenidas por un alumno y luego emitir
//uno solo de los carteles deacuerdo a las siguientes condiciones:
//- “Promociona”, si obtuvo en los cuatro exámenes nota 7 o más.
//- “Rinde examen final”, si obtuvo nota 4 o más en por lo menos tres exámenes.
//- “Recupera Parciales”, si obtuvo nota 4 o más en por lo menos uno de los exámenes.
//- “Recursa la materia”, si no aprobó ningún examen parcial.

#include <iostream>
using namespace std;

int main(void){

    float examen_final, promedio, nota, nota1, nota2, nota3, nota4;
    nota1=nota2=nota3=nota4=0;
    nota=0;
    cout<< "Ingrese la primer nota:  " ;
    cin>> nota1;
    if(nota1>=4){
        nota++;
    }
    cout<< "Ingrese la segunda nota:  " ;
    cin>> nota2;
    if(nota2>=4){
        nota++;
    }
    cout<< "Ingrese la tercer nota:  " ;
    cin>> nota3;
    if(nota3>=4){
        nota++;
    }
    cout<< "Ingrese la cuarta nota:  " ;
    cin>> nota4;
    if(nota4>=4){
        nota++;
    }

    promedio=(nota1+nota2+nota3+nota4)/4;

    if(promedio>=7 && nota==4){
        cout<<"Promociona";
        }
        else{
    if(nota>=3){
        cout<<"Rinde examen final";
       }
     else{
    if(nota>=1){
        cout<<"Recupera parciales";
        }
    }
        }
    if(nota==0){
        cout<<"Recursa la materia";
    }

	return 0;
}
