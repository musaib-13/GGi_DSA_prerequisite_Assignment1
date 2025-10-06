#include <iostream>
using namespace std;

int main() {
    int p, r, t;      // principal, rate, time
    int si;           // simple interest

    cout << "Calculate the Simple Interest:\n";
    cout << "------------------------------\n";

    cout << "Input the Principal: ";
    cin >> p;

    cout << "Input the Rate of Interest: ";
    cin >> r;

    cout << "Input the Time (in years): ";
    cin >> t;

    si = (p * r * t) / 100;   // formula to calculate simple interest

    cout << "The Simple interest for amount " << p 
         << " for " << t << " years @ " << r << "% is: " << si << endl;

    return 0;
}

