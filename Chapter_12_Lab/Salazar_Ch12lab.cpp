//***************************************************************************
// Word Separator
// Programer: Darien Salazar
// Completed: 12/12/24
// Status: Complete.
//
// Purpose: User will input a sentence, from that sentence the letter from each
//          word will be capitalized and there will be a space inserted between each word.
//*************************************************************************

#include <iostream>
#include <string>
#include <cctype> // For isupper() and tolower()

using namespace std;

string convertSentence(const string &input) {
    string result;

    // Add the first character as is (capitalize if needed).
    if (!input.empty()) {
        result += input[0];
    }

    // Process the rest of the characters.
    for (size_t i = 1; i < input.length(); ++i) {
        if (isupper(input[i])) {
            // Add a space before appending the word, and convert to lowercase.
            result += ' ';
            result += tolower(input[i]);
        } else {
            result += input[i];
        }
    }

    return result;
}

int main() {
    // Input string.
    string input;
    cout << "Enter a camel-case sentence: ";
    cin >> input;

    // Convert the string.
    string converted = convertSentence(input);

    // Output the result.
    cout << "Converted sentence: " << converted << endl;

    return 0;
}
