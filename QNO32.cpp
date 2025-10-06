#include <iostream>
using namespace std;

int main() {
	
    int n;
    
    cout << "Enter the term number N: ";
    
    cin >> n;

    int a = 0, b = 1, c;

    if (n == 1) {
    	
        cout << "The " << n << "th term of the Fibonacci series is: " << a << endl;
        
        return 0;
    }

    for (int i = 2; i <= n; ++i) {
    	
        c = a + b;
        
        a = b;
        
        b = c;
    }

    cout << "The " << n << "th term of the Fibonacci series is: " << a << endl;
    return 0;
}

