#include <iostream>
using namespace std;

int main(){
    int mark1, mark2, mark3, mark4;
    float marks;
    cout << "Enter four subject marks: ";
    cin >> mark1 >> mark2 >> mark3 >> mark4;
    marks = (mark1 + mark2 + mark3 + mark4)/4;
    if(marks>90){
        cout << "Grade A";
    }
    else if(marks<=90 && marks > 80){
        cout << "Grade B";
    }
    else if(marks <= 80 && marks > 70){
        cout << "Grade C";
    }
    else if(marks <= 70 && marks>60) {
        cout << "Grade D";
    }
    else{
        cout << "Fail";
    }
    return 0;
}