#include<iostream>
using namespace std;
const int N = 4;
int main() {
    int matriz[N][N];

    cout << "Ingrese los elementos de una matriz 4x4:\n";
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }

    cout << "\nMatriz original:\n";
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j)
            cout << matriz[i][j] << "\t";
        cout << endl;
    }

    int fila1, fila2;
    cout << "\nIngrese la primera fila a intercambiar (0-3): ";
    cin >> fila1;
    cout << "Ingrese la segunda fila a intercambiar (0-3): ";
    cin >> fila2;

    if (fila1 < 0 || fila1 >= N || fila2 < 0 || fila2 >= N) {
        cout << "Error: Las filas deben estar entre 0 y 3.\n";
        return 1;
    }

    for (int j = 0; j < N; ++j) {
        int temp = matriz[fila1][j];
        matriz[fila1][j] = matriz[fila2][j];
        matriz[fila2][j] = temp;
    }

    cout << "\nMatriz despues del intercambio:\n";
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j)
            cout << matriz[i][j] << "\t";
        cout << endl;
    }

    return 0;
}