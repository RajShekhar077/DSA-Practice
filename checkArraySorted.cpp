#include <iostream>
#include <vector>

using namespace std;

bool isSorted(vector<int> arr, int n){
    if(n==0 || n==1){
        return true;
    }
    return arr[n-1] >= arr[n-2] && isSorted(arr, n-1);
}
int main() {

    vector<int> arr;
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        int element;
        cin >> element;
        arr.push_back(element);
    }
    isSorted(arr, arr.size()); 
    if(isSorted(arr, arr.size())){
        cout << "The array is sorted" << endl;
    } else {
        cout << "The array is not sorted" << endl;
    }

    return 0;
}