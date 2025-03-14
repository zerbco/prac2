#include <iostream>

extern void print_scaled(int array[3][3], int n);

int main() {
    int array[3][3] = {
        {2,3,4},
        {3,4,5},
        {5,7,9}
    };

    int scale = 3;

    print_scaled(array,scale);
}