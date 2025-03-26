#include <iostream>
using namespace std;

int main()
{
    string foods[5];
    int size = sizeof(foods) / sizeof(foods[0]);
    string temp;
    int count = 0; // Track the number of valid entries

    for (int i = 0; i < size; i++)
    {
        cout << "Enter food " << i + 1 << ": ";
        getline(cin, temp);
        if (temp == "q") {
            break;
        }
        foods[i] = temp;
        count++; // Increment only when valid input is stored
    }

    cout << "You entered: ";
    for (int i = 0; i < count; i++) // Loop only up to valid entries
    {
        cout << foods[i] << " ";
    }

    return 0;
}
