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


bool isUnique(vector<int> &v, int value) {
    for (int el : v) {  // циклом перебираем элементы вектора
        if (el == value) {  // если какой-то элемент равен числу value
            return false;  // вернуть false - число не уникально и дальнейшую проверку прекратить
        }
    }
    return true;  // true вернется только если условие внутри цикла никогда не сработает
}

int unique_elements_of_vector() {
    vector<int> nums;
    int length, start, stop;
    cout << "Length of vector: "; cin >> length;
    cout << "Start of range: "; cin >> start;
    cout << "Stop of range: "; cin >> stop;

    if (stop >= length) {
        while (nums.size() < length) {
            int n = r_int(start, stop);
            if (isUnique(nums, n)) {
                nums.push_back(n);
            }
        }
    } else {
        cout << "Stop must me greater than length of vector!" << endl;
    }

    for (int n : nums) {
        cout << n << " ";
    }
    return 0;
}


