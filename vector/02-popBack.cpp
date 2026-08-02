#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr;
    arr.push_back(10);
    cout<<arr.size()<<" "<<arr.capacity()<<endl;
    arr.push_back(20);
    cout<<arr.size()<<" "<<arr.capacity()<<endl;
    arr.push_back(30);
    cout<<arr.size()<<" "<<arr.capacity()<<endl;
    arr.push_back(0);
    cout<<arr.size()<<" "<<arr.capacity()<<endl;
    arr.push_back(5);
    cout<<arr.size()<<" "<<arr.capacity()<<endl;
    arr.push_back(7);
    cout<<arr.size()<<" "<<arr.capacity()<<endl;
    arr.pop_back();
    cout<<arr.size()<<" "<<arr.capacity()<<endl;
    arr.pop_back();
    cout<<arr.size()<<" "<<arr.capacity()<<endl;
    arr.push_back(1);
    cout<<arr.size()<<" "<<arr.capacity()<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}