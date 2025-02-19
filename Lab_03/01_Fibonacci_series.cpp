#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    if (n == 1)
    {
        cout << "Fibonacci series: 1";
    }
    else if (n > 1)
    {   
        cout << "Fibonacci series: 1 ";
        int fibo1 = 0, fibo2 = 1, fibo;
        for (int i = 2; i <= n; i++)
        {
            fibo = fibo1 + fibo2;
            cout << fibo << " ";
            fibo1 = fibo2;
            fibo2 = fibo;
        }
    }
    else
    {
       return 1;
    }
    return 0;
}