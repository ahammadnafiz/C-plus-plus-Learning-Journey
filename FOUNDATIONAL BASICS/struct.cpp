#include <iostream>
using namespace std;

struct Student
{
    int id;
    string name;
    double gpa;
    bool enrolled;
};


int main()
{

    /*
    struct = A collection of variables of different data types under a single name
    Syntax:
    struct name
    {
        dataType1 value1;
        dataType2 value2;
        ...
    } objectName;

    struct can contain:
    - variables
    - functions
    - constructors
    - destructors
    - operator overloads
    - nested classes
    - inheritance
    - access specifiers
    - etc.

    variables in a struct are called members
    members can be accessed using the member access operator (.)
    */

    Student student1;
    student1.id = 1;
    student1.name = "Alice";
    student1.gpa = 3.7;
    student1.enrolled = true;

    cout << "ID: " << student1.id << '\n';
    cout << "Name: " << student1.name << '\n';
    cout << "GPA: " << student1.gpa << '\n';
    cout << "Enrolled: " << student1.enrolled << '\n';


    return 0;
}