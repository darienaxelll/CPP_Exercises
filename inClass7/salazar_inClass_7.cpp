#include <iostream>

using namespace std;

class Triangle {
private:
    double base;
    double height;

public:
    void setBase(double x) {
        base = x;
    }

    void setHeight(double y) {
        height = y;
    }

    double calculateArea(double x, double y) {
        double result;

        result = (0.5 * x * y);

        return result;
    }

    Triangle() {
        base = 0;
        height = 0;
    }
};

int main(){
    double base, height;

    cout << "Please enter the base of the triangle: ";
    cin >> base;
    cout << "Please enter the height of the triangle: ";
    cin >> height;

    Triangle MyTriangle;
    MyTriangle.setBase(base);
    MyTriangle.setHeight(height);

    cout << "The area of the triangle is: " << MyTriangle.calculateArea(base, height);

    return 0;
}