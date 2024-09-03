#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    //Declaring variables for p[layer height and a storage for feet and inches.
    int playerHeight = 75;
    int feet, inchesLeft;

    //Calculation from inches to feet and remainder of inches left.
    feet =  playerHeight / 12;
    inchesLeft = playerHeight % 12;

    //Displayes information to the user.
    cout << "A " << playerHeight << " inch tall basketball player is " << feet <<  " feet " << inchesLeft << " inches tall." << endl;

    return 0;
}