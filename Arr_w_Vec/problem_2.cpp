// EASY PROBLEM
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {3, 6, 2, 9, 10, 15};

    int even = 0;

    for(int i = 0; i < nums.size(); i++)
    {
        if(nums[i]%2 == 0)
        {
            even++;
        }
    }
    cout << even << endl;


}