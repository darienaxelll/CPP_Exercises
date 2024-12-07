#include <iostream>
#include <iomanip>

using namespace std;

// Function prototypes declaration.
double getSales(string);
void findHighest(double, double, double, double);

int main(){

    // Declaring all necessary variables.
    string NORTHEAST = "Northeast";
    string SOUTHEAST = "Southeast";
    string NORTHWEST = "Northwest";
    string SOUTHWEST = "Southwest";
    double northEastSales, southEastSales, northWestSales, southWestSales;

    // Calling getSales() fout times to assign values.
    northEastSales = getSales(NORTHEAST);
    southEastSales = getSales(SOUTHEAST);
    northWestSales = getSales(NORTHWEST);
    southWestSales = getSales(SOUTHWEST);

    // Comparing all values to  determind who had the highest sales overall.
    findHighest(northEastSales, southEastSales, northWestSales, southWestSales);

    return 0;
}

double getSales(string divisionName) {
    double value;   // Declaring a variable as a holder.

    cout << "Enter quarterly sales for the " << divisionName << " division: ";
    cin >> value;

    // This while loop gets "activated" if the user's input is less than 0 and will continue till a valid number is entered.
    while (value < 0) {
        cout << "Sales figures cannot be negative. Please re-enter." << endl;
        cout << "Enter quarterly sales for the " << divisionName << " division: ";
        cin >> value;
    }

    return value;
}

void findHighest(double northEast, double southEast, double northWest, double southWest) {

    // Decclaring variables as holders.
    double winnerSalesEast, winnerSalesWest, winnerSalesOverall;
    string winnerDivisionEast, winnerDivisionWest, winnerDivisionOverall;

    if (northEast > southEast) {
        winnerSalesEast = northEast;            // On this if statment we compare both EAST locations and establish a east winner.
        winnerDivisionEast = "Northeast";
    } else {
        winnerSalesEast = southEast;
        winnerDivisionEast = "SouthEast";
    }

    if (northWest > southWest) {
        winnerSalesWest = northWest;            // On this if statement we compare both WEST locations and establish a west winner.
        winnerDivisionWest = "Northwest";
    } else {
        winnerSalesWest = southWest;
        winnerDivisionWest = "Southwest";
    }

    if (winnerSalesEast > winnerSalesWest) {
        winnerSalesOverall = winnerSalesEast;           // After finding an east and west winner, we compare both winners and establish
        winnerDivisionOverall = winnerDivisionEast;     // an overall winner.
    } else {
        winnerSalesOverall = winnerSalesWest;
        winnerDivisionOverall = winnerDivisionWest;
    }

    cout << "The " << winnerDivisionOverall << " division had the highest sales this quarter." << endl;     // Displays winner and sales  to the user.
    cout << "Their sales were $" << fixed << setprecision(2) << winnerSalesOverall << endl;
}
