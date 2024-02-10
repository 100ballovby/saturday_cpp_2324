#include <iostream>
#include <random>
#include <vector>
using namespace std;


int r_int(int min, int max) {
    random_device rd;  // сам генератор
    mt19937 gen(rd());  // занимается генерацией числа
    uniform_int_distribution<int> distribution(min, max);
    return distribution(gen);
}

int hw_vectors_2main() {
    int length = 3;
    vector<int> n;
    vector<int> k;
    // заполняем вектора числами
    for (int i = 0; i < length; i++) {
        int number1 = r_int(1, 10);
        int number2 = r_int(1, 10);
        n.push_back(number1);
        k.push_back(number2);
    }

    cout << "Vector n: ";
    for (int num : n) {
        cout << num << ", ";
    }
    cout << endl;
    cout << "Vector k: ";
    for (int num : k) {
        cout << num << ", ";
    }
    cout << endl;
    // скалярное произведение
    int scalar_product = 0;
    for (int i = 0; i < length; i++) {
        scalar_product += n[i] * k[i];
    }
    cout << "Scalar production: " << scalar_product << endl;
    return 0;
}


