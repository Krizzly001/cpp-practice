// Created: 7/12/2026
// Description: Move all zeros to the end of the array provided
// Array Example Problems:
// 0, 0, 0, 3, 6, 0, 3, 7
// 0, 4, 5, 1, 0, 6, 0, 1

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {0, 4, 5, 1, 0, 6, 0, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int temp = 0;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] == 0)
        {
            while(arr[i] == 0)
            {
                for(int j = i; j < size; j++)
                {
                    if(j == size-1)
                    {
                        arr[j] = 0;
                    }
                    else{
                        arr[j] = arr[j+1];
                    }
                }
                size--;
            }
        }
    }
    size = sizeof(arr)/sizeof(arr[0]);

    for(int h = 0; h < size; h++)
    {
        cout << arr[h] << " ";

    }
    cout << endl;

}