#include <iostream>
#include <string>
using namespace std;  // подключаю ВСЕ функции из пространства std в свой проект


void add_matrix() {
    int A[3][3] = {
            {4, 5,  2},
            {6, -8, 1},
            {9, 7,  3}
    };
    int B[3][3] = {
            {9,  1, -6},
            {-3, 5, -12},
            {-6, 3, 7}
    };
    for (int i = 0; i < 3; i++) {  // цикл совершает обход по строкам
        for (int j = 0; j < 3; j++) {  // цикл совершает обход по столбцам
            cout << A[i][j] + B[i][j] << "\t";
        }
        cout << endl;
    }
}

void mult_matrix() {
    int A[3][3] = {
            {4, 5, 2},
            {6, -8, 1},
            {9, 7, 3}
    };
    int B[3][1] = {
            {9},
            {-3},
            {-6}
    };
    int C[3][1];
    cout << "Multiplying matrix" << endl;
    for (int i = 0; i < 3; i++) {  // цикл совершает обход по строкам
        for (int j = 0; j < 1; j++) {
            C[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 1; j++) {
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }

}

void transpose_matrix() {
    int A[3][3] = {
            {4, 5, 2},
            {6, -8, 1},
            {9, 7, 3}
    };
    cout << "Transponded matrix:" << endl;
    int transponded[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transponded[i][j] = A[j][i];
            cout << transponded[i][j] << "\t";
        }
        cout << endl;
    }
}


int matrix1_main() {
    int A[3][4] = {
            {4, 5, 2, -8},
            {6, -8, 1, -6},
            {9, 7, 3, -7}
    };
    cout << "main axis" << endl;
    for (int i = 0; i < 3; i++) {
        cout << A[i][3 - 1 - i] << " ";
    }
    return 0;
}


