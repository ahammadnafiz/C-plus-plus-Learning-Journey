#include <iostream>
using namespace std;


enum Day
{
    Monday = 0,
    Tuesday = 1,
    Wednesday = 2,
    Thursday = 3,
    Friday = 4,
    Saturday = 5,
    Sunday = 6
};



int main()
{

    /*
    enum = A way to create a user-defined data type that consists of integral constants
    Syntax:
    enum name
    {
        constant1,
        constant2,
        ...
    } objectName;

    By default, the first constant has the value 0, the second has the value 1, and so on

    enum can be used to create a list of named integer constants
    */

    Day today = Monday;

    switch(today)
    {
        case Monday:
            cout << "Today is Monday." << '\n';
            break;
        case Tuesday:
            cout << "Today is Tuesday." << '\n';
            break;
        case Wednesday:
            cout << "Today is Wednesday." << '\n';
            break;
        case Thursday:
            cout << "Today is Thursday." << '\n';
            break;
        case Friday:
            cout << "Today is Friday." << '\n';
            break;
        case Saturday:
            cout << "Today is Saturday." << '\n';
            break;
        case Sunday:
            cout << "Today is Sunday." << '\n';
            break;
        default:
            cout << "Invalid day." << '\n';
    }

    cout << '\n';

    // or you can use the constants directly

    switch (today)
    {
        case 0:
            cout << "Today is Monday." << '\n';
            break;
        case 1:
            cout << "Today is Tuesday." << '\n';
            break;
        case 2:
            cout << "Today is Wednesday." << '\n';
            break;
        case 3:
            cout << "Today is Thursday." << '\n';
            break;
        case 4:
            cout << "Today is Friday." << '\n';
            break;
        case 5:
            cout << "Today is Saturday." << '\n';
            break;
        case 6:
            cout << "Today is Sunday." << '\n';
            break;
        default:
            cout << "Invalid day." << '\n';
    }

    return 0;
}