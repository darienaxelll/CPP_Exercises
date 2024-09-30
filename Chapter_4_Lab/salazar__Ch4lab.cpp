// The Speed of Sound
//
// Write a program that displays a menu allowing the user to select air, water, or steel, and then has the
// user enter the number of feet a sound wave will travel in the selected medium. The program should
// then compute and display (with four decimal places) the number of seconds it will take. Your program
// should check if the user enters a valid menu choice, if not, it should terminate with an appropriate
// message.

#include <iomanip>
#include <ios>
#include <iostream>

using namespace std;

//Constants:
const int AIR = 1100;
const int WATER = 4900;
const int STEEL = 16400;

//Variables:
int userInput;
double distanceTraveled;

//This function displays a menu for the user to select between 1,2 or 3.
int menuDisplay() {
    int value;
    string prompt(" 1. Air\n 2. Water\n 3. Steel\n");

    cout << "Select a substance for the sound to travel through: \n" << setw(5) << prompt << endl; 
    cin >> value;

    //Checks to make sure the value is a numeric value.
    if (!value) {
        cout << "Invalid input, please restart." << endl;
    } else if (value < 1 || value > 3) {
        cout << "Please select from the prompted options." << endl; // Checks that the value entered is between 1 and 3.
    }

    return value;
}

double travelDistance() {
    double value;

    cout << "Enter the number of feet the sound will travel:  " << endl;
    cin >> value;

    //Verifies that the value is numeric.
    if (!value) {
        cout << "Please enter a numerical number" << endl;
    } else if(value < 0) {
        cout << "Please enter a number greater than 0 to continue." << endl;  //MAkes sure the number is greater than 0.
    }

    return value;
}

void calculationFunction (int element, double distance) {
    double time;
    string selectedElement;

    //Takes takes the number selected by the user and assignes one of the constants to it.
    if (element == 1) {
        time = (distance/AIR);
        selectedElement = "air";
    } else if (element == 2) {
        time = (distance/WATER);
        selectedElement = "water";
    } else if (element == 3) {
        time = (distance/STEEL);
        selectedElement = "steel";
    }

    cout << "The soundwave will travel " << distance << " feet through " << selectedElement << " in " << fixed << setprecision(4) << time << " seconds." << endl;
}

int main(){

    cout <<  "This program will tell ou how long it takes a sound wave to travel a specific distance through a paticular medium." << endl;

    userInput = menuDisplay();
    distanceTraveled = travelDistance();
    calculationFunction(userInput, distanceTraveled);


    return 0;
}