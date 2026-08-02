#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr;
    arr.push_back(5);
    arr.push_back(9);
    arr.push_back(8);
    arr.push_back(7);
    arr.push_back(6);
    arr.push_back(10);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
} 