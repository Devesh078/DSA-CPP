#include <iostream>
using namespace std;

int main() {
    int num, original;
    cout << "Enter a number: ";
    cin >> num;

    original = num;  // store original number

    int sum = 0;

    while (num != 0) {
        int a = num % 10;
        sum = sum + (a * a * a);  // accumulate cubes
        num = num / 10;
    }

    if (sum == original) {
        cout << original << " is an Armstrong number." << endl;
    } else {
        cout << original << " is NOT an Armstrong number." << endl;
    }

    return 0;
}
