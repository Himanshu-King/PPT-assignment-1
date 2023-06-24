/*


💡 **Q1.** Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

*/

#include <iostream>
using namespace std;
int main()
{
    int a[]={2, 7, 11, 15};
    int target = 9;
    int size = sizeof(a)/sizeof(a[0]);
    for (int i = 0; i < size - 1 ; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if(a[i]+a[j]==target)
            {
                cout<<"nums["<<i<<"] + nums["<<j<<"] == "<<target<<endl;
            }
        }
        
    }
    

    return 0;
}