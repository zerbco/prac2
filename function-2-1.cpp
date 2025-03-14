#include <iostream>
#include <string>
using namespace std;

void print_binary_str(string decimal_number) {
    int num = stoi(decimal_number);

    if (num == 0) {
        cout << "0" << endl;
        return;
    }

    string binary = "";

    while (num > 0) {
        binary = to_string(num % 2) + binary;  
        num /= 2;
    }
    
    string reversed = "";
    for (int i = binary.length() - 1; i >= 0; i--) {
        reversed += binary[i];
    }
    
    cout << binary << endl;
}