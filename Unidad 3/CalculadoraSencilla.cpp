
	//Juan Pablo Soriano Gonz醠ez 24041242

#include <stdio.h> //gets,puts,fflush,system
//#include <conio.h> //getch
//#include<stdlib.h> //system
#include <iostream> //cin, cout //Importante
#include <windows.h> //Para el SetConsole
using namespace std; //Importante
int main()
{
	SetConsoleOutputCP(CP_UTF8);//Configura la salida
	SetConsoleCP(CP_UTF8);//Configura la entrada
	
	float num1, num2, resultado;
	float sum, res, mul, div;
    int opcion;

    // Solicitar los dos n煤meros
    cout << "Dame el primer n煤mero: ";
    cin >> num1;
    cout << "Dame el segundo n煤mero: ";
    cin >> num2;

    // Men煤 para seleccionar la operaci贸n
    cout << "\nElige la operaci贸n que deseas realizar: " << endl;
    cout << "1. Sumar" << endl;
    cout << "2. Restar" << endl;
    cout << "3. Multiplicar" << endl;
    cout << "4. Dividir" << endl;
    cout << "Opci贸n: ";
    cin >> opcion;

	//Soluci贸n con switch

    // Realizar la operaci贸n seg煤n la opci贸n elegida
    switch (opcion) {
        case 1:
            resultado = num1 + num2;
            cout << "\nLa suma es: " << resultado << endl;
            break;
        case 2:
            resultado = num1 - num2;
            cout << "\nLa resta es: " << resultado << endl;
            break;
        case 3:
            resultado = num1 * num2;
            cout << "\nLa multiplicaci贸n es: " << resultado << endl;
            break;
        case 4:
            if (num2 != 0) {
                resultado = num1 / num2;
                cout << "\nLa divisi贸n es: " << resultado << endl;
            } else {
                cout << "\nError: No se puede dividir entre cero." << endl;
            }
            break;
        default:
            cout << "\nOpci贸n no v谩lida." << endl;
            break;
    }

	//Soluci贸n con if

	/*if (opcion == 1) {
        cout << "\nEsta es tu suma: " << sum;
    } else if (opcion == 2) {
        cout << "\nEsta es tu resta: " << res;
    } else if (opcion == 3) {
        cout << "\nEsta es tu multiplicaci贸n: " << mul;
    } else if (opcion == 4) {
        if (num2 != 0) {
            cout << "\nEsta es tu divisi贸n: " << div;
        } else {
            cout << "\nError: No se puede dividir entre cero.";
        }
    } else {
        cout << "\nOpci贸n no v谩lida.";
    }*/
    return 0;
}
