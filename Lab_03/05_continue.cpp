#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Odd numbers are: ";
    for (int i = 1; i <= n; i++)
    {
        if(i%2==0){
            continue;
        }
    cout << i << " ";
    }
    return 0;
}