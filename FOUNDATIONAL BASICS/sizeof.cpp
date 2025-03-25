#include <iostream>
using namespace std;


int main()
{
    /*
    sizeof() Operator:
    - sizeof() is a compile-time operator that returns the size of a data type or variable in bytes.
    - It can be used with data types, variables, arrays, and expressions.
    - The size of a data type depends on the compiler and the system architecture.
    - The size of a data type is usually a multiple of the byte size (8 bits).
    - The size of a variable is determined by the data type it holds.
    - The size of an array is the product of the number of elements and the size of each element.
    - The size of a pointer is usually the same on a given system, regardless of the data type it points to.
    - The size of a structure is the sum of the sizes of its members, possibly with padding for alignment.
    - The size of a class is similar to the size of a structure, with additional considerations for inheritance and virtual functions.
    */

    double num = 10.5;
    string name = "John";
    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    // Size of a variable
    cout << "Size of num: " << sizeof(num) << " bytes\n";

    // Size of an expression
    cout << "Size of 10 + 20: " << sizeof(10 + 20) << " bytes\n";

    // Size of a string
    cout << "Size of name: " << sizeof(name) << " bytes\n";

    // Size of an array
    cout << "Size of grades: " << sizeof(grades) << " bytes\n";
    // Length of an array
    cout << "Length of grades: " << sizeof(grades) / sizeof(char) << " elements\n";

    // Size of data types
    cout << "Size of int: " << sizeof(int) << " bytes\n";
    cout << "Size of char: " << sizeof(char) << " bytes\n";
    cout << "Size of float: " << sizeof(float) << " bytes\n";
    cout << "Size of double: " << sizeof(double) << " bytes\n";
    cout << "Size of bool: " << sizeof(bool) << " bytes\n";

    return 0;
}