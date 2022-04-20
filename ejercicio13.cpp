//Nombre: Jesica Valdez
//TP N: 1
//EJ N: 13
//Comentarios: Hacer un programa para un cajero automático para ingresar un importe a retirar y convertir el mismo en la cantidad
//de billetes de $ 1.000, $ 500, $ 200 y $ 100 a entregar.
/*Ejemplo 1: Si el importe a retirar es $ 2.500 se mostrará por pantalla que se deberán entregar 2 billetes de $ 1.000,
1 billete de $ 500 y 0 billetes de $ 200 y $ 100.
Ejemplo 2: Si el importe a retirar es $ 3.400 se mostrará por pantalla que se deberán entregar 3 billetes de $ 1.000,
2 billetes de $ 200 y 0 billetes de $ 500 y $ 100.
Ejemplo 3: Si el importe a retirar es $ 300 se mostrará por pantalla que se deberán entregar 1 billete de $ 200,
1 billete de $ 100, 0 billetes de $ 1.000 y 0 billetes de $ 500.
Recordatorio. Considerar en todos los casos que el importe a retirar es en todos los casos múltiplo de $ 100
ya que el cajero no cuenta con billetes de $ 50, $ 20 o $ 10. */



#include<iostream>
using namespace std;

int main(){
    int dinero;
    int mil,quinientos,doscientos,cien,resto;

    cout<< "Ingrese la cantidad de dinero a retirar: $";
    cin>> dinero;
    mil= dinero/1000;
    quinientos=(dinero%1000)/500;
    doscientos=(dinero%500)/200;
    cien=(dinero%200)/100;
    resto=dinero%100;

    cout<< "la cantidad de billete/s a entregar es: " << endl <<mil<<" billete/s de mil, " << endl <<quinientos<< " billete/s de quinientos, "<<endl << doscientos<< " billete/s de doscientos, "<<endl << cien << " y billete/s de cien"<< endl;
    cout<< "Quedan: $ " <<endl << resto<< " del cual no disponemos de billete/s esa denominacion";

	return 0;
}
