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


int string_vector_changing_main() {
    vector <string> s {"Hello, world! I'm a C++ developer!"};
    s.push_back("Me too!");
    s.push_back("Xu-xu");
    s.push_back("O-ho-ho");
    print_vector(s);
    s.pop_back();
    print_vector(s);

    // изменение элемента строчного вектора
    s.at(1) = "###_Changed_###";
    print_vector(s);
    s[2] = "|index|";
    print_vector(s);

    return 0;
}


