#include <iostream>
using namespace std;

int main()
{
    int row;
    int column;

    cout << "Enter number of rows: ";
    cin >> row;


    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j<=row-i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        
        for (int l = 2; l <= i; l++)
        {
            cout << "* ";
        }
        cout << '\n';
    }

    for (int i = row-1; i>=1; i--)
    {
        for (int j = 1; j<=row-i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        
        for (int l = 2; l <= i; l++)
        {
            cout << "* ";
        }
        cout << '\n';
    }
        

    return 0;
}