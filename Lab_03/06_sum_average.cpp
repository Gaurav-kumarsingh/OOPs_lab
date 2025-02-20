#include <iostream>
using namespace std;

int main(){
    int sum=0 , n;
    cout << "Enter 10 positive integer: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> n;
        sum += n;
    }
    cout <<"sum of 10 integer is: " << sum << endl;
    cout << "Average of 10 integer is: "<<sum/10.0;
    return 0;
}