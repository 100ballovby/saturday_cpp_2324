#include <iostream>
#include <random>
using namespace std;


int r_int_hw_vect(int min, int max) {
    random_device rd;  // сам генератор
    mt19937 gen(rd());  // занимается генерацией числа
    uniform_int_distribution<int> distribution(min, max);
    return distribution(gen);
}


int main_hw_vect_1() {
    vector<int> numbers;
    for (int i = 0; i < 30; i++) {
        numbers.push_back(r_int_hw_vect(1, 100));
    }

    int summ = 0;
    long mult = 1;
    for (int n : numbers) {
        cout << n << " ";
        summ += n;
        mult *= n;
    }

    cout << "\nSum of elements: " << summ << endl;
    cout << "\nMultiplication of elements: " << mult << endl;
    return 0;
}


