#include <iostream>
#include <vector>
using namespace std;

void print_vector(vector<string> &my_v) {
    int n = my_v.size();
    for (int i = 0; i < n; i++) {
        cout << my_v[i] << " ";
    }
    cout << endl;
}


int string_vector_search_main() {
    vector <string> s {"Hello, world! I'm a C++ developer!",
        "I'm a Python developer",
        "Let's code together?",
        "Ok let's try!",
    };
    // необходимо найти первую запятую в векторе
    string index_comma = "-1";
    for (int i = 0; i < s.size(); i++) {
        for (int j = 0; j < s[i].length(); j++) {
            if (s[i][j] == ',') {
                cout << "NASHOL" << endl;
                index_comma = to_string(i) + ' ' + to_string(j);
                break;
            }
        }
    }
    cout << index_comma << endl;

    return 0;
}


