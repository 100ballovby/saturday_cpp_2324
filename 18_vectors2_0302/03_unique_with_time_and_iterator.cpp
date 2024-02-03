#include <iostream>
#include <random>
#include <vector>
#include <chrono>
#include <algorithm>
using namespace std;


int r_int(int min, int max) {
    random_device rd;  // сам генератор
    mt19937 gen(rd());  // занимается генерацией числа
    uniform_int_distribution<int> distribution(min, max);
    return distribution(gen);
}


bool isUnique(vector<int> &v, int value) {
    return find(v.begin(), v.end(), value) == v.end();
}

int main_unique_with_time_and_iterator() {
    vector<int> nums;
    int length, start, stop;
    cout << "Length of vector: "; cin >> length;
    cout << "Start of range: "; cin >> start;
    cout << "Stop of range: "; cin >> stop;
    chrono::steady_clock::time_point start_time = chrono::steady_clock::now();
    if ((stop - start + 1) >= length) {
        while (nums.size() < length) {
            int n = r_int(start, stop);
            if (isUnique(nums, n)) {
                nums.push_back(n);
            }
        }
    }
    else {
        cout << "Stop must me greater than length of vector!" << endl;
    }
    chrono::steady_clock::time_point end_time = chrono::steady_clock::now();

    for (int n : nums) {
        cout << n << " ";
    }

    chrono::duration<double> time_while = chrono::duration_cast<chrono::duration<double>>(end_time - start_time);
    cout << "\nThe time " << time_while.count() << " seconds." << endl;
    return 0;
}


