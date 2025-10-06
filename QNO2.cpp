#include <iostream>
using namespace std;

int main() {
    const float PI = 3.14159;
    
    float radius, circumference;

    
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    
    circumference = 2 * PI * radius;

    
    cout << "Circumference of the circle = " << circumference << endl;

    return 0;
}

