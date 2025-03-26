#include <iostream>
using namespace std;


class Pizza
{
    public:
        string crust;
        string sauce;
        string cheese;
        string toppings;

    Pizza()
    {

    }
    
    Pizza(string crust, string sauce, string cheese, string toppings)
    {
        this->crust = crust;
        this->sauce = sauce;
        this->cheese = cheese;
        this->toppings = toppings;
    }

    Pizza(string crust, string sauce, string cheese) // Constructor overloading
    {
        this->crust = crust;
        this->sauce = sauce;
        this->cheese = cheese;
        this->toppings = "None";
    }
};


int main()
{

    /*
    Constructor overloading = Having multiple constructors in a class with the same name but different parameters
    Syntax:
    className(parameters)
    {
        // code
    }
    className(parameters)
    {
        // code
    }
    */

    Pizza pizza1("Thin", "Tomato", "Mozzarella", "Pepperoni");
    Pizza pizza2("Thick", "Pesto", "Cheddar"); // Constructor overloading
    Pizza pizza3; // Default constructor

    cout << "Pizza 1" << '\n';
    cout << "Crust: " << pizza1.crust << '\n';
    cout << "Sauce: " << pizza1.sauce << '\n'; 

    return 0;
}