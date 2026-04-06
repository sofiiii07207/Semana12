//ejercicio 1: suma de matrices (identidad)

#include <iostream>
#include <iomanip>

using namespace std;

int main() {


    // identidad 4x4

    int identidad[4][4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            identidad[i][j] = (i == j) ? 1 : 0;
        }
    }

    // matriz usuario 4x4

    int usuario[4][4];
    cout << "Ingrese valores para una matriz 4x4 (fila por fila)\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Elemento [" << i+1 << "," << j+1 << "]: ";
            cin >> usuario[i][j];
        }
    }

    // suma matrices

    int suma[4][4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            suma[i][j] = identidad[i][j] + usuario[i][j];
        }
    }

    // resultado

    cout << "\nResultado de la suma (matriz 4x4):\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << setw(4) << suma[i][j];
        }
        cout << endl;
    }

    return 0;
}
