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

int task6(int **matrix, int top_l_r, int top_l_col, int bot_r_r, int bot_r_col) {
    int sum = 0;
    for (int i = top_l_r; i < bot_r_r; i++) {
        for (int j = top_l_col; j < bot_r_col; j++) {
            sum += matrix[i][j];
        }
    }
    return sum;
}

int task7(int **matrix, int n, int col) {
    int max_element = matrix[0][col];  // задаем как максимальный первый элемент
    for (int i = 1; i < n; i++) {
        if (matrix[i][col] > max_element) {
            max_element = matrix[i][col];
        }
    }
    return max_element;
}

// Найти сумму элементов двумерного массива по столбцам.
void task8(int **matrix, int n, int m, int *sums) {
    for (int j = 0; j < m; j++) {
        sums[j] = 0;
        for (int i = 0; i < n; i++) {
            sums[j] += matrix[i][j];
        }
    }
}

int tasks_main_matrix() {
    int n, m;
    cout << "Insert n and m: ";
    cin >> n >> m;

    int **A = new int *[n];  // определение двумерного динамического массива
    int *array = new int [m];
    for (int i = 0; i < n; i++) {
        A[i] = new int[m];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            A[i][j] = r_int_matrix(1, 50);
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    //int res = task6(A, 0, 3, 1, 3);
    //cout << "Sum: " << res << endl;

    task8(A, n, m, array);
    cout << "Sums of cols: ";
    for (int i = 0; i < m; i++) {
        cout << array[i] << " ";
    }
    return 0;
}


