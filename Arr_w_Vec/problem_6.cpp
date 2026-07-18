#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> num = {1,2,2,3,4,4,4,5,5};
    int index = 1;

    for(int i = 1; i < num.size(); i++)
    {
        if(num[i] != num[i-1])//If a pair is unique
        {
            num[index] = num[i];// change the pointer index into the current new number
            index++;// move to the next index I  will have to change
        }
    }

    for(int j = 0; j < index; j++)
    {
        cout << num[j] << endl;
    }
}


