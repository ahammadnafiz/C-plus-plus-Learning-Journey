#include <iostream>
using namespace std;

int main(){

    int choice;
    double temp, result;

    cout << "Temperature Conversion Menu:\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "3. Celsius to Kelvin\n";
    cout << "4. Kelvin to Celsius\n";
    cout << "5. Fahrenheit to Kelvin\n";
    cout << "6. Kelvin to Fahrenheit\n";
    cout << "Enter your choice (1-6): ";
    cin >> choice;

    cout << "Enter the temperature: ";
    cin >> temp;

    switch (choice)
    {
    case 1:
        result = (temp * 9/5) + 32;
        cout << "The temperature in Fahrenheit is: " << result << '\n';
        break;
    case 2:
        result = (temp - 32) * 5/9;
        cout << "The temperature in Celsius is: " << result << '\n';
        break;
    case 3:
        result = temp + 273.15;
        cout << "The temperature in Kelvin is: " << result << '\n';
        break;
    case 4:
        result = temp - 273.15;
        cout << "The temperature in Celsius is: " << result << '\n';
        break;
    case 5:
        result = (temp - 32) * 5/9 + 273.15;
        cout << "The temperature in Kelvin is: " << result << '\n';
        break;
    case 6: 
        result = (temp - 273.15) * 9/5 + 32;
        cout << "The temperature in Fahrenheit is: " << result << '\n';
        break;
    
    default:
        cout << "Invalid Choice" << '\n';
        break;
    }

    return 0;
}