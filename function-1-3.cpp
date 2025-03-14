#include <iostream>
using namespace std;

void count_digits(int (*array)[4]) {
    int count[10] = {0};

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            int value = array[i][j];

            if (value >= 0 && value <= 9) {
                count[value]++;
            }
        }
    }

    cout << "0:" << count[0] << ";1:" << count[1] << ";2:" << count[2] << ";3:" << count[3] << ";4:" << count[4] << ";5:" << count[5] << ";6:" << count[6] <<
    ";7:" << count[7] << ";8:" << count[8] << ";9:" << count[9] << ";" << endl;
}