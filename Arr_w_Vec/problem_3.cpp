#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> nums = {1,2,3,4,5,6};
    
    int size = nums.size();
    int max = 0;
    

    //Need to find the amount of numbers imma switch
    if(size%2 != 0)
    { // if my amount is odd I need to subtract one, beacuase it should not include the center sense it stays in the same position
        size--; // becomes even integar now, ONLY using it for the transvers
        max = size; //Find the max size, from starting to 0
    }
    else// if it is an even, just find my max
    {
        max = size-1; //Sub 1 sense it starts form 0
    }
    size = size/2; // Subtract by two sence we are moving two elements at a time, having to cut the amount of loops

    for(int i = 0; i < size; i++)
    {
        swap(nums[i], nums[max]);// Swaps the biggeing and end
        max--; // End num moves left
    }// first num moves right

    //Displays on terminal
    for(int nums : nums)
    {
        cout << nums << " ";
    }
    cout << endl;


}