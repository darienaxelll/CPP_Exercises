//***************************************************************************
// Movie Program
// Programer: Darien Salazar
// Completed: 12/12/24
// Status: Complete.
//
// Purpose: This program will ask the user how many student were surveyed and create 
//           an array based on the response. Afterwards the array will be sorted and
//           an average will be calulated.
//*************************************************************************

#include <iostream>     // input/output declarations
#include <algorithm>    //Allows sort() use. 

using namespace std;

int main () {
    int arrSize;
    int students[arrSize];
    int moviesWatchedPerStudent[arrSize];

    cout << "How many students were surveyed: ";
    cin >> arrSize;

    for (int i = 0; i < arrSize; i++) {

        cout << "How many movies did student " << (i + 1) << " watch: ";
        cin >> moviesWatchedPerStudent[i];
    }

    cout << "Number of movies watched" << endl;
    cout << "-----------------------------------" << endl;

    for (int i = 0; i < arrSize; i++) {
        cout << moviesWatchedPerStudent[i] << endl;
    }

    return 0;
}