#include <iostream>
#include <vector>
#include <random>
#include <string>
#include <sstream>
using namespace std;  // подключаю ВСЕ функции из пространства std в свой проект


int task_search_longest_word_main() {
    /* Напишите программу, которая принимает на вход строку и
     * разбивает ее на слова, сохраняя каждое слово в векторе. Затем
     * программа должна вывести количество слов в строке и самое длинное слово. */

    string input;
    cout << "Input phrase: ";
    getline(cin, input);

    vector <string> words;  // здесь храним слова из строчки
    stringstream ss(input);  // бьем строку на слова
    string word;  // это переменная для слов строки

    while (ss >> word) {
        words.push_back(word);
    }

    // выведем количесво слов в строке
    cout << "Количество слов в строке: " << words.size() << endl;
    string longest_word;
    for (auto &w : words) {
        if (w.length() > longest_word.length()) {
            longest_word = w;
        }
    }

    cout << "The longest word is: " << longest_word << endl;
    return 0;
}


