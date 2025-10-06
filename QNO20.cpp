#include <iostream>
using namespace std;

int main() {
	
    int a, b, c, d, largest;

    cout << "Enter four numbers: ";
    
    cin >> a >> b >> c >> d;

    if (a >= b && a >= c && a >= d)
    
        largest = a;
        
    else if (b >= a && b >= c && b >= d)
    
        largest = b;
        
    else if (c >= a && c >= b && c >= d)
    
        largest = c;
        
    else
    
        largest = d;

    cout << "The largest number is: " << largest << endl;

    return 0;
}

