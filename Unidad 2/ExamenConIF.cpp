
	//Juan Pablo Soriano Gonz醠ez 24041242

#include <stdio.h> //gets,puts,fflush,system
//#include <conio.h> //getch
//#include<stdlib.h> //system
#include <iostream> //cin, cout //Importante
#include <cmath> //operadores matematicos y constantes
#include <windows.h> //Para el SetConsole
using namespace std; //Importante
int main()
{
	SetConsoleOutputCP(CP_UTF8);//Configura la salida
	SetConsoleCP(CP_UTF8);//Configura la entrada
	
	// Juan Pablo Soriano Gonz谩lez 24041242
	
	float cali1, cali2, cali3;
	float eva1, eva2, evaF;
	float caliEva1, caliEva2, caliEvaF, caliFinal;
	eva1 = 10;
	eva2 = 10;
	evaF = 80;
	
	cout<<"*Las calificaciones deben de ser de 0 a 100*"<<endl;
	cout<<"Ingresa la primera calificaci贸n: \n";
	cin>>cali1;
	cout<<"Ingresa la segunda calificaci贸n: \n";
	cin>>cali2;
	cout<<"Ingresa la tercera calificaci贸n: \n";
	cin>>cali3;
	system("pause");
	
	//C谩lculos
	caliEva1 = trunc(eva1*(cali1/100));
	caliEva2 = trunc(eva2*(cali2/100));
	caliEvaF = trunc(evaF*(cali3/100));
	caliFinal = trunc(caliEva1+caliEva2+caliEvaF);
	
	//Impresi贸n de datos
	system("cls");
	cout<<"\nSu calificaci贸n de la primera evaluaci贸n es: "<<caliEva1<< endl;
	cout<<"Su calificaci贸n de la segunda evaluaci贸n es: "<<caliEva2<< endl;
	cout<<"Su calificaci贸n de la evaluaci贸n final es: "<<caliEvaF<< endl;
	cout<<"Su calificacion final es: "<<caliFinal;
	
	return 0;
}
	
