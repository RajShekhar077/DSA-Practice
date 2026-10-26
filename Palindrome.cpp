#include <iostream>
using namespace std;

int main() {
    int num = 5665;
    int original = num;
    int reverse = 0;

    while (num > 0) {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }

    if (original == reverse)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}