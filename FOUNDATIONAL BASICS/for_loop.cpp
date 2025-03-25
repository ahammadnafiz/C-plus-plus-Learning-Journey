#include <iostream>
using namespace std;


int main()
{
    /*
    for (initialization; condition; update) {
    // Code to be executed
    }
    */

    // Simple for loop
    for (int i = 1; i <= 10; i++)
    {
        cout << i << '\n';
    }

    // Using Break
    for (int x = 1; x <= 10; x++)
    {
        cout << x << '\n';
        if (x == 5)
        {
            break;
        }
    }

    // Using Continue
    for (int y = 1; y < 10; y++)
    {
        if (y % 2 == 0)
        {
            continue; // Skip the rest of the code inside the loop for this iteration
        }
        cout << y << ' ';
    }

    // Validate user input
    int age;
    cout << "Enter your age: ";
    cin >> age;
    for (; age < 0 || age > 100;)
    {
        cout << "Invalid age, please enter your age again: ";
        cin >> age;
    }
    cout << "Your age is: " << age << '\n';

    // Triangle Pattern
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << '\n';
    }

    // Reverse counting
    for (int i = 10; i >= 1; i--)
    {
        cout << i << '\n';
    }

    

    return 0;
}
