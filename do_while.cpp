#include <iostream>
using namespace std;

int main(){

    /*
     do while loop = do some block of code and then check the condition

    do {
    // Code to be executed
    } while (condition);
    */

    int number;
    do
    {
        cout << "Enter a Positive Number: ";
        cin >> number;
    } while (number < 0);

    cout << "The number is: " << number << '\n';
    
    // Simple do while loop
    int x = 1;
    do
    {
        cout << "Number: " << x << '\n';
        x++;
    } while (x <= 10);

    // Menu system
    int choice;
    do
    {
        cout << "\n=== Menu ===\n";
        cout << "1. Add\n";
        cout << "2. Subtract\n";
        cout << "3. Multiply\n";
        cout << "4. Divide\n";
        cout << "5. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: cout << "Add\n"; break;
        case 2: cout << "Subtract\n"; break;
        case 3: cout << "Multiply\n"; break;
        case 4: cout << "Divide\n"; break;
        case 5: cout << "Quit\n"; break;
        default: cout << "Invalid choice\n"; break;
        }
    } while (choice != 5);
    
    

    return 0;
}