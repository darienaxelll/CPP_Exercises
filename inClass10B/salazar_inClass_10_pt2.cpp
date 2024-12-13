#include <iostream>
using namespace std;

// Function prototype
int* fillArray(int n);

int main() {
    int n;

    // Ask the user for the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid size. Exiting program." << endl;
        return 1;
    }

    // Call fillArray and get the pointer to the dynamically allocated array
    int* array = fillArray(n);

    // Display the array
    cout << "The array contains: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    // Free the dynamically allocated memory
    delete[] array;

    return 0;
}

// Function to create and fill a dynamically allocated array
int* fillArray(int n) {
    // Dynamically allocate memory for the array
    int* arr = new int[n];

    // Fill the array with numbers from 1 to n
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    // Return the pointer to the array
    return arr;
}
