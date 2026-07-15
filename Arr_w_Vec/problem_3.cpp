#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> nums = {1,2,3,4,5,6};
    
    int size = nums.size();
    int max = 0;
    

    if(size%2 != 0)
    {
        size--;
        max = size;
    }
    else
    {
        max = size-1;
    }
    size = size/2;

    for(int i = 0; i < size; i++)
    {
        swap(nums[i], nums[max]);
        max--;
    }

    for(int nums : nums)
    {
        cout << nums << " ";
    }
    cout << endl;


}