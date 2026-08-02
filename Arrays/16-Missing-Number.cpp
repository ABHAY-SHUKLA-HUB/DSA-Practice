#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=((n+1)*(n+2))/2;
    int add=0;
    for(int i=0;i<n;i++){
        add+=arr[i];
    }
    cout<<sum-add;   

    return 0;
}

// Agar array ka size bahut bada ho (10⁹ tak values), to kya ye formula hamesha safe hai?

// int ki limit cross kar sakta hai (Integer Overflow).

// Tab hum use karte hain:

// long long total = 1LL * (n + 1) * (n + 2) / 2;

