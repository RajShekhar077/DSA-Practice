#include <iostream>
using namespace std;

int main() {

    int arr[] = {2, 5, 6, 10, 12, 21, 30, 34, 50};
    int target = 44;
    int n = sizeof(arr) / sizeof(arr[0]);
    int l=0, r=n-1;
    while(l<r){
        int sum = arr[l] + arr[r];
        if(sum == target){
            cout << "Indices: " << l + 1 << ", " << r + 1 << endl;
            return 0;
        }
        else if(sum < target){
            l++;
        }
        else{
            r--;
        }
    }
    cout << "No pair found." << endl;
    return 0;
}