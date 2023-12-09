#include <iostream>
#include <string>
#include <random>
using namespace std;  // подключаю ВСЕ функции из пространства std в свой проект

int r_int_matrix(int min, int max) {
    random_device rd;  // сам генератор
    mt19937 gen(rd());  // занимается генерацией числа
    uniform_int_distribution<int> distribution(min, max);
    return distribution(gen);
}

void fill_matrix(int **matrix, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matrix[i][j] = r_int_matrix(1, 50);
        }
    }
}

void print_matrix(int **matrix, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

void dealloc_matrix(int ** matrix, int n) {
    for (int i = 0; i < n; i++) {
        matrix[i] = nullptr;
    }
    matrix = nullptr;
    cout << "Memory deallocated!" << endl;
}

int *min_in_each_column(int **matrix, int n, int m) {
    int *min_in_cols = new int [m];
    for (int j = 0; j < m; j++) {
        min_in_cols[j] = matrix[0][j];  // записываем в матрицу первые элементы каждого столбца
        for (int i = 0; i < n; i++) {
            if (matrix[i][j] < min_in_cols[j]) {  // если элемент матрицы меньше, чем текущий минимум для столбца
                min_in_cols[j] = matrix[i][j];  // переставляем значение элемента
            }
        }
    }
    return min_in_cols;
}


int main() {
    int n, m;
    cout << "Insert n and m: ";
    cin >> n >> m;

    int **A = new int *[n];  // определение двумерного динамического массива
    for (int i = 0; i < n; i++) {
        A[i] = new int[m];
    }

    int choice;
    do {
        cout << "Make your choice:" << endl;
        cout << "1 - Fill Matrix\n2 - Show matrix\n3 - sort matrix lines\n4 - clean memory\n5 - quit";
        cin >> choice;
        int *lowest;
        switch (choice) {
            case 1:
                fill_matrix(A, n, m);
                lowest = min_in_each_column(A, n, m);
                break;
            case 2:
                print_matrix(A, n, m);
                cout << "\nLowest items in matrix: " << endl;
                for (int i = 0; i < m; i++) {
                    cout << lowest[i] << " ";
                }
                cout << endl << endl;
                break;
            case 3:
                cout << "Sorted!" << endl;
                break;
            case 4:
                dealloc_matrix(A, n);
                break;
        }
    } while (choice != 5);
    return 0;
}


