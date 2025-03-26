#include <iostream>
using namespace std;


int main()
{
    /*
    foreach loop expression:
    for (type var : array) {
        // code block to be executed
    }
    Loop that eases the traversal over an iterable object.

    */

    // Example 1
    int arr[] = {1, 2, 3, 4, 5};
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;
    
    // Example 2
    string str = "Hello";
    for (char c : str) {
        cout << c << " ";
    }
    cout << endl;

    // Example 3
    int arr2[] = {1, 2, 3, 4, 5};
    for (int &i : arr2) {
        i *= 2;
    }
    for (int i : arr2) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}