#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        bool isLeader = true;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] > arr[i]) {
                isLeader = false;
                break;
            }
        }
        if(isLeader) {
            cout << arr[i] << " ";
        }
    }
    return 0;
}