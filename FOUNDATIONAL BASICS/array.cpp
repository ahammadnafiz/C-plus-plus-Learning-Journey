#include <iostream>
using namespace std;

double getTotal(double prices[], int size);
int searchArray(int arr[], int size, int searchValue);

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

    // Iterating through the 'numbers' array using a loop
    string foods[] = {"Pizza", "Burger", "Pasta", "Salad", "Sushi"};

    for (int i = 0; i < sizeof(foods) / sizeof(string); i++)
    {
        cout << "Food " << i + 1 << ": " << foods[i] << endl;
    }

    // Pass array to a function
    double prices[] = {10.99, 5.99, 8.49, 12.79, 6.29};
    int size = sizeof(prices) / sizeof(prices[0]);
    double total = getTotal(prices, size);

    cout << "Total price: $" << total << endl;

    // Search for an element in an array
    int searchValue;
    int arr[] = {10, 20, 30, 40, 50};
    int index;
    int size2 = sizeof(arr) / sizeof(arr[0]);
    cout << "Enter a number to search: ";
    cin >> searchValue;

    index = searchArray(arr, size2, searchValue);

    if (index != -1)
    {
        cout << "Element found at index: " << index << endl;
    }
    else
    {
        cout << "Element not found in the array." << endl;
    }


    return 0;
}

double getTotal(double prices[], int size)
{
    double total = 0.0;

    for (int i = 0; i < size; i++)
    {
        total += prices[i];
    }

    return total;
}


int searchArray(int arr[], int size, int searchValue)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == searchValue)
        {
            return i;
        }
    }

    return -1;
}