#include <iostream>
using namespace std;

int main() {
	
    int N, sum = 0;
    
    cout << "Enter the value of N: ";
    
    cin >> N;

    for (int i = 1; i <= N; ++i) {
    	
        sum += i * i * i;  
    }

    cout << "Sum of cubes of first " << N << " natural numbers is: " << sum << endl;

    return 0;
}

