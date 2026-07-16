// Move all Zeros to the end

#include<iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {0,1,0,3,12};

    // Go through the vector to find an array
    for(int i = 0; i < nums.size(); i++)
    {
        if(nums[i] == 0)//Find the next zero
        {
            for(int j = i + 1; j < nums.size();j++) // Find the next number thats not a zero
            {
                if(nums[j] != 0)
                {
                    swap(nums[i], nums[j]); //swap them
                    break; //Get out of the program snese already swapped once
                }
            }
        }// We move on the the next index
    }

    // Displays on terminal
    for(int nums: nums)
    {
        cout << nums << " ";
    }
    cout << endl;



}

