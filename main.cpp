#include <iostream>
#include <vector>
using namespace std;


bool areCollinear(vector<int> &v1, vector<int> &v2) {
    // проверка одинаковой размерности векторов:
    if (v1.size() != v2.size()) {
        return false;
    }
    // Векторное произведение
    int crossProduct = 0;
    for (int i = 0; i < v1.size(); i++) {
        crossProduct += v1[i] * v2[(i + 1) % v1.size()] - v2[i] * v1[(i + 1) % v1.size()];
    }

    // если коллинеарны, то скалярное произведение равно 0
    return crossProduct == 0;
}

int main() {
    int size = 5;
    vector<int> v1 {1, 0, 0, 0, 0};
    vector<int> v2 {2, 0, 0, 0, 0};

    bool collinear = areCollinear(v1, v2);
    cout << collinear << endl;
    return 0;
}


