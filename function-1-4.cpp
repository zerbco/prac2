#include <iostream>
using namespace std;

void print_scaled(int array[3][3], int n) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << array [i][j] * n << " ";
        }
        cout << endl;
    }
}