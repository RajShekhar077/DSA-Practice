#include <iostream>
using namespace std;

int main() {

    string s1 = "Prakhar", s2;

    for(int i=s1.length()-1; i >= 0; i--){
        s2 += s1[i];
    }

    cout << s2 << endl;
    return 0;
}