#include <iostream>
using namespace std;

int main() {
    int num1, num2, min, gcd = 1;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    min = (num1 < num2) ? num1 : num2;

    for (int i = 2; i <= min; ++i) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }
    
    if (gcd == 1)
    
        cout << num1 << " and " << num2 << " are co-prime numbers." << endl;
        
    else
    
        cout << num1 << " and " << num2 << " are not co-prime numbers." << endl;

    return 0;
}

