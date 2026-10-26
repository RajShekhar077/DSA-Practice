#include <iostream>
using namespace std;

int swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    return 0;
}
int main() {

    int arr[] = {64, 22, 34, 25, 12, 92, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}