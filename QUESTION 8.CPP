/*

**Q8.** You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number.

You are given an integer array nums representing the data status of this set after the error.

Find the number that occurs twice and the number that is missing and return them in the form of an array.

*/

#include <iostream>
using namespace std;

int* findErrorNums(int nums[], int numsSize) {
    int* result = new int[2];
    int* count = new int[numsSize + 1](); 

    for (int i = 0; i < numsSize; i++) {
        count[nums[i]]++;
        if (count[nums[i]] == 2) {
            result[0] = nums[i]; 
        }
    }

    for (int i = 1; i <= numsSize; i++) {
        if (count[i] == 0) {
            result[1] = i;
            break;
        }
    }

    delete[] count;
    return result;
}

int main() {
    int nums[] = {1, 2, 2, 4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int* result = findErrorNums(nums, numsSize);

    cout << "Output: [" << result[0] << "," << result[1] << "]" << endl;

    delete[] result;

    return 0;
}
