#include <iostream>
#include <vector>
#include <string>
using namespace std;

void print_vector(vector<string> &my_v) {
    int n = my_v.size();
    for (int i = 0; i < n; i++) {
        cout << my_v[i] << " ";
    }
    cout << endl;
}


int substring_vector_main() {
    // Найти все вхожения подстроки в строке
    string str = "Hello lower world! I love you. lol.";
    string substr = "low";

    for (int i = 0; i < str.size() - substr.size() + 1; i++) {
        bool found = true;
        for (int j = 0; j < substr.size(); j++) {
            if (str[i + j] != substr[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            cout << i << " ";
        }
    }
    return 0;
}


