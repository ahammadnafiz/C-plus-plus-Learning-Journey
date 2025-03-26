#include <iostream>
using namespace std;


// int max(int x, int y)
// {
//     return (x > y) ? x : y;
// }

// double max(double x, double y)
// {
//     return (x > y) ? x : y;
// }

// char max(char x, char y)
// {
//     return (x > y) ? x : y;
// }


template <typename T, typename U> // for multiple data types
auto myMax(T x, U y) // auto is for deducing the return type
{
    return (x > y) ? x : y;
}
// T myMax(T x, T y)
// {
//     return (x > y) ? x : y;
// }

int main()
{
    /*
    Function templates = A way to create a function that can work with many different data types
    Syntax:
    template <class T>
    T functionName(T parameter)
    {
        // code
    }
    */

    // cout << myMax(3, 5) << '\n';
    cout << myMax(3, 5.5) << '\n';
    cout << myMax('a', 'b') << '\n';

    return 0;
}