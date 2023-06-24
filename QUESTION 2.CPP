/*

**Q2.** Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:

- Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
- Return k.

*/

#include <iostream>
using namespace std;

int deleteElement(int a[], int size, int val)
{
    int i=0;
    for(int j=0; j<size; j++)
    {
        if(a[j] != val)
        {
            a[i] = a[j];
            i++;
        }
    }
    return i;
}

int main()
{
    int nums[]={3, 2, 2, 3};
    int val = 3;
    int size = sizeof(nums)/sizeof(nums[0]);
    int output = deleteElement(nums, size, val);
    cout<<"Output: " << output << ", nums = [";
    for(int i=0; i<output; i++)
    {
        cout<< nums[i];
        if(i != output - 1)
        {
            cout<<",";
        }
    } 
    cout<<"]"<<endl;

    return 0;
}