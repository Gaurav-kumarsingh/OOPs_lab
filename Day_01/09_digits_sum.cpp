#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a non-negative integer: ";
    cin >> num;
      if (cin.fail() || num < 0) {
        cerr << "Invalid input. Please enter a non-negative integer." << endl;
        return 1;
    }

    int sum = 0;
    while (num>0)
    {
        sum += num%10;
        num /= 10;
    }
    cout << "Sum of digits: " << sum;
    return 0;
}