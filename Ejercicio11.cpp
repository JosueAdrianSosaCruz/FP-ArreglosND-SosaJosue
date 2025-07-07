#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
const int N = 10;
const int VIVO = 0;
const int QUEMANDO = 1;
const int QUEMADO = 2;

void mostrarBosque(int bosque[N][N]) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << bosque[i][j] << " ";
        }
        cout << endl;
    }
    cout << "----------------------" << endl;
}

bool tieneVecinoQuemando(int bosque[N][N], int i, int j) {
    for (int di = -1; di <= 1; ++di) {
        for (int dj = -1; dj <= 1; ++dj) {
            if (di == 0 && dj == 0) continue;
            int ni = i + di;
            int nj = j + dj;
            if (ni >= 0 && ni < N && nj >= 0 && nj < N) {
                if (bosque[ni][nj] == QUEMANDO) return true;
            }
        }
    }
    return false;
}

void propagarFuego(int bosque[N][N]) {
    int copia[N][N];
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            copia[i][j] = bosque[i][j];

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (copia[i][j] == VIVO && tieneVecinoQuemando(copia, i, j)) {
                bosque[i][j] = QUEMANDO;
            } else if (copia[i][j] == QUEMANDO) {
                bosque[i][j] = QUEMADO;
            }
        }
    }
}

int main() {
    int bosque[N][N];
    srand(time(0));

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            bosque[i][j] = VIVO;

    for (int k = 0; k < 5; ++k) {
        int i = rand() % N;
        int j = rand() % N;
        bosque[i][j] = QUEMANDO;
    }

    cout << "Bosque antes de la propagacion:\n";
    mostrarBosque(bosque);

    propagarFuego(bosque);

    cout << "Bosque despues de la propagacion:\n";
    mostrarBosque(bosque);

    return 0;
}