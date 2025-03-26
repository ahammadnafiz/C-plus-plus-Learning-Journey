#include <iostream>
using namespace std;


class Student
{
    public:
        int id;
        string name;
        double gpa;
        bool enrolled;

    Student(int id, string name, double gpa, bool enrolled) // Constructor same name as class
    {
        this->id = id;
        this->name = name;
        this->gpa = gpa;
        this->enrolled = enrolled;
    }

    void print()
    {
        cout << "ID: " << id << '\n';
        cout << "Name: " << name << '\n';
        cout << "GPA: " << gpa << '\n';
        cout << "Enrolled: " << enrolled << '\n';
    }
};

int main()
{
    /*
    Constructors = Special class functions that are called when an object is instantiated
    Syntax:
    className(parameters)
    {
        className(parameters)
        {
            // code
        }
        // code
    }
    */

    Student student1(1, "Alice", 3.7, true);
    Student student2(2, "Bob", 3.5, false);
    student1.print();
    cout << '\n';
    student2.print();


    return 0;
}