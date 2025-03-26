#include <iostream>
using namespace std;

int main()
{
    /*
    dynamic memory = Memory that is allocated after the program is already running and compiled
    Use the 'new' keyword to allocate memory
    Use the 'delete' keyword to deallocate memory

    int *p = new int; // Allocate memory for an integer
    *p = 5; // Assign a value to the memory
    cout << *p << '\n'; // Output the value
    delete p; // Deallocate the memory
    */

    int *pNum  = NULL; // Pointer initialized with null
    pNum = new int; // Allocate memory for an integer
    *pNum = 5; // Assign a value to the memory
    cout << *pNum << '\n'; // Output the value
    //adress of pNum
    cout << pNum << '\n';

    // delete pNum; // Deallocate the memory

    char *pGrades = NULL;
    int size;

    pGrades = new char[size]; // Allocate memory for 5 characters
    cout << "Enter the number of grades: ";
    cin >> size;
    
    for (int i = 0; i < size; i++)
    {
        cout << "Enter grade " << i + 1 << ": ";
        cin >> pGrades[i];
    }

    delete[] pGrades; // Deallocate the memory

    return 0;
}