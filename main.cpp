#include <iostream>
#include <vector>
#include <string>
#include <iterator>  // добавить заголовочный файл iterator
using namespace std;



int main() {
    int array[7] { 0, 1, 2, 3, 4, 5, 6 };
    int sum = 0;
    for (auto it { std::begin(array)}; it != std::end(array); it++) {
        sum += *it;
    }
    cout << "Sum of elements is: " << sum << endl;

    vector<int> numbers { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    // найдем максимальный элемент в векторе
    auto begin { numbers.begin() };
    auto end { numbers.end() };
    int max = numbers[0];
    for (begin; begin != end; begin++) {
        if (*begin > max) {
            max = *begin;
        }
    }
    cout << "Max element is: " << max << endl;
    return 0;
}


