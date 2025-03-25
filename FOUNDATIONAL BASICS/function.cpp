#include <iostream>
using namespace std;

// Function to print a greeting message
void greet() {
    cout << "Hello, World!" << endl;
}

// Function with parameters and return value
int add(int a, int b) {
    return a + b;
}

// Function Overloading: Multiplication for integers and doubles
int multiply(int a, int b) {
    return a * b;
}

double multiply(double a, double b) {
    return a * b;
}

// Function with default parameter
void display(string name = "Guest") {
    cout << "Welcome " << name << endl;
}

// Function to swap two integers using reference
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    // Greeting function call
    greet();

    // Addition function call
    int sum = add(5, 7);
    cout << "Sum: " << sum << endl;

    // Function Overloading examples
    cout << "Multiplication (int): " << multiply(3, 4) << endl;
    cout << "Multiplication (double): " << multiply(2.5, 1.2) << endl;

    // Function with default parameter
    display(); // Calls with default value
    display("John"); // Calls with provided value

    // Swapping function example
    int x = 5, y = 10;
    cout << "Before Swap: x = " << x << ", y = " << y << endl;
    swap(x, y);
    cout << "After Swap: x = " << x << ", y = " << y << endl;
    
    return 0;
}
