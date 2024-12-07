#include <iostream>

using namespace std;

class TempScale {
private:
    double fahrenheit, celsius;

public:
    void setFahrenheit(double value) {
        fahrenheit = value;
    }

    double getFahrenheit() {
        return fahrenheit;
    }

    void setCelsius(double value) {
        celsius = value;
    }

    double getCelsius(){
        return celsius;
    }
};

class Reading {
private:
    double humidity;
    int windSpeed;
    TempScale temperature;

public:
    void setHumidity(double value) {
        humidity = value;
    }

    double getHumidity() {
        return humidity;
    }

    void setWindSpeed(int value) {
        windSpeed = value;
    }

    int getWindSpeed() {
        return windSpeed;
    }

    void setTemperature (double fahrenheit, double celsius) {
        temperature.setFahrenheit(fahrenheit);
        temperature.setCelsius(celsius);
    }

    double getTemperatureFahrenheit() {
        return temperature.getFahrenheit();
    }

    double getTemperatureCelsius() {
        return temperature.getCelsius();
    }
};

int main() {

    Reading today;

    today.setWindSpeed(37);
    today.setHumidity(32);
    today.setTemperature(32, 0);

    cout << "Wind Speed: " << today.getWindSpeed() << " mph" << endl;
    cout << "Humidity: " << today.getHumidity() << "%" << endl;
    cout << "Fahrenheit Temperature: " << today.getTemperatureFahrenheit() << " degrees" << endl;
    cout << "Celsius Temperature: " << today.getTemperatureCelsius() << " degrees" << endl;

    return 0;
}