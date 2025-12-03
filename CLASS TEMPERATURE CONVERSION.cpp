#include <iostream>
using namespace std;

class Temperature {
private:
    float celsius;
    float fahrenheit;

public:

    void setValues() {
        int choice;

        cout << "Enter\n1 to convert Celsius to Fahrenheit.\n"
             << "2 to convert Fahrenheit to Celsius.\nChoice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter temperature (in Celsius): ";
                cin >> celsius;
                cout << "Fahrenheit = " << celsiusToFahrenheit() << endl;
                break;

            case 2:
                cout << "Enter temperature (in Fahrenheit): ";
                cin >> fahrenheit;
                cout << "Celsius = " << fahrenheitToCelsius() << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }
    }

    float celsiusToFahrenheit() {
        return (celsius * 9.0 / 5.0) + 32.0;
    }

    float fahrenheitToCelsius() {
        return (fahrenheit - 32.0) * 5.0 / 9.0;
    }
};

int main() {
    Temperature t;
    t.setValues();
    return 0;
}

