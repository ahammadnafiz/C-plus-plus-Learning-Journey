#include <iostream>
using namespace std;


class Human
{
    public:
        string name;
        int age;
        double height;
        double weight;

        void eat()
        {
            cout << name << " is eating." << '\n';
        }

        void sleep()
        {
            cout << name << " is sleeping." << '\n';
        }

        void talk()
        {
            cout << name << " is talking." << '\n';
        }
};


int main()
{

    /*
    class = A blueprint for creating objects
    An object is an instance of a class
    Syntax:
    class name
    {
        accessSpecifier:
            dataType1 value1;
            dataType2 value2;
            ...
        void functionName()
        {
            // code
        }
    } objectName;
    */

    Human human1;
    human1.name = "Alice";
    human1.age = 25;
    human1.height = 5.6;
    human1.weight = 140;

    cout << human1.name << '\n';
    cout << human1.age << '\n';
    cout << human1.height << '\n';
    cout << human1.weight << '\n';

    human1.eat();
    human1.sleep();
    human1.talk();


    return 0;
}