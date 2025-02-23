#include<iostream>
using namespace std;

void add(int num1, int num2) {
    int sum = num1 + num2;
    cout << "sum = " << sum;
    return;
}

int main() {
    int num1, num2;
    cout << "Enter two integer: ";
    cin >> num1 >> num2;
    add(num1, num2);
    return 0;
}