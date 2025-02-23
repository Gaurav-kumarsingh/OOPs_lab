#include <iostream>
using namespace std;

void swapping (int* ptr1, int* ptr2) {
    int *ptr = ptr1;
    ptr1 = ptr2;
    ptr2 = ptr;
    cout << "After swapping first value is: "<< *ptr1 << " and second value is: " << *ptr2;
    return;
}

int main() {
    int num1, num2;
    cout << "Enter two number: ";
    cin >> num1 >> num2;
    cout << "Before swapping first value is: "<< num1 << " and second value is: " << num2 << endl;
    swapping(&num1, &num2);
    return 0;
}