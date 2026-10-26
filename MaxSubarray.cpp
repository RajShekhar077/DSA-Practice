#include <iostream>
#include <climits>
using namespace std;

int main() {

    int currSum = 0;
    int maxSum = INT_MIN;

    int arr[] = {2, 5, 6, 10, 12, 21, 30, 34, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i=0; i<n; i++){
        currSum += arr[i];
        if(currSum > maxSum){
            maxSum = currSum;
        }
        if(currSum < 0){
            currSum = 0;
        }
    }

    cout << "Maximum sum subarray: " << maxSum << endl;

    return 0;
}