#include <iostream>

extern void count_digits(int (*array)[4]);

int main() {
    int array[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 0, 1, 2},
        {3, 4, 5, 6}
    };

    count_digits(array);

    return 0;
}