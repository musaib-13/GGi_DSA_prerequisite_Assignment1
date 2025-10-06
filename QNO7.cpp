#include <iostream>
using namespace std;

int main() {
    int asciiCode;
    
    char character;

    cout << "Enter an ASCII code (integer): ";
    
    cin >> asciiCode;

    
    character = char(asciiCode);

    cout << "The character for ASCII code " << asciiCode << " is '" << character << "'" << endl;

    return 0;
}

