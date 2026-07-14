// Created: 7/12/2026
// Descirptions:
// Make sure there are no duplicates in this specific set of numbers
// "1,1,2,2,3,4,4"
// Rules:
// - Just use the array provided

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1,1,2,2,3,4,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int temp = 0;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] == arr[i+1])
        {
            for(int j = i + 1; j < size; j++)
            {
                if(j == size-1)
                {
                    arr[j] = 0;
                }
                else
                {
                    arr[j] = arr[j+1];
                    
                }
            }
            arr[size-1] = 0;
            temp++;
        }
    }

    for(int k = 0; k < temp - 1; k++)
    {
        cout << arr[k] << " ";
    }
    cout << endl;

}