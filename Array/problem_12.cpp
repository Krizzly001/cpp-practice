// Created: 7/12/2026
// Description: Move all zeros to the end of the array provided

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {0, 0, 0, 3, 6, 0, 3, 7};
    int size = sizeof(arr)/sizeof(arr[0]);


    for(int i = 0; i < size; i++)
    {
        if(arr[i] == 0)
        {
            for(int j = i; j < size; j++)
            {
                arr[j] = arr[j + 1];
            }
            arr[size - 1] = 0;
        }
    }

    for(int h = 0; h < size; h++)
    {
        cout << arr[h] << " ";

    }
    cout << endl;

}