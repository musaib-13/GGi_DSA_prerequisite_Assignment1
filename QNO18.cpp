#include <iostream>
using namespace std;

int main() {
    int a, b, c, middle;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    
    if ((a > b && a < c) || (a > c && a < b))
    
        middle = a;
        
    else if ((b > a && b < c) || (b > c && b < a))
    
        middle = b;
    else 
        middle = c;

    cout << "The middle (second largest) number is: " << middle << endl;

    return 0;
}

