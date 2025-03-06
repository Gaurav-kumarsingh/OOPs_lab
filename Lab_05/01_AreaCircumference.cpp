#include <iostream>
using namespace std;

class Circle{
    int r;
    public:
    void areaCircumferenceCalculate(int rad){
        r = rad;
        float area = 3.14 * r * r;
        cout << "Area of circle = " << area << endl;
        float circumference = 2 * 3.14 * r;
        cout << "Circumference of a circle = " << circumference;
        return;
    }
};

int main(){
    int radius;
    cout << "Enter a radius: ";
    cin >> radius;
    Circle aa;
    aa.areaCircumferenceCalculate(radius);
    return 0;
}