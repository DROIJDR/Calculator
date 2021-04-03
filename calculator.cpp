//Codigo de programa para una calculadora
//Practicando por Juan


#include <iostream>		//Libreria
#include <math.h>		//Libreria matematica

using namespace std;

double Numero(){

	double n1;
	cout << "Pon un numero: " << endl;
	
	cin >> n1;
	return n1;
}
double Suma(double n1, double n2){
	double suma = (n1 + n2);
	return suma;
}
double Resta(double n1, double n2){
	double resta = (n1 - n2);
	return resta;
}
double Multi(double n1, double n2){
	double multi = (n1 * n2);
	return multi;
}
double Division(double n1, double n2){
	double division = (n1 / n2);
	return division;
}
int main()					//Main
{
	double A, B, C = 0;			//Tres variables, identificando C con valor 0.
	char X;						//Variable CHAR para el switch

	do
	{
		system("clear");
		cout << "Selecciona una de las operaciones matematicas" << endl;
		cout << "\t1. Suma" << endl;
		cout << "\t2. Resta" << endl;
		cout << "\t3. Multiplicacion" << endl;
		cout << "\t4. Division" << endl;
		cout << "\t5. Por Ciento" << endl;
		cout << "\t6. Raiz Cuadrada" << endl;
		cout << "\t7. Potencia" << endl;
		cout << "\t8. Salida" << endl;
		cin >> X;

		switch (X) {

			//Suma
		case '1': {
			system("clear");
			A = Numero();
			B = Numero();
			cout << "La suma de " << A << " + " << B << " es: " << Suma(A,B)<< "\n\n";
			cout << "Oprima enter para continuar \n";
			cin.get();
			cin.get();
			break;
		}

				  //Resta
		case '2': {
			system("clear");
			A = Numero();
			B = Numero();
			cout << "La Resta de " << A << " - " << B << " es: " << Resta(A,B)<< "\n\n";
			cout << "Oprima enter para continuar \n";
			cin.get();
			cin.get();
			break;
		}

				  //Multiplicacion
		case '3': {
			system("clear");
			A = Numero();
			B = Numero();
			cout << "La multiplicacion de " << A << " * " << B << " es: " << Multi(A,B) << "\n\n";
			cout << "Oprima enter para continuar \n";
			cin.get();
			cin.get();
			break;
		}
				  //Division
		case '4': {
			system("clear");
			A = Numero();
			B = Numero();

			if (B == 0) {
				cout << "ERROR NO PUEDES PONER EL 0 COMO DIVISOR" << "\n";
				cout << "Oprima enter para continuar \n";
				cin.get();
				cin.get();
			}
			else {
				cout << "La division de " << A << " / " << B << " es: " << Division(A,B) << "\n\n";
				cout << "Oprima enter para continuar \n";
				cin.get();
				cin.get();
			}
			break;
		}
			//Por Ciento

		case '5': {
			system("clear");
			cout << "Pon un numero para sacar el porcentaje: " << endl;
			cin >> A;
			cout << "Pon el valor porcentual a calcular: " << endl;
			cin >> B;
			C = (A * B / 100);			//Hace la operacion de por ciento de A y B
			cout << "El " << B << "%" << " de " << A << " es: " << C << endl;
			cout << "Oprima enter para continuar \n";
			cin.get();
			cin.get();
			break;
		}

				  //Raiz Cuadrada
		case '6': {
			system("clear");
			do{
				cout << "Pon un numero para sacar la raiz cuadrada:" << endl;
				cin >> A;
				
				if (A <= 0) {
					cout << "ERROR\n";
					cout << "Oprima enter para tratarlo nuevamente! \n";
					cin.get();
					cin.get();
				}
				else {
					B = sqrt(A);
					cout << "La raiz cuadrada de " << A << " es: " << B << endl;
					cout << "Oprima enter para continuar \n";
					cin.get();
					cin.get();
				}

			}
            while( A < 0);
			
			break;
		}
				  
		case '7': {
			system("clear");
			cout << "Pon un numero al que deseas elevar a una potencia: " << endl;
			cin >> A;
			cout << "Pon la potencia deseada: " << endl;
			cin >> B;
			C = pow(A, B);
			cout << A << " elevado a la " << B << " es igual a: " << C << endl;
			cout << "Oprima enter para continuar \n";
			cin.get();
			cin.get();
			break;

		}
		
		case '8': {
			cout << "Hasta Luego" << endl;
			break;
		}

		default:
			system("clear");
			cout << "Seleciona otra opcion del (1-8)" << endl;
			cout << "Oprima enter para continuar \n";
			cin.get();
			cin.get();
		}

	}	//END-DO
	while (X != '8');



}//ENDMAIN