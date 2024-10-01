#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main(){
    int numOfEggs = 0;  //Creates a variable that will store all eggs.
    int eggsPerDay; // Variable will take a number from the text file.

    ifstream file("eggs.txt");  // Allows the program to access the eggs.txt file.

    // Creating a loop that will read all info from the file.
    while (file >> eggsPerDay) {
        numOfEggs += eggsPerDay;    // Takes the number per loop and adds it to the numOfEggs variable.
    }

    file.close();   // Closes the file.

    cout << "Total eggs collected: " << numOfEggs << endl;  //Displays the total amount of eggs collected.

    return 0;
}