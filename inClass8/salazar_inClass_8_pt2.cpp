#include <iostream>
#include <string>

using namespace std;

void numCheck(int num) {
    if (num < 0) {
        cout << "Please enter a valid number higher or equal to 0." << endl;
    }
}

int main() {
    //Creating 2 arrays for the salsa type and the amount of jars.
    string salsaType[5] = {"mild", "medium", "sweet", "hot", "zesty"};
    int numOfJars[5];
    int sumOfSales = 0;

    cout << "\n" << endl;

    //Looping through a for loop to ask user how many jars were sold per salsaType.
    for(int i = 0; i < 5; i++) {
        int holder;

        cout << "How many jars were purchased for " << salsaType[i] << "? ";
        cin >> holder; 
        numCheck(holder);        //Checks number is a valid input.
        numOfJars[i] = holder;   //Assignes an int to the numOfSalsa array.

        sumOfSales += numOfJars[i];
    }

    cout << "\n" << endl;

    //Creting a for loop that will display all salsas and number of jars sold.  
    for(int i = 0; i < 5; i++) {
        cout << numOfJars[i] << " jars were sold of the " << salsaType[i] << " salsa.\n" << endl;
    }

    cout << "\n" << endl;

    //Displays the total amount of salsa jars sold. 
    cout << "The total of jars sold is: " << sumOfSales <<  endl;

    return 0;
}