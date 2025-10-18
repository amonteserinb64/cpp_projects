#include <iostream>
#include <cmath>
using namespace std;

int main () {
    double notas [3][5] = { {0, 0, 0, 0, 0},
                            {0, 0, 0, 0, 0},
                            {0, 0, 0, 0, 0} };

    double suspendidas = 0;
    double diez = 0;
    double media = 0;
    int total = 0;

    cout << "Introduce las notas de los 3 alumnos (5 notas por cada alumno):" << endl;

    for (int i = 0 ; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "Introduce la nota " << (j + 1) << " del alumno " << (i + 1) << ": ";
            cin >> notas[i][j];
        
            if (notas[i][j] < 5) {
                suspendidas++;
            }
            if (notas[i][j] == 10) {
                diez++;
            }
            total = total + notas[i][j];

            media = total / 5;

        if ((media >= 5 && suspendidas <= 2 && diez > 0) || (media >= 5 && suspendidas <= 1)) {
            cout << "El alumno" << (i + 1) << "pasa de curso con un: " << media << endl;
        }
        else {
            cout << "El alumno " << (i + 1) << "no pasa de curso con un: " << media << endl;
        }

        suspendidas = 0;
        diez = 0;
        total = 0;
        media = 0;
        
        }
    }

    return 0;


}