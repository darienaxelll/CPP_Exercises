#include <iostream>
#include <iomanip>

using namespace std;

// Creating a function to check validity of user's input.
void numberValidation(int input) {
    //This statement will check if the input is a number
    if (!input) {
        cout << "Invalid input, please enter a number." << endl;
    }
    if (input < 0)  {
        cout << "Invalid input, please enter a number equal to or higher than 0." << endl;
    }
}

//This function will take the userinput and compare it to multiple options and display a messaged based on input.
void calculatePoints(int input) {
    if(input > 4) {
        input = 4;
    }

    switch(input) {
        case 1:
            cout << "You get 5 points." << endl;
            break;
        case 2:
            cout << "You get 15 points." << endl;
            break;
        case 3:
            cout << "You get 30 points." << endl;
            break;
        case 4:
            cout << "You get 60 points." << endl;
            break;
        default:
            cout << "You get 0 points." << endl;
    }
}

int main(){

    // Creating a variable to store the user's input.
    int booksPurchased;

    cout << "Please enter the amount of books purchased: ";
    cin >> booksPurchased;

    numberValidation(booksPurchased);

    if (booksPurchased) {
        calculatePoints(booksPurchased);
    }


    return 0;
}