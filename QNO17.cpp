#include <iostream>
using namespace std;


bool isLeapYear(int year) {
	
    if (year % 400 == 0)
    
        return true;
        
    if (year % 100 == 0)
    
        return false;
        
    if (year % 4 == 0)
    
        return true;
        
    return false;
}

int main() {
    int startYear, endYear;

    cout << "Enter start year: ";
    cin >> startYear;

    cout << "Enter end year: ";
    cin >> endYear;

    cout << "Leap years between " << startYear << " and " << endYear << " are:" << endl;

    for (int year = startYear; year <= endYear; year++) {
    	
        if (isLeapYear(year)) {
        	
            cout << year << endl;
        }
    }

    return 0;
}

