#include <iostream>
#include  <vector>
using namespace std;
int main()
{
    vector<int> nums = {8,1,12,4,5};
    int largest = 0;
    int sec_largest = 0;

    for(int i = 0; i < nums.size(); i++)
    {
        if(nums[i] > largest)
        {
            sec_largest = largest;
            largest = nums[i];
        }
        
    }
    cout << sec_largest << endl;
}