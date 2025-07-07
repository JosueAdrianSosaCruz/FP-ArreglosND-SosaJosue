#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
const int FILAS = 10;
const int COLAS = 10;

void generarTablero(int tablero[FILAS][COLAS]) {
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLAS; ++j) {
            tablero[i][j] = rand() % 2;
        }
    }
}

int contarVecinosVivos(int tablero[FILAS][COLAS], int fila, int cola) {
    int vivos = 0;
    for (int i = -1; i <= 1; ++i) {
        for (int j = -1; j <= 1; ++j) {
            int ni = fila + i;
            int nj = cola + j;
            if (i == 0 && j == 0) continue;
            if (ni >= 0 && ni < FILAS && nj >= 0 && nj < COLAS) {
                vivos += tablero[ni][nj];
            }
        }
    }
    return vivos;
}

void siguienteGeneracion(int actual[FILAS][COLAS], int siguiente[FILAS][COLAS]) {
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLAS; ++j) {
            int vecinos = contarVecinosVivos(actual, i, j);

            if (actual[i][j] == 1) {
                if (vecinos < 2 || vecinos > 3)
                    siguiente[i][j] = 0;
                else
                    siguiente[i][j] = 1;
            } else {

                if (vecinos == 3)
                    siguiente[i][j] = 1;
                else
                    siguiente[i][j] = 0;
            }
        }
    }
}

void mostrarTableros(int t1[FILAS][COLAS], int t2[FILAS][COLAS]) {
    cout << "Tablero Inicial\t\tSegunda Generación\n";
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLAS; ++j) {
            cout << t1[i][j] << " ";
        }
        cout << "\t\t";
        for (int j = 0; j < COLAS; ++j) {
            cout << t2[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    srand(time(0));

    int tableroActual[FILAS][COLAS];
    int tableroSiguiente[FILAS][COLAS];

    generarTablero(tableroActual);
    siguienteGeneracion(tableroActual, tableroSiguiente);
    mostrarTableros(tableroActual, tableroSiguiente);

    return 0;
}