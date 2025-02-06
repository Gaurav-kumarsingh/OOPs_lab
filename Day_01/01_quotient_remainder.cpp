#include<iostream>
using namespace std;

int main(){
    int quotient, divisor, dividend,  remainder;
    cout << "Enter value of dividend and divisor \n";
    cin >> dividend >> divisor;
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    cout << "Quotient is "<< quotient << " and remainder is " << remainder;
    return 0;
}