// EASY PROBLEM
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {5,8 ,2, 14, 7};
    int largest = 0;
    for(int i = 0; i < nums.size();i++)
    {
        if(nums[i] > largest)
        {
            largest = nums[i];
        }
    }
    cout << largest << endl;

}