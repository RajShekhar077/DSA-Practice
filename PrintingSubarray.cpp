#include <iostream>
using namespace std;

int main() {

    int arr[] = {2, 5, 6, 10, 12, 21, 30, 34, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int st=0; st<n; st++){
        for(int end=st; end<n; end++){
            for(int i=st; i<=end; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}