// Candy Bar Sales – Using Program 1-1 as
// an example, write a program that calculates
// how much a student organization earns
// during its fund-raising candy sale. The
// program should prompt the user to enter
// the number of candy bars sold and the
// amount an organization earns for each bar
// sold. It should then calculate and display
// the total amount earned.

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    //Declaring variables for candyQty, price and total.
    int candyQty;
    float price, total;

    //Ask the user the amount of candies sold.
    cout << "How many candy bars were sold today?" << endl;
    cin >> candyQty;

    //Ask the price for each candy bar.
    cout << "How much per candy?" << endl;
    cin >> price;

    //Calculate the total by multiplying the candyQty by price.
    total = candyQty * price;

    //Shows the user the total made for the fundraiser.
    cout << "The total amount made for the fundraiser was : $" << setprecision(4) << total << endl;

    return 0;
}