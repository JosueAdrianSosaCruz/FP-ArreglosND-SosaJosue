#include<iostream>
using namespace std;
const int N = 4;
int main() {
    int matriz[N][N];
    cout << "Ingrese los elementos de la matriz 4x4:\n";
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }

    int maximo = matriz[0][0];
    int minimo = matriz[0][0];
    int filaMax = 0, colMax = 0;
    int filaMin = 0, colMin = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (matriz[i][j] > maximo) {
                maximo = matriz[i][j];
                filaMax = i;
                colMax = j;
            }
            if (matriz[i][j] < minimo) {
                minimo = matriz[i][j];
                filaMin = i;
                colMin = j;
            }
        }
    }

    cout << "\nMatriz ingresada:\n";
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j)
            cout << matriz[i][j] << "\t";
        cout << endl;
    }

    cout << "\nMaximo: " << maximo << " en posicion [" << filaMax << "][" << colMax << "]\n";
    cout << "Minimo: " << minimo << " en posicion [" << filaMin << "][" << colMin << "]\n";

    return 0;
}