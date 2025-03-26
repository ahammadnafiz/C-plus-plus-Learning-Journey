#include <iostream>
using namespace std;

int main()
{
    /*
    Null Value = a special value that is used to indicate that the pointer is not pointing to a valid memory address.
    syntax: type* pointerName = nullptr;

    nullptr is a keyword that represents a null pointer.

    nulprts are helpful in avoiding undefined behavior when a pointer is not pointing to a valid memory address.
    */

    int* ptr = nullptr;
    int num = 5;

    // ptr = &num;

    if (ptr != nullptr)
    {
        cout << "Value of num: " << *ptr << endl;
        *ptr = 10;
        cout << "Value of num: " << num << endl;
    }
    else
    {
        cout << "Pointer is not pointing to a valid memory address." << endl;
    }

    return 0;
}