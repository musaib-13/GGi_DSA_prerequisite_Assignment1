#include <iostream>
using namespace std;

bool isPrime(int n) {
	
    if (n <= 1) return false;
    
    for (int i = 2; i * i <= n; ++i) {
    	
        if (n % i == 0)
        
            return false;
    }
    return true;
}

int nextPrime(int n) {
    int prime = n + 1;
    while (!isPrime(prime)) {
        prime++;
    }
    return prime;
}

int main() {
	
    int num;
    
    cout << "Enter a number: ";
    
    cin >> num;

    int result = nextPrime(num);
    
    cout << "The next prime number after " << num << " is " << result << endl;

    return 0;
}

