#include<iostream>
using namespace std;
const int N = 4;
int main() {
    int matriz[N][N];
    int sumaDiagonalPrincipal = 0;
    int sumaDiagonalSecundaria = 0;

    cout << "Ingrese los elementos de una matriz 4x4:\n";
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    for (int i = 0; i < N; ++i) {
        sumaDiagonalPrincipal += matriz[i][i];
        sumaDiagonalSecundaria += matriz[i][N - 1 - i];
    }
    cout << "\nMatriz ingresada:\n";
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\nSuma de la diagonal principal: " << sumaDiagonalPrincipal << endl;
    cout << "Suma de la diagonal secundaria: " << sumaDiagonalSecundaria << endl;
    cout << "Suma total de ambas diagonales: " << (sumaDiagonalPrincipal + sumaDiagonalSecundaria) << endl;

    return 0;
}