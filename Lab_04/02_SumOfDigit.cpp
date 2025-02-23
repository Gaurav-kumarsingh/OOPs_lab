#include<iostream>
using namespace std;

void sumOfDigit(int num) {
    int sum = 0;
    while(num > 0) {
        sum += num % 10;
        num /= 10;
    }
    cout << "Sum of entered integer is " << sum;
    return;
}

int main() {
    int num;
    cout << "Enter a non-negative integer: ";
    cin >> num;
    sumOfDigit(num);
    return 0;
}