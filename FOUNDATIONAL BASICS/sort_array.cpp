// Bubble sort
// Time complexity: O(n^2)
// Space complexity: O(1)

#include <iostream>
using namespace std;

void sort(int arr[], int n);

int main()
{
    int arr[] = {5, 3, 8, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i: arr)
    {
        cout << i << " ";
    }

    sort(arr, n);

    cout << "\nSorted array: ";
    for (int i: arr)
    {
        cout << i << " ";
    }
    
    return 0;
}

void sort(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}