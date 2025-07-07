#include<iostream>
using namespace std;
const int N = 3;
int main() {
    int matriz[N][N] = {
        {1, 2, 3},
        {4, 2, 6},
        {7, 2, 9}
    };

    int valor;
    cout << "Ingrese el valor a buscar: ";
    cin >> valor;

    bool encontrado = false;
    cout << "El valor " << valor << " se encuentra en:\n";

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (matriz[i][j] == valor) {
                cout << "Fila " << i << ", Columna " << j << endl;
                encontrado = true;
            }
        }
    }

    if (!encontrado) {
        cout << "El valor no se encuentra en la matriz.\n";
    }

    return 0;
}