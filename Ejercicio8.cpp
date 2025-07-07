#include<iostream>
using namespace std;
const int N = 5;
int main() {
    int matriz[N][N];

    cout << "Ingrese los elementos de una matriz 5x5:\n";
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }

    cout << "\nMatriz ingresada:\n";
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j)
            cout << matriz[i][j] << "\t";
        cout << endl;
    }

    cout << "\nRecorrido en espiral:\n";

    int inicioFila = 0, finFila = N - 1;
    int inicioCol = 0, finCol = N - 1;

    while (inicioFila <= finFila && inicioCol <= finCol) {
        for (int j = inicioCol; j <= finCol; ++j)
            cout << matriz[inicioFila][j] << " ";
        inicioFila++;

        for (int i = inicioFila; i <= finFila; ++i)
            cout << matriz[i][finCol] << " ";
        finCol--;
        
        if (inicioFila <= finFila) {
            for (int j = finCol; j >= inicioCol; --j)
                cout << matriz[finFila][j] << " ";
            finFila--;
        }
        if (inicioCol <= finCol) {
            for (int i = finFila; i >= inicioFila; --i)
                cout << matriz[i][inicioCol] << " ";
            inicioCol++;
        }
    }

    cout << endl;
    return 0;
}