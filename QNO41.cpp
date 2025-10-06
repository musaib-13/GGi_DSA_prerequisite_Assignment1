#include <iostream>
#include <cmath>
using namespace std;


int countDigits(int num) {
	
    int count = 0;
    
    while (num != 0) {
    	
        num /= 10;
        
        ++count;
    }
    return count;
}


bool isArmstrong(int num) {
	
    int n = countDigits(num);
    
    int sum = 0, temp = num;
    
    while (temp != 0) {
    	
        int digit = temp % 10;
        
        sum += pow(digit, n);
        
        temp /= 10;
    }
    return (sum == num);
}

int main() {
	
    cout << "Armstrong numbers under 1000 are: ";
    
    for (int i = 1; i < 1000; ++i) {
    	
        if (isArmstrong(i)) {
        	
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}

