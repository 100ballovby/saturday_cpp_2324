#include <iostream>
#include <string>
#include <cmath>
using namespace std;  // подключаю ВСЕ функции из пространства std в свой проект

bool is_palindrome(string word) {
    int left = 0;
    int right = word.size() - 1;

    while (left < right) {
        if (word[left] != word[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}


int palindrome_main() {
    string word = "noon";
    bool is_palin = is_palindrome(word);
    string res = is_palin ? " is palindrome!" : " isn't palinrome";

    cout << word << res;

    return 0;
}


