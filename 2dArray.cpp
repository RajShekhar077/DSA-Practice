#include <iostream>
using namespace std;

int main() {

    int twoD_arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

    int rows=2, col=3;
    for(int i=0; i<rows; i++){
        for(int j=0; j<col; j++){
            cout << twoD_arr[i][j] << " ";
        }
        cout << endl; 
    }

    return 0;
}