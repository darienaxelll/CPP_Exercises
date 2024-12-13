#include <iostream>
#include <string>

using namespace std;

int main () {
    string foodItems[] = {"eggplant", "squash", "apples", "hamburger", "pizza", "shampoo", "soap", "laundry", "detergent", "bacon"};
    int arrSize = sizeof(foodItems)/sizeof(foodItems[0]);

    for (int i = 0; i < arrSize; i++) {
        if (foodItems[i] > foodItems[i + 1]) {
            string temp = foodItems[i];

            foodItems[i] = foodItems[i + 1];
            foodItems[i + 1] = temp;
        }
    }

    for (int i = 0; i < arrSize; i++) {
        cout  << foodItems[i] << " ";
    }

    return 0;
}