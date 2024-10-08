// Property Tax
//
// Madison County collects property taxes on the assessed value of property, which is 60 percent of its
// actual value. For example, if a house is valued at $158,000, its assessed value is $94,800. This is the
// amount the homeowner pays tax on. At last year’s tax rate of $2.64 for each $100 of assessed value,
// the annual property tax for this house would be $2502.72. Write a program that asks the user to input
// the actual value of a piece of property and the current tax rate for each $100 of assessed value. The
// program should then calculate and report how much annual property tax the homeowner will be
// charged for this property.

#include <iostream>
#include <iomanip>

using namespace std;

//Constants.
const double MADISON_TAX_PERCENT = .6;

//Declaring float variables.
double propetryValue, assessedValue, propetryTax, taxRate;

//Function that takes one parameter taht will be uses to calculate the assessedValue. 
double calculateAssesedValue(double propetryValue) {
    double assessedValue = propetryValue * MADISON_TAX_PERCENT;

    cout << "Assesed Value: $" << assessedValue << fixed << setprecision(2) << endl;

    return assessedValue;
}

//Function that takes 2 parameters to calculate the amount of taxRate the user will pay for the year.
void calculatePropertyTax(double assessedValue, double taxRate) {
    double propetryTax = (assessedValue/100) * taxRate;

    cout << "Property Tax: $" << propetryTax << fixed << setprecision(2) << endl;
}

int main(){

    cout << endl;

    //Asks the user for the propertyValue.
    cout << "Enter actual property value: $";
    cin >> propetryValue; 

    //Request the user to type the tax per $100 of the assessed value.
    cout << "Enter the amount of tax per $100 of assesed value: $";
    cin >> taxRate; 

    cout << endl;

    cout << "Property Value: $" << propetryValue << fixed <<  setprecision(2) << endl;
    assessedValue = calculateAssesedValue(propetryValue);
    calculatePropertyTax(assessedValue, taxRate);

    cout << endl;

    return 0;
}