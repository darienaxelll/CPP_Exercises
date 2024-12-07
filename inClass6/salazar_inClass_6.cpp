#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

double calculateRetail(double, double);  //Creating a prototype with 2 double variables.

int main(){
    double wholesaleCost, markupPercentage, newValue;   //Declaring 3 variables.

    cout << "Enter wholesale cost: $";
    cin >> wholesaleCost;

    cout << "Enter mark-up percent: ";
    cin >> markupPercentage;

    newValue = calculateRetail(wholesaleCost, markupPercentage);

    cout << "The price after markup is: $" << fixed << setprecision(2) << newValue << endl;

    return 0;
}

double calculateRetail(double wholesaleCost, double markupPercentage)  {
    double addOn = wholesaleCost * (markupPercentage/100);  //Takes the percent given by the user and turns it into a decimal that then it's multiplied to the wholesale cost.
    double newValue =  wholesaleCost + addOn;   //After getting the add on value, it gets addes to the wholesale value and a new value is created.

    return newValue;
}