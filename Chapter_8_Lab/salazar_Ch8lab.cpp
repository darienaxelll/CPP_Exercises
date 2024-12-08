//************************************************************************************************************************************ 
// Payroll Program
// Programer: Darien Salazar
// Completed: 12/8/24
// Status: Resubmitted. Addressed "setpreccision" issue by adding <iomanip> header. Added addidional notes and intro portion.
//
// Purpose: This program should take the information from a .dat file. Once the information is read, is will be assignes to a variable
//          for future calulation of gross pay of each employee. Once the information is calulated, it will be displayed to the user.
//************************************************************************************************************************************ 

#include <iostream>     // input/output declarations
#include <iomanip>      // i/o manupulator declarations
#include  <fstream>     // Allows reading files.
#include <string>       // Allows the use of string variables.

using namespace std;

class PayRoll {
    private:
        double workedHrs;       // Declaring variable for hours worked.
        double payRate;         // Delcaring variable for the pay rate for set employee.

    public:
        // Assignes the pay rate to the variable.
        void setPayRate(double rate) {
            payRate = rate;
        }

        // Assignins the hours to the variable.
        void setHrsWorked(double hours) {
            workedHrs = hours;
        }

        // Allows the extraction of the variable since its a private catagory.
        void getPayRate() {
            cout << payRate;
        }

        //// Allows the extraction of the variable since its a private catagory.
        void getHours() {
            cout << workedHrs;
        }

        // Takes both variables and multiplies them to get a new variable (grossPay).
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
        cout << "   " << (i + 1) << ":\t\t$" << fixed << showpoint << setprecision(2) << holder << endl;
    }

    return 0;
}