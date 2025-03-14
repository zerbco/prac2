#include <iostream>

extern void numbers_print(int array[5][5]);

int main() {
    int array[5][5] = {
                       {1, 2, 3, 4, 5},
                        {5, 6, 7, 8, 6},
                        {9, 10, 11, 12, 4},
                        {13, 14, 15, 16, 0},
                        {7, 8, 9, 1, 2} 
                        };

    numbers_print(array);

    return 0;
}