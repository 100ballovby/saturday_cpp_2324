#include <iostream>
#include <string>
#include <random>
using namespace std;

void pointer_arith() {
    int A[] {4, 5, 2, 1, 9, 12, 6};
    cout << A << endl;
    cout << A + 1 << endl;
    for (int i = 0; i < 7; i++) {
        cout << *(A + i) << endl; // A[i] - конвертируется в *(A + i)
    }
}