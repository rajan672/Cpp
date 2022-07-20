#include<iostream>
using namespace std;
int main(){
    int arr[100],n;
    cout<<"Enter the size of array = ";
    cin>>n;
    for(int i=0; i<=n; i++){
        cout<<"Enter the value of arr[ "<<i<<" ] = ";
        cin>>arr[i];
    }
}