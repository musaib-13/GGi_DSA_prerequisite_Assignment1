#include <iostream>
using namespace std;

bool isFibonacci(int n) {
    if (n == 0 || n == 1) {
        return true;
    }
    int a = 0, b = 1, c = a + b;
    while (c < n) {
        a = b;
        b = c;
        c = a + b;
    }
    return (c == n);
}

int main() {
	
    int num;
    
    cout << "Enter a number: ";
    
    cin >> num;

    if (isFibonacci(num))
    
        cout << num << " is in the Fibonacci series." << endl;
        
    else
    
        cout << num << " is not in the Fibonacci series." << endl;

    return 0;
}

