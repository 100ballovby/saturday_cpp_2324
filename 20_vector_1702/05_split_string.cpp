#include <iostream>
#include <vector>
#include <string>
using namespace std;


int split_string_main() {
    // Разбить строку на отдельные слова. Слова должны храниться в векторе
    string str = "Hello lower world! I love you. lol.";
    vector<string> words;
    string word;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == ' ') {
            // добавляю слово в вектор
            if (!word.empty()) {
                words.push_back(word);
            }
            word.clear();
        } else {
            word += str[i];
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }
    for (string w : words) {
        cout << w << endl;
    }
    return 0;
}


