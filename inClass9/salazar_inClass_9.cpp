#include <iostream>
#include <cmath>

using namespace std;

int findNumber(int arr[], int, int, int);

int main () {

    int luckyNumbers[] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};    //Initializing array with designated numbers.
    int arrSize = sizeof(luckyNumbers)/sizeof(luckyNumbers[0]);                                     //Finding th size of the array.
    int target;

    cout << "Enter this weeks lucky 5 numbers: ";
    cin >> target;                                                                                  //Asks user for target number.

    sort(luckyNumbers, luckyNumbers + arrSize);                                                    //Sorts the original array from least to greatest.

    int result = findNumber(luckyNumbers, 0, (arrSize - 1), target);

    if (result == -1) {
        cout << "You lost, try again next time..." << endl;
    } else {
        cout << "You won!" << endl;
    }

    // for(int i = 0; i < arrSize; i++) {
    //     if (winningNumber == luckyNumbers[i]) {
    //         cout << "You have won!" << endl;

    //         return 0;
    //     }
    // }

    // cout << "You lost, better luck next time!" << endl;

    return 0;
}

int findNumber(int arr[], int start, int end, int target) {

    //Creates a loop that will keep going till the element is found or runs out of elements to compare.
    while(start <= end) {

        int middle = start + (end - start) / 2;             //Determinds the middle of the array.

        if (arr[middle] == target) {                        //Checks if the middle element is the target element, if so, exits the loop.
            return target;
        }

        if (arr[middle] < target) {                         //If the middle element is smaller than the target, drops the left side of the array and does the search again.
            start = middle + 1; 
        } else {
            end = middle - 1;                               //If the middle element is bigger than the target, drops the right side of the array and does the search again.
        }
    }

    return -1;                                              // If code reaches this point, the target was not found in the array.
}