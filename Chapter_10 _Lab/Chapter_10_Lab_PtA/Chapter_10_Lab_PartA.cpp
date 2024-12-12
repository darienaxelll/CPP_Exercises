//***************************************************************************
// Median Function
// Programer: Darien Salazar
// Completed: 12/12/24
// Status: Complete.
//
// Purpose: The program will have a function that will take the median of an array.
//          The functions will be using refrenced arguments insted of direct variables.
//*************************************************************************

#include <iostream>     // input/output declarations
#include <iomanip>      // i/o manupulator declarations
#include <algorithm>    // Allows the use of sorting functions.

using namespace std;

//Function prototype declaration.
void findMedian(int* arr, int);
void printArray(int* arr, int);

int main () {

    int evenArr[] = {17, 32, 45, 68, 99, 101, 67, 89, 22, 27};      //Initializing Even Arr.
    int oddArr[] = {17, 32, 45, 68, 99, 101, 67, 89, 22};           //Initializing Odd Arr.
    int evenArrSize = sizeof(evenArr)/sizeof(evenArr[0]);           //Getting the size of the even array.
    int oddArrSize = sizeof(oddArr)/sizeof(oddArr[0]);              //Getting the size of the odd array.

    cout << "Median of the odd array:" << endl;
    sort(oddArr, (oddArr + oddArrSize));                //The sort fuction will rearrange the elements in the odd array.
    printArray(oddArr, oddArrSize);                     //Here the array will be printed to the user in a sorted order.
    findMedian(oddArr, oddArrSize);                     //The function will illustrate the middle elemenet of the odd array.

    cout << "\n";

    cout << "Median of the even array:" << endl;
    sort(evenArr, (evenArr + evenArrSize));             //The sort fuction will rearrange the elements in the even array.
    printArray(evenArr, evenArrSize);                   //Here the array will be printed to the user in a sorted order.
    findMedian(evenArr, evenArrSize);                   //The function will illustrate the sum of the two most middle elements of the even array.

    return 0;
}

//This function will take an array and determind if its an even or odd size array.
void findMedian(int* arr, int size) {

    //If the arr size is odd, we will take the middle element and display it.
    if (!(size % 2 == 0)) {
        cout << "is " << *(arr + size/2) << endl;
    } else {
        int average = *(arr + (size/2) + 1) + *(arr + (size/2) - 1);        //Here we are creating a int variable that will store the sum of the 4th and 5th element.

        cout << "is " << floor(average/2) << endl;                          //The "average" variable is divided by 2 and rounded.
    }
}

//Displays the array to the user.
void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }

    cout << endl;
}