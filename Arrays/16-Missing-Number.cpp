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