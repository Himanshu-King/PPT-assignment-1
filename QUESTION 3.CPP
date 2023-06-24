/*

**Q3.** Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

*/

#include <iostream>
using namespace std;

int search(int a[], int size, int target)
{
    int st = 0;
    int end = size - 1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (a[mid] == target)
        {
            return mid;
        }
        else if(a[mid] < target)
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return st;
    
}

int main()
{
    int nums[] = {1, 3, 5, 6};
    int target = 5;
    int size = sizeof(nums)/sizeof(nums[0]);

    int output = search(nums, size, target);
    cout << "Output: " << output << endl;

    return 0;
}