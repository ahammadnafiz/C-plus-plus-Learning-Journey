#include <iostream>
using namespace std;

void swap(string &x, string &y);
int main()
{
    /*
    memory address = a locaiton in memory where a value is stored
    a memory address can accessed using the & operator
    */

//     string name = "Nafiz";
//     int age = 21;
//     bool student = true;

//     cout << "Name: " << name << " Address: " << &name << endl;
//     cout << "Age: " << age << " Address: " << &age << endl;
//     cout << "Student: " << student << " Address: " << &student << endl;

    string a = "Apple";
    string b = "Banana";

    cout << "Memory Address of a: " << &a << endl;
    cout << "Memory Address of b: " << &b << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    swap(a, b);

    cout << "Memory Address of a: " << &a << endl;
    cout << "Memory Address of b: " << &b << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return 0;
}


void swap(string &x, string &y)
{
    string temp = x;
    x = y;
    y = temp;
}