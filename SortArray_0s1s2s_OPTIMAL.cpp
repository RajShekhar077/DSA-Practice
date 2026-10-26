#include <iostream>
using namespace std;

int main() {

    int arr[] = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
    int zeros = 0, ones = 0, twos = 0;

    for(int i=0; i<10; i++){
        if(arr[i] == 0){
            zeros++;
        }
        else if(arr[i] == 1){
            ones++;
        }
        else{
            twos++;
        }
    }

    for(int i=0; i<zeros; i++){
        cout << 0 <<" ";
    }
    for(int i=0; i<ones; i++){
        cout << 1 <<" ";
    }
    for(int i=0; i<twos; i++){
        cout << 2 <<" ";
    }
    

    return 0;
}