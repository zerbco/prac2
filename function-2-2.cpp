#include <iostream>

int binary_to_int(int binary_digits[], int number_of_digits) {
    int decimal_value = 0;

    for (int i = 0; i < number_of_digits; i++) {
        decimal_value = decimal_value * 2;

        decimal_value = decimal_value + binary_digits[i];
    }
    return decimal_value;
}
 