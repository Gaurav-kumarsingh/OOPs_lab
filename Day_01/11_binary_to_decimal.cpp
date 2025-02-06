#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, i=0, number = 0;
    cout << "Enter a binary number: ";
    cin >> n;
    while(n>0){
        if(n%2==1){
            number += (int)pow(2, i);
        }
        n/=10;
        i++;
    }
    cout << number;
    return 0;
}