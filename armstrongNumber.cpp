#include <iostream>
#include<cmath>
using namespace std;

bool isArm(int n){  
    int copyN = n;
    int sumOfCubes = 0;
    while(n != 0){
        int dig=n%10;
        sumOfCubes += (dig*dig*dig);
        n = n/10;
    }
    return sumOfCubes == copyN;
}

int main() {

    int n;
    cout << "Enter the number: ";
    cin >> n;
    if(isArm(n)){
        cout << "is an Armstrong Number" <<endl;
    }
    else{
        cout << "Not an Armstrong Number" <<endl;
    }

    return 0;
}