
#include <iostream>
using namespace std;


int main()
{
    /*
    Pointer is a variable that stores the memory address of another variable.
    The pointer variable is declared by placing an asterisk (*) before the variable name.
    The pointer variable can be assigned the address of another variable using the address-of operator (&).
    The pointer variable can be dereferenced using the dereference operator (*).
    The dereference operator retrieves the value stored at the memory address stored in the pointer variable.

    Every variable resides at a unique memory address. Pointers hold these addresses.
    */

    string name = "Nafiz";
    string *pName = &name;
    string freePizzas[5] = {"Pepperoni", "Cheese", "Hawaiian", "Veggie", "Meat Lovers"};
    string *pFreePizzas = freePizzas; //already a pointer so no need to use &

    cout << "Name: " << name << endl;
    cout << "Address of Name: " << &name << endl;
    cout << "Pointer Name: " << pName << endl;
    cout << "Address of Pointer Name: " << &pName << endl;
    cout << "Dereference Pointer Name: " << *pName << endl;

    cout << "Free Pizzas: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << pFreePizzas[i] << endl;
    }

    // Declaring and Initializing Pointers
    // type* pointerName;
    // int* pNum;
    
    int num = 5;
    int* ptr = &num; // ptr holds the address of num

    // Access the value at the address a pointer holds using *. This is called dereferencing.

    cout << "Value of num: " << *ptr << endl; // Output: 5
    *ptr = 10; // Change the value of num to 10
    cout << "Value of num: " << num << endl; // Output: 10

    return 0;
}