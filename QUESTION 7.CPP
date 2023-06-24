/*

**Q7.** Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the nonzero elements.

Note that you must do this in-place without making a copy of the array.

*/

#include <iostream>
using namespace std;

void moveZeroes(int nums[], int numsSize) {
    int p1 = 0; 

    for (int p2 = 0; p2 < numsSize; p2++) {
        if (nums[p2] != 0) {
            swap(nums[p1], nums[p2]);
            p1++;
        }
    }

    while (p1 < numsSize) {
        nums[p1] = 0;
        p1++;
    }
}

int main() {
    int nums[] = {0, 1, 0, 3, 12};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    moveZeroes(nums, numsSize);

    cout << "Output: [";
    for (int i = 0; i < numsSize; i++) {
        cout << nums[i];
        if (i != numsSize - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;

    return 0;
}
