#include <iostream>
using namespace std;

void printInfo(const string name, const int age);
int main()
{
    /*
    const parameters are used to prevent the modification of the parameter inside the function
    uses the const keyword before the data type of the parameter
    usefull for preventing accidental changes to the parameter
    also for reference parameters and pointers
    */

    string name = "Nafiz";
    int age = 21;
    printInfo(name, age);

    return 0;
}

void printInfo(const string name, const int age)
{
    // if we want to prevent the modification of the name parameter inside the function
    // we can use the const keyword before the data type of the parameter
    // this will prevent the modification of the name parameter inside the function
    // the function will not compile if we try to modify the name parameter inside the function

    // string name = "John";

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}