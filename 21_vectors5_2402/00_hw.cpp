#include <iostream>
#include <vector>
#include <string>
using namespace std;

void sort_strings(vector<string> &my_v) {
    for (int i = 0; i < my_v.size() - 1; i++) {
        for (int j = 0; j < my_v.size() - i - 1; j++) {
            if (my_v[j] > my_v[j + 1]) {
                swap(my_v[j], my_v[j + 1]);
            }
        }
    }
}

string sort_chars(string &s) {
    for (int i = 0; i < s.size() - 1; i++) {
        for (int j = 0; j < s.size() - i - 1; j++) {
            if (s[j] > s[j + 1]) {
                swap(s[j], s[j + 1]);
            }
        }
    }
    return s;
}

int vectors5_main() {
    vector<string> fridge = {"kiwi", "grape", "banana", "orange", "apple"};
    sort_strings(fridge);
    for (int i = 0; i < fridge.size(); i++) {
        fridge[i] = sort_chars(fridge[i]);
        cout << fridge[i] << " ";
    }
    cout << endl;
    return 0;
}


