#include <iostream>
using namespace std;


int main(){

    /*
    while (condition) {
    // Code to be executed
    }
    */

    // Simple while loop
    int i = 1;

    while (i <= 10)
    {
        cout << i << '\n';
        i++; // i = i + 1 or i += 1, increase the value of i by 1
    }

    // Using Break
    int x = 1;
    while (x <= 10)
    {
        cout << x << '\n';
        if (x == 5)
        {
            break;
        }
        x++;
    }

    cout << x << '\n';

    // Using Continue
    int y = 1;
    while (y < 10)
    {
        y++;
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
    while (age < 0 || age > 100)
    {
        cout << "Invalid age, please enter your age again: ";
        cin >> age;
    }
    cout << "Your age is: " << age << '\n';

    // Triangle Pattern
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    int row = 1;
    while (row <= rows)
    {
        int col = 1;
        while (col <= row)
        {
            cout << "* ";
            col++;
        }
        cout << '\n';
        row++;
    }

    return 0;
}