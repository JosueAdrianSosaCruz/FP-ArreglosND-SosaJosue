#include<iostream>
using namespace std;
const int N = 4;
int main() {
    int matriz[N][N];
    int rotada[N][N];
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

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            rotada[j][N - 1 - i] = matriz[i][j];

    cout << "\nMatriz rotada sentido horario:\n";
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j)
            cout << rotada[i][j] << "\t";
        cout << endl;
    }

    return 0;
}