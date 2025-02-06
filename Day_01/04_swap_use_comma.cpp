#include <iostream>
using namespace std;

int main() {
cout << "Enter two number: ";
int a, b;
cin >> a >> b;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    // (a, b) = (b, a);
    swap(a,b);

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}