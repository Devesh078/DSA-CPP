#include <bits/stdc++.h>
using namespace std;

void RunningSum(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        cout << sum << " ";
    }
    cout << endl;
}

int main() {
    int arr[5] = {3, 5, 8, 9, 2};
    int n = sizeof(arr) / sizeof(int);

    RunningSum(arr, n);
    return 0;
}
