#include <iostream>
#include <iomanip>

using namespace std;

//Function that calculates and displayes information to the user.
void profitCaluclation() {
    //Declaring variables.
    float total, profit;
    //Sets a production price.
    float productCost = 8.00;

    //Calculates the desired profit the user wants.
    profit = productCost * 0.35;
    //Add the desiredprofit top the production cost.
    total = productCost + profit;

    cout << "To have a 35% profit, the flash drive should sell for $" << total << endl;
}

int main(){

    profitCaluclation();

    return 0;
}