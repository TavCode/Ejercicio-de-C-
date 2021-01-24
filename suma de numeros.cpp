//Contar la suma de los números enteros positivos introducidos por teclado. Se consideran dos variables 
//enteras numero y contador (contará la suma de números de enteros positivos). 
//Se supone que se leen números positivos y se detiene el bucle cuando
//se lee un número negativo o cero.

#include <iostream>

using namespace std;

int main(){
	
	int numero, contador = 0;
	
	do{
		cout << "Ingrese un numero: " << endl;
		cin >> numero;
		
		contador += numero;
		
		
	} while (numero >= 0);
	
	cout << "La suma de los numeros positivos es: " + contador;
	
	return 0;
}
