#include <iostream>
using namespace std;

int num = 5; // Global variable

void display();

int main()
{
    int num = 10; // Local variable to main function
    cout << "Local variable num in main function: " << num << endl;
    cout << "Global variable num in main function: " << ::num << endl; // Accessing global variable with scope resolution operator
    display();
    return 0;

}

void display()
{
    int num = 20; // Local variable to display function
    cout << "Local variable num in display function: " << num << endl;
    cout << "Global variable num in main function: " << ::num << endl;
}