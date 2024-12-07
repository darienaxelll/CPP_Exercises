#include <iostream>

using namespace std;

// Declaring function.
int validation(int, bool);

int main() {

    int MAX_NUM;            // This int will be assigned to the array size.
    int testsPassed = 0;    // Initializing variables
    double total = 0;

    cout << "Enter number of test: ";       // Get inpit from user and storing it for array size.
    cin >> MAX_NUM;

    int tests[MAX_NUM];                                 //Initializes an array with the size provided by the user.       
    int arrSize = sizeof(tests) / sizeof(tests[0]);     //Creating a variable to store the size of the array.

    // For loop that will iterate n times, each time requesting a grade for a test.
    for  (int i = 0; i < MAX_NUM; i++) {
        int testInput;
        bool pass = false;

        cout << "Enter the grade for test " << (i + 1) << ": ";
        cin >> testInput;

        tests[i] = validation(testInput, pass);
        
    }


    //  This range for loop will have 2 functions: to check if a test grade is = or > than 80 AND create a sum total of the grades.
    for (auto i : tests) {

        total = total + i;

        if (i >= 80) {
            testsPassed++;
        }
    }

    cout << "The number of tests with a grade above an 80: " << testsPassed << endl;
    cout << "The average score is: " << (total / arrSize) << endl;      // Taking the total sum of the grades and dividing them by the number of test to get an average.

    return 0;
}

int validation(int testInput, bool pass) {
    if (testInput < 0 || testInput > 100) {
        while (!pass) {
            cout << "Test grade must be between 0 and 100. Try again..." << endl;
            cin >> testInput;

            if (testInput >= 0 && testInput <= 100) {
                pass = true;
            }
        }
    }

    return testInput;
}
