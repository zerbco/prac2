#include <iostream>
using namespace std;

void print_summed(int array1[3][3],int array2[3][3]) {
    int sum[3][3] = {0};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum[i][j] += array1[i][j] + array2[i][j]; 
        }
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
           cout << sum[i][j] << " ";
        }
        cout << endl;
    }
}