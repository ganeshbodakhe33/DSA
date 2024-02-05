#include<iostream>
using namespace std;

int maxSubArray(int nums[], int size) {
    int maxSum = INT_MIN;
    int currSum = 0;
    for(int i = 0; i < size; i++) {
        currSum = max(currSum + nums[i], nums[i]);
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}

int main() {
    int array[] = {-2,1,-3,4,-1,2,1,-5,4};
    int arraySize = sizeof(array) / sizeof(array[0]);
    
    cout << maxSubArray(array, arraySize);
    
    return 0;
}

