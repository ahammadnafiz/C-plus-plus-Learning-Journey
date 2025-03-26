#include <iostream>
using namespace std;


int main()
{
    // fill() function
    /*
    Fills a range of elements with a specific value.
    Syntax:
    fill(start, end, value)
    Parameters:
    start: Start of the range.
    end: End of the range.
    value: Value to be assigned to the elements in the range.
    */ 

    // string foods[10] = {"Pizza", "Burger", "Pasta", "Sandwich", "Salad", "Fries", "Tacos", "Sushi", "Steak", "Rice"};

    // for (string food : foods)
    // {
    //     cout << food << " ";
    // }

    const int SIZE = 10;

    string foods[SIZE];
    fill(foods, foods + 100, "Pizza");

    for (string food : foods)
    {
        cout << food << " ";
    }


    return 0;
}