#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];

    // Input
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Step 1: Save first element
    int temp = arr[0];

    // Step 2: Shift all elements to left
    for(int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Step 3: Put first element at last
    arr[n - 1] = temp;

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}