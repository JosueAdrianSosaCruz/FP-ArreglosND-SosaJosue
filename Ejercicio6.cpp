#include<iostream>
using namespace std;
const int FILAS = 6;
const int COLUMNAS = 6;

int main() {
    int matriz[FILAS][COLUMNAS];
    cout << "Ingrese los elementos de una matriz 6x6:\n";
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    cout << "\nMatriz original:\n";
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j)
            cout << matriz[i][j] << "\t";
        cout << endl;
    }

    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS / 2; ++j) {
            int temp = matriz[i][j];
            matriz[i][j] = matriz[i][COLUMNAS - 1 - j];
            matriz[i][COLUMNAS - 1 - j] = temp;
        }
    }
    cout << "\nMatriz reflejada horizontalmente:\n";
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j)
            cout << matriz[i][j] << "\t";
        cout << endl;
    }

    return 0;
}