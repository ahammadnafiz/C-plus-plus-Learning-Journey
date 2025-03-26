#include <iostream>
using namespace std;

// struct Student
// {
//     int id;
//     string name;
//     double gpa;
//     bool enrolled;
// };

struct Car
{
    string make;
    string model;
    int year;
    double price;
};

void printCar(Car &car);
void changeYear(Car &car, int year);

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

    // Student student1;
    // student1.id = 1;
    // student1.name = "Alice";
    // student1.gpa = 3.7;
    // student1.enrolled = true;

    // cout << "ID: " << student1.id << '\n';
    // cout << "Name: " << student1.name << '\n';
    // cout << "GPA: " << student1.gpa << '\n';
    // cout << "Enrolled: " << student1.enrolled << '\n';

    Car car1;
    car1.make = "Toyota";
    car1.model = "Corolla";
    car1.year = 2018;
    car1.price = 15000.00;

    Car car2;
    car2.make = "Honda";
    car2.model = "Civic";
    car2.year = 2019;
    car2.price = 20000.00;

    // printCar(car1);
    // printCar(car2);

    changeYear(car1, 2020);
    printCar(car1);

    changeYear(car2, 2021);
    printCar(car2);

    return 0;
}

void printCar(Car &car) // pass by reference
{
    cout << "Make: " << car.make << '\n';
    cout << "Model: " << car.model << '\n';
    cout << "Year: " << car.year << '\n';
    cout << "Price: " << car.price << '\n';
    cout << '\n';
}

void changeYear(Car &car, int year)
{
    car.year = year;
}