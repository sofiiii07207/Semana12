#include <iostream>
#include <iomanip>
using namespace std;

int main() {


    // matriz 3x3

    int matriz[3][3] = {
        {2, 1, 3},
        {8, 9, 6},
        {0, 7, 9}
    };

    // matriz vacía 


    int transpuesta[3][3];

    // Calculo transpuesta

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transpuesta[i][j] = matriz[j][i];
        }
    }

    // matriz original

    cout << "Matriz original:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << setw(4) << matriz[i][j];
        }
        cout << endl;
    }

    // matriz transpuesta
    cout << "\nMatriz transpuesta:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << setw(4) << transpuesta[i][j];
        }
        cout << endl;
    }

    return 0;
}
