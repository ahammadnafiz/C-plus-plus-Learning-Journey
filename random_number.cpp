#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    /*
    random number generator
    logic:
    1. seed the random number generator
    2. generate random number
    3. print the random number
    */

    // seed the random number generator
    srand(time(NULL));

    // generate random number
    int randomNumber = (rand() % 20) + 1;

    // print the random number
    cout << "Random Number: " << randomNumber << '\n';

    // Generating Random Number in a Range
    int min = 5, max = 10;
    
    for (int i = 0; i < 10; i++)
    {
        int randomNumber = (rand() % (max - min + 1)) + min;
        cout << randomNumber << ' ';
    }

    return 0;
}