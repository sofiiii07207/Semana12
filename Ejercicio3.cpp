#include <iostream>
using namespace std;

int main(){

const int F = 4, C = 4;
int mat[F][C];
cout << "Ingrese los elementos de la matriz 4x4: " << endl;
// ─── Llenar desde teclado ─────────────────────────
for (int i = 0; i < F; i++) {          // fila
    for (int j = 0; j < C; j++) {      // columna
        cout << "mat[" << i << "][" << j << "]: ";
        cin >> mat[i][j];
    }
}

// ─── Imprimir como tabla ──────────────────────────
for (int i = 0; i < F; i++) {
    for (int j = 0; j < C; j++) {
        cout << mat[i][j] << " ";
    }
    cout << endl;   // salto al terminar cada fila
}



int tablero1[4][4] = {{1,0,0,0},{0,1,0,0},{0,0,1,0},{0,0,0,1}};
    
    cout << "Matriz B:" << endl;
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            cout << tablero1[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    int S[F][C];
    for (int i = 0; i < F; i++) {
        for (int j = 0; j < C; j++) {
            S[i][j] = mat[i][j] + tablero1[i][j];
        }
    }
    
    cout << "Matriz resultado (A + B): " << endl;
    for (int i = 0; i < F; i++) {
        for (int j = 0; j < C; j++) {
            cout << S[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
