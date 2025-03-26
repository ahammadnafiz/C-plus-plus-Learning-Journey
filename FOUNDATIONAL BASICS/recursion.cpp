#include <iostream>
using namespace std;

void walk(int steps);
int factorial(int n);

int main()
{

    /*
    recursion = The process in which a function calls itself directly or indirectly
    1. Base case = The condition when the recursion ends
    2. Recursive case = The condition when the function calls itself
    3. Stack overflow = When the recursive functions are called too many times and the stack memory is full 

    Syntax:
    void functionName(parameters)
    {
        if (base case)
        {
            // stop the recursion
        }
        else
        {
            // recursive case
            functionName(parameters);
        }
    }
    */

    walk(10);
    cout << factorial(5) << '\n';

    return 0;
}

void walk(int steps)
{
    if (steps == 0)
    {
        cout << "You have arrived at your destination." << '\n';
    }
    else
    {
        cout << "You take a step." <<  steps << '\n';
        walk(steps - 1);
    }
}


int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}