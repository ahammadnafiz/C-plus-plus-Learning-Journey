#include <iostream>
using namespace std;

int main()
{
    // Multidimensional array
    // Syntax:
    // data_type array_name[rows][columns];

    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };  // 2 rows, 3 columns

    // Accessing elements
    cout << arr[0][0] << endl; // 1
    cout << arr[0][1] << endl; // 2

    // Loop through the array
    for (int i = 0; i < 2; i++) // Rows
    {
        for (int j = 0; j < 3; j++) // Columns
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Matrix multiplication
    int A[2][2] = {
        {1, 2},
        {3, 4}
    };
    int B[2][2] = {
        {5, 6},
        {7, 8}
    };
    int C[2][2] = {};

    for (int i = 0; i < 2; i++) // Rows
    {
        for (int j = 0; j < 2; j++) // Columns
        {
            for (int k = 0; k < 2; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "Matrix multiplication result:\n";
    for (int i = 0; i < 2; i++) // Rows
    {
        for (int j = 0; j < 2; j++) // Columns
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }


    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int row = sizeof(matrix) / sizeof(matrix[0]);
    int col = sizeof(matrix[0]) / sizeof(matrix[0][0]);

    for (int i = 0; i < row; i++) // Rows
    {
        for (int j = 0; j < col; j++) // Columns
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}