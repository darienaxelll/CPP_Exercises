#include <iostream>
#include <string>

using namespace std;

void functionOne(string* arr, int);
void functionTwo(string arr[], int);
void functionThree(string* arr, int);
void functionFour(string* arr, int);

int main () {

    string pets[] = {"dog", "cat", "bird", "hamster", "fish"};
    int arrSize = sizeof(pets)/sizeof(pets[0]);
    auto* petsPtr = &pets;

    functionOne(*petsPtr, arrSize);
    functionTwo(pets, arrSize);
    functionThree(*petsPtr, arrSize);
    functionFour(*petsPtr, arrSize);

    return 0;
}

void functionOne(string* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }

    cout << "\n";
}

void functionTwo(string arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }

    cout << "\n";
}

void functionThree(string* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << "\n";
}

void functionFour(string* arr, int size) {
    for (int i = 0; i < size; i++) {
        string *ptr = &arr[i];
        cout << &ptr << " ";
    }
}