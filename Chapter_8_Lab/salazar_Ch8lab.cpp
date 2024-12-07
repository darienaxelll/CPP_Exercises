#include <iostream>
#include  <fstream>
#include <string>

using namespace std;

class PayRoll {
    private:
        double workedHrs;
        double payRate;

    public:
        void setPayRate(double rate) {
            payRate = rate;
        }

        void setHrsWorked(double hours) {
            workedHrs = hours;
        }

        void getPayRate() {
            cout << payRate;
        }

        void getHours() {
            cout << workedHrs;
        }

        double calculateGrossPay() {
            double grossPay = workedHrs * payRate;

            return grossPay;
        }
};

int main() {

    //Creates a file object from .dat
    ifstream payrollFile("payroll.dat");

    //Checks if file fails to open.
    if(!payrollFile.is_open()) {
        cerr << "Could not find file, try again." << endl;

        return 1;
    } 

    int arrSize = 7;            //Create an int with the size of array for easier modifiation.
    PayRoll employees[7];       // Creates and array from PayRoll data type.

    //Loops through employees array and assignes hours worked and the pay-rate for each element.
    for(int i = 0; i < arrSize; i++) {
        double hours;
        double rate;

        payrollFile >> hours >> rate;

        employees[i].setHrsWorked(hours);
        employees[i].setPayRate(rate);
    }

    cout << "Employee\tGross pay" << endl;
    cout << "=======\t\t========" << endl;

    //Loops again through the employees array after getting information assigned and calculates grossPay.
    for(int i = 0; i < arrSize; i++) {     
        double holder = employees[i].calculateGrossPay();   //Variable dedicated to attach the calculation made by the function.

        //Displays the information to the user. 
        cout << "   " << (i + 1) << ":\t\t$" << fixed << setprecision(2) << holder << endl;
    }

    return 0;
}