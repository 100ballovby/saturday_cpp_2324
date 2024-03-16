#include <iostream>
#include <vector>
#include <string>
#include <iterator>  // добавить заголовочный файл iterator
using namespace std;

int find_even(vector<int> &my_v) {
    int count = 0;
    for (auto it { std::begin(my_v)}; it != std::end(my_v); it++) {
        if (*it % 2 == 0) {
            count++;
        }
    }
    return count;
}

int linear_search(int key) {
    int array[] {  4, 2, 12, 5, 9, 19, 21, 36, 33, 29  };
    auto begin { std::begin(array) };
    auto end { std::end(array) };
    int count = 0;
    for (auto it {begin}; it <= end; it++) {
        count ++;
        if (*it == key) {
            return count;
        }
    }
}


int iterators_hw_main() {
    vector <int> v { 4, 2, 12, 5, 9, 19, 21, 36, 33, 29 };
    int res = find_even(v);
    cout << res << endl;

    cout << linear_search(19) << endl;
    return 0;
}


