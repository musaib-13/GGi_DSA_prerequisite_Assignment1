#include <iostream>
using namespace std;

bool isPrime(int n) {
	
    if (n <= 1) return false;
    
    for (int i = 2; i <= n / 2; ++i) {
    	
        if (n % i == 0)
        
            return false;
    }
    return true;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers (start and end): ";
    cin >> num1 >> num2;

    // Swap if num1 > num2 to ensure correct range
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    cout << "Prime numbers between " << num1 << " and " << num2 << " are: ";
    

    for (int num = num1; num <= num2; ++num) {
    	
        if (isPrime(num))
        
            cout << num << " ";
    }

    cout << endl;
    
    return 0;
}

