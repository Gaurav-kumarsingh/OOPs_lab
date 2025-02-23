#include<iostream>
using namespace std;

void swapping(int num1, int num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "After swapping first value is: "<< num1 << " and second value is: " << num2;
    return;
}

int main() {
    int num1, num2;
    cout << "Enter two number: ";
    cin >> num1 >> num2;
    cout << "Before swapping first value is: "<< num1 << " and second value is: " << num2 << endl;
    swapping(num1, num2);
    return 0;
}