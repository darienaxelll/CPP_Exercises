#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

//Prototype functions
int max(int, int);
double max(double, double);
char max(char, char);


int main(){

    int intValueOne, intValueTwo;                //Declaring int vaiables
    double doubleValueOne, doubleValueTwo;      //Declaring double variables
    char charValueOne, charValueTwo;            //Declaring char variables

    max(intValueOne, intValueTwo);
    cout << endl;
    max(doubleValueOne, doubleValueTwo);
    cout << endl;
    max(charValueOne, charValueTwo);

    return 0;
}

int max (int x, int y) {
    cout << "Enter the first value: " << endl;
    cin >> x;

    cout << "Enter the second value: " << endl;
    cin >> y;

    if (x > y) {
        cout << "Winner: " << x << endl;
        return x;
    } else if (x == y) {
        cout << "The integers are equal." << endl;
        return -1;
    } else {
        cout << "Winner: " << y << endl;
        return y;
    }
}

double max (double x, double y) {
    cout << "Enter the first value: " << endl;
    cin >> x;

    cout << "Enter the second value: " << endl;
    cin >> y;

    if (x > y) {
        cout << "Winner: " << x << endl;
        return x;
    } else if (x == y) {
        cout << "The integers are equal." << endl;
        return -1;
    } else {
        cout << "Winner: " << y << endl;
        return y;
    }
}

char max (char x, char y) {
    cout << "Enter the first value: " << endl;
    cin >> x;

    cout << "Enter the second value: " << endl;
    cin >> y;

    if (x > y) {
        cout << "Winner: " << x << endl;
        return x;
    } else if (x == y) {
        cout << "The integers are equal." << endl;
        return -1;
    } else {
        cout << "Winner: " << y << endl;
        return y;
    }
}