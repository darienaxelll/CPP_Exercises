#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int counter = 0;    // Initilazing a counter for the while loop.

    //Creating a while loop that will display "Hello World!" until the condition is met.
    while(counter < 10) {
        cout << "Hello World!" << endl;
        ++counter;  // Increases the counter by one.
    }

    return 0;
}