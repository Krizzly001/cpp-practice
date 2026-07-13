// Created: 7/12/2026
#include <iostream>
using namespace std;
int main()
{

    int arr[] = {1,1,2,2,3,4,4};
    int newArray[] = {};

    newArray[0] = arr[0];

    int size = sizeof(arr)/sizeof(arr[0]);
    int size2 = 1;
    

    bool isIn = true;
    int current = 1;


    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size2; j++)
        {
            cout << "comparing: " << arr[i] << " and " << newArray[j] << endl;
            if(arr[i] == newArray[j])
            {
                cout << "Already in new array\n" << endl;
                
            }
            else{
                cout << "Not in new array: Placing inside of array now\n" << endl;
                newArray[current] = arr[i];
                current++;
                size2++;
            }
        }
    }

    for(int newArray:newArray)
    {
        cout << newArray << " ";
    }
    cout << endl;

    



}