#include<iostream>
using namespace std;

int main(){
    cout << "Armstrong number are: ";
    for(int i=100; i<1000; i++){
        int n=i, sum=0;
        while (n>0)
        {
            int remainder = n%10;
           sum += remainder * remainder * remainder;
           n/=10;
        }
        if(sum == i){
            cout << i << " ";
        }
    }
    return 0;
}