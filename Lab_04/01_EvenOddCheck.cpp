#include <iostream>
using namespace std;

void check (int num) {
   if(num%2==0) {
    cout << "Entered number is even.";
   } else {
    cout << "Entered number is odd.";
   }
   return;
}

int main() {
    int num;
    cout << "Enter a integer: ";
    cin >> num;
    check(num);
    return 0;
}