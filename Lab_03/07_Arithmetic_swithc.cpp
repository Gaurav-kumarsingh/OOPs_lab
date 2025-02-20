#include <iostream>
using namespace std;

int main(){
    int a, b;
    char sign;
    cout << "Enter a operation\n";
    cin >> a >> sign >> b;
    switch (sign)
    {
    case '+':
       cout << "= " << a + b;
        break;
    
    case '-':
       cout << "= " << a - b;
        break;
    
    case '*':
       cout << "= " << a * b;
        break;
    
    case '/':
       cout << "= " << a / b;
        break;
    
    default:
    cout << "syntax error";
        break;
    }
}