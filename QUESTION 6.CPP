/*

Q6. Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

*/

#include <iostream>
#include <unordered_set>
using namespace std;

bool containsDuplicate(int nums[], int numsSize) {
    unordered_set<int> seen;

    for (int i = 0; i < numsSize; i++) {
        if (seen.count(nums[i]) > 0) {
            return true;
        }
        seen.insert(nums[i]);
    }

    return false;
}

int main() {
    int nums[] = {1, 2, 3, 1};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    bool result = containsDuplicate(nums, numsSize);

    cout << "Output: " << (result ? "true" : "false") << endl;

    return 0;
}
