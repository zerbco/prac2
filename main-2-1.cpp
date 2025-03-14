#include <iostream>
#include <string>
using namespace std;

extern void print_binary_str(string decimal_number);

int main() {
    string number = "5";

    print_binary_str(number);

    return 0;
}