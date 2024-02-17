#include <iostream>
#include <vector>
using namespace std;


int string_vector_main() {
    vector <vector <int>> n = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };  // двумерный целочисленный вектор
    vector <string> s0 = {"fkj", "abc"};  // двумерный вектор строк
    vector <vector <string>> s_v = {  // 1 измерение вектора
        { // второе измерение вектора
            "abc" // третье измерение (потому что строка сама по себе может называться вектором)
        },
        {"def"},
        {"ghi"},
    };  // трехмерный вектор строк
    string s = "fkj";  // строка (может называться вектором)
    char s1[3] = {'f', 'k', 'j'};  // то, как строка на самом деле выглядит

    for (int i = 0; i < s0.size(); i++) {
        for (int j = 0; j < s0[i].length(); j++) {
            cout << "Char: " << s0[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}


