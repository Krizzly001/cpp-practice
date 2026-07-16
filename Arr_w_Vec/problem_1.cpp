// EASY PROBLEM
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {5,8 ,2, 14, 7};
    int largest = 0;
    for(int i = 0; i < nums.size();i++) //Transverse once
    {
        if(nums[i] > largest)// if the current number is biggest then largest
        {
            largest = nums[i]; // make the current number the largest integar
        }
    }
    cout << largest << endl;// print on terminal

}