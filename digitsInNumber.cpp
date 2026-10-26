#include <iostream>
using namespace std;

void getDigit(int n){
    while(n != 0){
        int digit = n % 10;
        cout << digit << "\t";
        n = n / 10;
    }
}

int main() {

    int n = 8568;

    getDigit(n);

    return 0;
}