#include <iostream>
#include <vector>
#include <string>
using namespace std;


void sort_vector(vector<int> &my_v) {
    for (int i = 0; i < my_v.size() - 1; i++) {
        for (int j = 0; j < my_v.size() - i - 1; j++) {
            if (my_v[j] > my_v[j + 1]) {
                swap(my_v[j], my_v[j + 1]);
            }
        }
    }
}

bool is_consecutive(vector<int> &nums) {
    sort_vector(nums); // сортируем вектор перед проверкой
    for (int i = 0; i < nums.size() - 1; i++) {
        if (nums[i + 1] != (nums[i] + 1)) {
            return false; // элементы не последовательны
        }
    }
    return true;
}

vector<int> smaller_than_neighbors(vector<int> &nums) {
    vector<int> temp;  // в нем будем сохранять найденные числа
    for (int i = 1; i < nums.size() - 1; i++) {
        if (nums[i] < nums[i - 1] && nums[i] < nums[i + 1]) {
            temp.push_back(nums[i]);
        }
    }
    return temp;
}


void capitalize_each(vector<string> &words) {
    for (int i = 0; i < words.size(); i++) {
        words[i][0] = toupper(words[i][0]);

        for (int j = 1; j < words[i].size(); j++) {
            words[i][j] = tolower(words[i][j]);
        }
    }
}



int vectors_tasks2_main() {
    vector<int> n {1, 2, 5, 7, 4, 3, 6};
    vector<int> n1 {1, 2, 5, 0, 3, 6, 7};
    vector<int> n2 {4, 0, 3, -1, 6, 3, 9, 2, 7, -10, -11, 5};
    string res1 = is_consecutive(n) ? "Vector is consecutive" : "Vector isn't consecutive";
    string res2 = is_consecutive(n1) ? "Vector is consevutive" : "Vector isn't consecutive";

    cout << res1 << endl;
    cout << res2 << endl;

    vector<int> res3 = smaller_than_neighbors(n2);
    for (int num : res3) {
        cout << num << " ";
    }
    cout << endl;

    vector<string> w {"red", "Green", "Blue", "loW mEmOrY"};
    capitalize_each(w);
    for (string s : w) {
        cout << s << endl;
    }

    return 0;
}


