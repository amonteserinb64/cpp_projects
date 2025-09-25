#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main(){
    int x;
    cout << "Introduce tu primer número: ";
    cin >> x;

    int y;
    cout << "Introduce tu segundo número: ";
    cin >> y;

    cout << "Quieres sumar (1), restar(2), multiplicar (3) o dividir (4) estos números? ";
    int z;
    cin >> z;

    if (z = 1) {
        cout << "El resultado es: " << x + y << endl;
    } else if (z == 2) {
        cout << "El resultado es: " << x - y << endl;
    } else if (z == 3) {
        cout << "El resultado es: " << x * y << endl;
    } else if (z == 4) {
        if (y != 0) {
            cout << "El resultado es: " << x / y << endl;
        } else {
            cout << "Error: División por cero no está permitida." << endl;
        }
    } else {
        cout << "Operación no válida." << endl;
    } 
    cout << "Soy peruano";
    return 0;
}
    