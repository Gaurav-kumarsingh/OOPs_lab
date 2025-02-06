#include <iostream>
using namespace std;

int main(){
    int year;
    cout << "Welcome! Please enter a year: ";
    cin >> year;

    if (cin.fail()) {
        cerr << "Invalid input. Please enter an integer." << endl;
        return 1;
    }

    if((year%4==0 && year%100!=0) || (year%400==0)){
        cout << " The entered year is leap year.";
    }
    else{
        cout << "The entered year is not leap year.";
    }
    return 0;
}