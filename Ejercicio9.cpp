#include<iostream>
using namespace std;
int main() {
    int N;
    cout << "Ingrese el orden N del cuadrado latino: ";
    cin >> N;

    if (N <= 0) {
        cout << "El orden debe ser un numero positivo.\n";
        return 1;
    }

    int matriz[N][N];

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            matriz[i][j] = ((j - i + N) % N) + 1;
        }
    }

    cout << "\nCuadrado latino de orden " << N << ":\n";
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j)
            cout << matriz[i][j] << " ";
        cout << endl;
    }

    return 0;
}