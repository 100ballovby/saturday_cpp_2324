#include <iostream>
#include <vector>
using namespace std;  // подключаю ВСЕ функции из пространства std в свой проект


int vectors_cond_main() {
    vector <int> vector_first {1, 2, 3, 4, 5};
    vector <int> vector_second {1, 2, 3, 4, 5};

    /* Вектора можно сравнивать, но при их сравнении
     * компилятор завод два цикла и поочередно сравнивает
     * элементы двух векторов друг с другом. Как только
     * находится первое несоответствие, проверка не проходит */

    // вектора можно сравнивать
    if (vector_first == vector_second) {
        cout << "Equals" << endl;
    } else {
        cout << "Error!" << endl;
    }

    bool flag = true;
    if (vector_first.size() == vector_second.size()) {
        for (int i = 0; i < vector_first.size(); i++) {
            if (vector_first[i] != vector_second[i]) {
                cout << "Error!" << endl;
                flag = false;
                break; // выход из цикла
            }
        }
    } else {
        flag = false;
        cout << "Error!" << endl;
    }
    if (flag) {
        cout << "Equals" << endl;
    }

    return 0;
}


