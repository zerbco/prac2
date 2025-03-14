#include <iostream>
using namespace std;

extern bool is_palindrome(int integers[], int length);
extern int sum_array_elements(int integers[], int length);
extern int sum_if_palindrome(int integers[], int length);

int main() {
    int palindrome_array[] = {1, 2, 3, 2, 1};
    int non_palindrome_array[] = {1, 2, 3, 4, 5};
    int size1  = sizeof(palindrome_array) / sizeof (palindrome_array[0]);
    int size2 = sizeof(non_palindrome_array) / sizeof (non_palindrome_array[0]);

    int result1 = sum_if_palindrome(palindrome_array,size1);
    cout << result1 << endl;

    int result2 = sum_if_palindrome(non_palindrome_array,size2);
    cout << result2 << endl;

    return 0;
}
