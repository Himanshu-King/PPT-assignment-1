/*

**Q4.** You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.

*/

#include <iostream>
using namespace std;

int* plusOne(int digits[], int digitsSize, int& resultSize) {
    int carry = 1; 
    for (int i = digitsSize - 1; i >= 0; i--) {
        digits[i] += carry; 

        if (digits[i] < 10) {
            carry = 0;
            break;
        } else {
            digits[i] = 0;
        }
    }

    if (carry > 0) {
        resultSize = digitsSize + 1; 
        int* result = new int[resultSize]; 
        result[0] = carry; 
        for (int i = 0; i < digitsSize; i++) {
            result[i + 1] = digits[i];
        }
        return result;
    } else {
        resultSize = digitsSize; 
        return digits;
    }
}

int main() {
    int digits[] = {1, 2, 3};
    int digitsSize = sizeof(digits) / sizeof(digits[0]);
    int resultSize;

    int* result = plusOne(digits, digitsSize, resultSize);

    cout << "Output: [";
    for (int i = 0; i < resultSize; i++) {
        cout << result[i];
        if (i != resultSize - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;


    return 0;
}
