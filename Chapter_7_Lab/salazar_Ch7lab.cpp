#include <iostream>
#include <iomanip>

using namespace std;

// Delaring Tips class
class Tips {
private:
    double taxRate;

public:
    Tips (double rate) {
        taxRate = rate;
    }

    double computeTip(double billAmount, double tipRate) {
        double beforeTaxes = billAmount - (billAmount * (taxRate/100));     // This section will get the total amount by subrtacting the amount of taxes from the total bill.
        double tipTotal = beforeTaxes * (tipRate/100);                      // Once a beforeTax valuer is established, the desired percent of tip will be calculated.

        return tipTotal;                                                    // The total amount of tip will be stored here.
    }

};

int main () {
    
    // Declaring variables for userInput.
    double taxRate, tipPercent, billAmount;
    bool proceed = true;
    char userInput;

    cout << "\nThis program will compute a restaurant tip based on a total\nbill amount and the % the parton wishes to tip the server.\n" << endl;

    cout << "Tax % for this location: ";
    cin >> taxRate;

    while (taxRate < 0) {
        cout << "Tax % cannot be less than 0. Please re-enter tax %: ";     // This  while loop will  ake sure that the inoput is positive. Once a valid input is typed,
        cin >> taxRate;                                                     // the loop will break.
    }                           

    Tips newTip(taxRate);

    while (proceed) {
        cout << "\n************** Tip Helper **************\n" << endl;
        cout << "Enter total bill amount: ";
        cin >> billAmount;
        cout << "Enter desired tip %  ";
        cin >> tipPercent;
        cout << "\n";

        cout << "The tip should be: $" << fixed << setprecision(2) << newTip.computeTip(billAmount, tipPercent) << endl;
        cout << "Compute another tip (y/n)? ";
        cin >> userInput;

        if (userInput == 'n' || userInput == 'N') {
            proceed = false;
        }
    }

    return 0;
}

