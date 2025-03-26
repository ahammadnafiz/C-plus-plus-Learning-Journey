#include <iostream>
using namespace std;


class Vehicle
{

    public:
        string make;
        string model;
        int year;
        double price;


        void print()
        {
            cout << "Make: " << make << '\n';
            cout << "Model: " << model << '\n';
            cout << "Year: " << year << '\n';
            cout << "Price: " << price << '\n';
        }

};

class Car : public Vehicle
{
    public:
        int doors;
        string color;

        void print()
        {
            cout << "Make: " << make << '\n';
            cout << "Model: " << model << '\n';
            cout << "Year: " << year << '\n';
            cout << "Price: " << price << '\n';
            cout << "Doors: " << doors << '\n';
            cout << "Color: " << color << '\n';
        }

        void drive()
        {
            cout << "Driving..." << '\n';
        }
};

class Truck : public Vehicle
{
    public:
        int wheels;
        string color;

        void print()
        {
            cout << "Make: " << make << '\n';
            cout << "Model: " << model << '\n';
            cout << "Year: " << year << '\n';
            cout << "Price: " << price << '\n';
            cout << "Wheels: " << wheels << '\n';
            cout << "Color: " << color << '\n';
        }

        void drive()
        {
            cout << "Driving..." << '\n';
        }

        void tow()
        {
            cout << "Towing..." << '\n';
        }
};


class Shape
{
    public:
        double length;
        double width;

        void setLength(double length)
        {
            this->length = length;
        }

        void setWidth(double width)
        {
            this->width = width;
        }

        double getArea()
        {
            return length * width;
        }
};

class Rectangle : public Shape
{
    public:
        double getPerimeter()
        {
            return 2 * (length + width);
        }
};

class Circle : public Shape
{
    public:
        double getArea()
        {
            return 3.14 * length * length;
        }

        double getPerimeter()
        {
            return 2 * 3.14 * length;
        }
};


int main()
{
    /*
    Inheritance = A way to create a new class using an existing class
    The new class is called a derived class
    The existing class is called a base class
    Syntax:
    class baseClass
    {
        // code
    };
    class derivedClass : accessSpecifier baseClass
    {
        // code
    };
    */

    Vehicle vehicle1;
    vehicle1.make = "Toyota";
    vehicle1.model = "Corolla";
    vehicle1.year = 2018;
    vehicle1.price = 15000;

    vehicle1.print();


    Car car1;
    car1.make = "Rolls Royce";
    car1.model = "Phantom";
    car1.year = 2021;
    car1.price = 500000;
    car1.doors = 4;
    car1.color = "Black";

    car1.print();
    car1.drive();

    Truck truck1;
    truck1.make = "Ford";
    truck1.model = "F-150";
    truck1.year = 2020;
    truck1.price = 30000;
    truck1.wheels = 4;
    truck1.color = "Red";

    truck1.print();
    truck1.tow();


    Rectangle rectangle1;
    rectangle1.setLength(5);
    rectangle1.setWidth(3);
    cout << "Area: " << rectangle1.getArea() << '\n';
    cout << "Perimeter: " << rectangle1.getPerimeter() << '\n';

    return 0;
}