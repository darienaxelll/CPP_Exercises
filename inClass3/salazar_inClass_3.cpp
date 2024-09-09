#include <iostream>
#include <iomanip>

using namespace std;

float userPrompt(string prompt) {
    float value;

    cout << "Please enter the " << prompt << " expense: $";
    cin >> value;

    return value;
}

void calculateTotalExpenses(float rentOrMortgage, float utilities, float phone, float internet) {
    float totalExpensesPerMonth = rentOrMortgage + utilities + phone + internet;
    float totalYearlyExpense = totalExpensesPerMonth * 12;

    cout << "Monthly expense: $" << totalExpensesPerMonth << endl;
    cout << "Yearly expense: $" << totalYearlyExpense << endl;
}

int main(){

    cout << endl;

    float rentOrMortgage, utilities, phone, internet;

    rentOrMortgage = userPrompt("mortgage or rent");
    utilities = userPrompt("utilities");
    phone = userPrompt("phone");
    internet = userPrompt("internet");

    cout << endl;

    calculateTotalExpenses(rentOrMortgage, utilities, phone, internet);

    return 0;
}