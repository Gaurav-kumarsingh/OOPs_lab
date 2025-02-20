#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter a alphabet: ";
    cin >> ch;
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    cout << "Enterd alpahbet is vowel";
        break;
    default:
    cout << "Enterd alphabet is consonant";
        break;
    }
    return 0;
}