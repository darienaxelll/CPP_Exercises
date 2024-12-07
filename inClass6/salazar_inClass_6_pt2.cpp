#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

void getNumber(int &r);
bool numberValidation(int);

int main(){
    int value = 5;

    cout << "Value before change is: " << value << endl;

    getNumber(value);

    cout << "Value after change is: " << value << endl;

    return 0;
}

bool numberValidation(int num) {
    bool value = false;

    while (!value) {
        if (num < 1) {
            cout << "Inputs must be equal to or higher than 1. Please try again..." << endl;
        } else if (num > 100) {
            cout << "Inputs must be equal to or lower than 100. Please try again..." << endl;
        } else {
            value = true;
            break;
        }
        cin >> num;
    }

    return value;
}

void getNumber(int &r) {
    int userInput;
    bool validInput;

    cout << "Enter a number between 1 and 100: " << endl;
    cin >> userInput;

    validInput = numberValidation(userInput);
}