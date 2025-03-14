#include <iostream>
using namespace std;

extern int array_min(int integers[], int length);
int array_max(int integers[], int length);
int sum_min_max(int integers[], int length);

int main() {
    int array[] = {1,2,3,7,9};
    int size = sizeof(array) / sizeof(array[0]);

    cout << "The sum of minimum and maximum of the integers is: " << sum_min_max(array,size) << endl;

    return 0;
}