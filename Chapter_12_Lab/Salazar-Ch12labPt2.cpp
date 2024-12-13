//***************************************************************************
// Word Separator
// Programer: Darien Salazar
// Completed: 12/12/24
// Status: Complete.
//
// Purpose: This program will create 3 fucntions. 
//*************************************************************************

#include <iostream>
#include <cctype> // For isupper(), islower(), toupper(), tolower()
#include <cstring> // For C-strings

using namespace std;

void upper(char *str);
void lower(char *str);
void flip(char *str);

int main() {
    const size_t SIZE = 100;
    char input[SIZE];

    // Input string
    cout << "Enter a string (up to 99 characters): ";
    cin.getline(input, SIZE);

    // Create copies for manipulation
    char upperStr[SIZE], lowerStr[SIZE], flipStr[SIZE];
    strcpy(upperStr, input);
    strcpy(lowerStr, input);
    strcpy(flipStr, input);

    upper(upperStr);
    lower(lowerStr);
    flip(flipStr);

    // Output results
    cout << "Original string: " << input << endl;
    cout << "Uppercase: " << upperStr << endl;
    cout << "Lowercase: " << lowerStr << endl;
    cout << "Flipped case: " << flipStr << endl;

    return 0;
}

void upper(char *str) {
    for (size_t i = 0; str[i] != '\0'; ++i) {
        str[i] = toupper(str[i]);
    }
}

void lower(char *str) {
    for (size_t i = 0; str[i] != '\0'; ++i) {
        str[i] = tolower(str[i]);
    }
}

void flip(char *str) {
    for (size_t i = 0; str[i] != '\0'; ++i) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        } else if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }
}

