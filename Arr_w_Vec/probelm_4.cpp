#include <iostream>
#include  <vector>
using namespace std;
int main()
{
    vector<int> nums = {8,1,12,4,5};
    int largest = 0;
    int sec_largest = nums[0]; // Wont be zero, what if there is a negative number in the vector

    for(int i = 0; i < nums.size(); i++)
    {
        if(nums[i] > largest) // If found the biggest number is initialized
        {
            sec_largest = largest; // the old largest becoems the second number
            largest = nums[i];
        }
        
    }
    cout << sec_largest << endl; // Display the second number
}