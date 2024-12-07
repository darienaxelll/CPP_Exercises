// Sales Bar Chart – Write a program that asks the user to enter today’s sales for each of three stores. The
// program should then produce a bar graph displaying each store’s sales. Create each bar in the graphs
// by displaying a row of asterisks. Each asterisk should represent $100 of sales rounded to the nearest
// $100.


#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//This function takes in the user's input and and verifies it is an int, also takes in the store number.
void numberValidation (int num, int storeNum) {
    if (!num) {
        cout << "Please enter a numeric number for store " << (storeNum + 1) << endl;
    }
};

//This function takes the store's array and the index of the loop for display purposes.
void getStoreSells(int stores[3] , int i) {
    cout <<  "Enter today's sales for store " << (i + 1) << ": ";   // Asks the user for the amount of sales.
        
    if (i == 0) {
        cin >> stores[i];       // Assignes the input of the user to the first element in the array.
        numberValidation(stores[i], i);
        while(stores[i] <= 0) {      // If the user's input is less than 0, a while loop starts  and wont stop till the input meets the criteria.
            cout << "Please enter a positive number for store 1" << endl;
            cout <<  "Enter today's sales for store 1: ";
            cin >> stores[i];
        };
    } else if (i == 1) {
        cin >> stores[i];       // Assignes the input of the user to the second element in the array.
        numberValidation(stores[i], i);
        while(stores[i] <= 0) {      // If the user's input is less than 0, a while loop starts  and wont stop till the input meets the criteria.
            cout << "Please enter a positive number for store 2" << endl;
            cout <<  "Enter today's sales for store 2: ";
            cin >> stores[i];
        };
    } else if (i == 2) {
        cin >> stores[i];       // Assignes the input of the user to the third element in the array.
        numberValidation(stores[i], i);
         while(stores[i] <= 0) {     // If the user's input is less than 0, a while loop starts  and wont stop till the input meets the criteria.
            cout << "Please enter a positive number for store 3" << endl;
            cout <<  "Enter today's sales for store 3: ";
            cin >> stores[i];
        };
    }
}

string numToAstrik(double storeSells) {
    string value;

    for (int i = 0; i < storeSells; i++) {
        value += "*";
    }

    return value;
}

void displayStoreSells (int numOfStores,  double store1, double store2, double store3) {
    for (int i = 0; i < numOfStores; i++) {
        if (i == 0) {
            cout << "Store " << (i + 1) << ": " << numToAstrik(store1) << endl;
        } else if (i == 1) {
            cout << "Store " << (i + 1) << ": " << numToAstrik(store2) << endl;
        } else if (i ==  2) {
            cout << "Store " << (i + 1) << ": " << numToAstrik(store3) << endl;
        }
    } 
}

int main() {
    int numOfStores = 3;
    int stores[numOfStores];

    for (int i = 0; i < numOfStores; i++) {
        getStoreSells(stores, i);
    }

    cout << endl << "DAILY SALES" << endl << "(each * = $100)\n" << endl;

    double updateStore1 = round(stores[0]/100);     // Converts the user's input into a rounded number for store 1.
    double updateStore2 = round(stores[1]/100);     // Converts the user's input into a rounded number for store 2.
    double updateStore3 = round(stores[2]/100);     // Converts the user's input into a rounded number for store 3.

    displayStoreSells(numOfStores, updateStore1, updateStore2, updateStore3);

    return 0;
}