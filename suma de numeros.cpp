//Contar la suma de los n�meros enteros positivos introducidos por teclado. Se consideran dos variables 
//enteras numero y contador (contar� la suma de n�meros de enteros positivos). 
//Se supone que se leen n�meros positivos y se detiene el bucle cuando
//se lee un n�mero negativo o cero.

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
