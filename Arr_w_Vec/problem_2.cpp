// EASY PROBLEM
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {3, 6, 2, 9, 10, 15};

    int even = 0;

    for(int i = 0; i < nums.size(); i++)// transverse through the vector
    {
        if(nums[i]%2 == 0) // if the number can devide through the current number it in an even number
        {
            even++;// adds one point to the even variable
        }
    }
    cout << even << endl; // displays the even number on ther users terminal


}