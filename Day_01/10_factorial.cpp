#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a non-negative interger: ";
    cin >> num;

     if (cin.fail() || num < 0) {
        cerr << "Invalid input. Please enter a non-negative integer." <<endl;
        return 1;
    }
    long long int factorial = 1;
    for(int i=1; i<=num; i++){
        factorial *= i;
    }
    cout << "Factorial of " << num << " is " << factorial;
    return 0;
}