#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool check(vector<string> v) {
    bool found;
    string first_element = v.at(0);
    string second_element = v.at(1);
    // перебираем каждый символ второй строки
    for (char ch : second_element) {
        found = false;
        // перебираем каждый символ первой строки и ищем символ ch
        for (char d : first_element) {
            if (ch == d) {
                found = true;
                break;
            }
        }
    }
    return found;
}

int vectors_hw_last_main() {
    vector<string> lines {"Hello, world", "Hello"};
    cout << check(lines) << endl;
    return 0;
}


