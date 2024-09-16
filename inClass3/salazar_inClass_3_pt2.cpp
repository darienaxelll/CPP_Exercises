#include <iostream>
#include <iomanip>

using namespace std;

//This function takes in 3 parameters to calculate the amount of widgets per pallet.
int calculateAmountOfWidgets(float palletWeight, float palletWeightWithWidgets, float widgetWeight) {
    int value;

    value = (palletWeightWithWidgets - palletWeight) / widgetWeight;

    return value;
}

int main(){
    //Declaring variables.
    int widgets;
    float widgetWeight = 9.2;
    float palletWeight, palletWeightWithWidgets;

    //Prompts the user to enter pallet weight.
    cout << "Enter pallets weight in lbs: ";
    cin >> palletWeight;

    //Prompts the user to enter pallet weight WITH widgets.
    cout << "Enter pallets weight with widgets in lbs: ";
    cin >> palletWeightWithWidgets;

    widgets = calculateAmountOfWidgets(palletWeight, palletWeightWithWidgets, widgetWeight);

    cout << endl;

    //Displays information to the user.
    cout << "The amount of widgets on this pallet are: " << widgets << " widgets" << endl;
 
    return 0;
}