#include <iostream>
using namespace std;

int main()
{
    /*
    Array = A collection of elements of the same type.
    - Elements are stored in contiguous memory locations.
    - Elements can be accessed using their index (starting from 0).
    - Elements must be of the same data type (e.g., int, string).
    - Elements can be modified, added, removed, sorted, searched, etc.
    - Arrays can be multi-dimensional (e.g., 2D arrays).
    - Arrays can be passed to and returned from functions.
    - Elements can be compared, copied, assigned, concatenated, sliced, reversed, and shuffled.
    */

    // Array declaration: 'location' is an array of strings
    string location[] = {"London", "Paris", "New York", "Tokyo", "Sydney"};

    // Changing the first element of the 'location' array
    location[0] = "San Francisco";

    // Accessing elements: Print all elements in the 'location' array
    /*
    This loop iterates through all elements of the 'location' array.
    It starts from index 0 and goes until index 4 (total 5 elements).
    */
    for (int i = 0; i < 5; i++)
    {
        // Print the current location along with its index
        cout << "Location " << i + 1 << ": " << location[i] << endl;
    }

    // Array initialization: Declare an array 'numbers' with space for 5 elements
    int numbers[5];

    // Assign values to the 'numbers' array
    /*
    This loop assigns values from 1 to 5 to the 'numbers' array.
    The value of each element is 'i + 1' where 'i' is the current index.
    */
    for (int i = 0; i < 5; i++)
    {
        numbers[i] = i + 1;  // Assign value to each array element
    }
    cout << numbers[0] << endl;
    cout << numbers[1] << endl;
    cout << numbers[2] << endl; 
    cout << numbers[3] << endl;
    cout << numbers[4] << endl;

    return 0;
}