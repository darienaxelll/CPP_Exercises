#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

//This function verifies that the input provided is of type int and also not negative.
void numberVerification(int num) {
    if(!num) {
        cout<< "Please enter a numeric number, please try again." << endl; 
    } else if (num < 0) {
        cout << "Please enter a number higher or equal to 0." << endl;
    }
}

int main(){
    int days;

    ofstream file("eggs.txt");  //Creates a file named eggs.txt.

    cout << "How many days will we be keeping track of: ";
    cin >> days;    //Takes  the number provided by the user to determind the time the loop will iterate.
    numberVerification(days);   //Verification function.

    //Creating a loop that will ask the user for the amount of eggs per given day.
    for (int i = 0; i < days; i++) {
        int numOfEggs;

        cout << "How many eggs were gathered on day " << (i + 1) << "? " << endl;
        cin >> numOfEggs;
        numberVerification(numOfEggs);  //Verification function.
        file << numOfEggs << endl;
    }

    file.close();   //Closes file.

    return 0;
}