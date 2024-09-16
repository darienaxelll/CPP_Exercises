#include <iostream>
#include <iomanip>

using namespace std;

//Created a function to produce prompts for the user.
float userPrompt(string prompt) {
    float value;

    cout << "Please enter the " << prompt << " expense: $";
    cin >> value;

    return value;
}

//This function takes all the inputs from the user and calculates the total expenses monthly and annually.
void calculateTotalExpenses(float rentOrMortgage, float utilities, float phone, float internet) {
    float totalExpensesPerMonth = rentOrMortgage + utilities + phone + internet;
    float totalYearlyExpense = totalExpensesPerMonth * 12;

    cout << "Monthly expense: $" << fixed << setprecision(2) << totalExpensesPerMonth << endl;
    cout << "Yearly expense: $" << fixed << setprecision(2) << totalYearlyExpense << endl;
}

int main(){

    cout << endl;

    //Declaring float varibles.
    float rentOrMortgage, utilities, phone, internet;

    rentOrMortgage = userPrompt("mortgage or rent");
    utilities = userPrompt("utilities");
    phone = userPrompt("phone");
    internet = userPrompt("internet");

    cout << endl;

    calculateTotalExpenses(rentOrMortgage, utilities, phone, internet);

    return 0;
}